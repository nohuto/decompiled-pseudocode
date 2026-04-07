/*
 * XREFs of ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180106BB0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180098414 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateAccentBlurRect(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *a2)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  CBaseObject **v7; // rcx
  struct CWindowData *v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v9);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v9 )
    {
      v6 = *((_QWORD *)v9 + 55);
      if ( v6 )
      {
        v7 = *(CBaseObject ***)(v6 + 280);
        if ( v7 )
          CAccent::UpdateAccentBlurRect(v7, (const struct tagRECT *)((char *)a2 + 12));
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1424u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
