/*
 * XREFs of ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1801051B0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18005B6AC (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180103BFC (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::PostActivateLivePreview(CWindowList *this, HWND *a2)
{
  __int64 v4; // rsi
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rbx
  struct CWindowData *MDIOwner; // rax
  int v9; // eax
  CWindowData *v11; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  v4 = 0LL;
  if ( *((_DWORD *)a2 + 2) )
  {
    while ( 1 )
    {
      SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2[v4 + 4], &v11);
      v6 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
        break;
      if ( !*((_DWORD *)a2 + 1) )
      {
        v7 = v11;
        if ( v11 )
        {
          if ( (*((_BYTE *)v11 + 665) & 1) != 0 )
          {
            MDIOwner = CWindowData::GetMDIOwner((HWND *)v11);
            if ( MDIOwner )
              v7 = MDIOwner;
            v11 = v7;
          }
          if ( (*((_DWORD *)v7 + 29) & 0x20000000) != 0 )
            *((_BYTE *)v7 + 667) |= 8u;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)a2 + 2) )
        goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1D5Fu);
  }
  else
  {
LABEL_12:
    v9 = CDesktopManager::PostActivateLivePreview(
           CDesktopManager::s_pDesktopManagerInstance,
           (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a2);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1D76u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
