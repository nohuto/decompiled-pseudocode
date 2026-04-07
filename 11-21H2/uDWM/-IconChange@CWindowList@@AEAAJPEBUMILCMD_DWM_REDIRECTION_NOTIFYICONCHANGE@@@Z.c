/*
 * XREFs of ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180020C14
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B578 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IconChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *a2)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rcx
  CVisual *v11; // rcx
  CWindowIconic *v12; // rcx
  int v13; // eax
  struct CWindowData *v14; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+18h]

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v14);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1122u);
    goto LABEL_7;
  }
  v6 = v14;
  if ( v14 )
  {
    v7 = 0;
    v8 = *(_QWORD *)((char *)a2 + 12);
    if ( *((_QWORD *)v14 + 19) != v8 )
    {
      *((_QWORD *)v14 + 19) = v8;
      v7 = 1;
    }
    v9 = *(_QWORD *)((char *)a2 + 20);
    if ( *((_QWORD *)v6 + 20) == v9 )
    {
      if ( !v7 )
        goto LABEL_7;
    }
    else
    {
      *((_QWORD *)v6 + 20) = v9;
    }
    v11 = (CVisual *)*((_QWORD *)v6 + 55);
    if ( v11 )
      CVisual::SetDirtyFlags(v11, 0x20000);
    v12 = (CWindowIconic *)*((_QWORD *)v6 + 61);
    if ( v12 )
    {
      v13 = CWindowIconic::OnIconUpdated(v12, 1);
      v5 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x113Du);
    }
  }
LABEL_7:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
