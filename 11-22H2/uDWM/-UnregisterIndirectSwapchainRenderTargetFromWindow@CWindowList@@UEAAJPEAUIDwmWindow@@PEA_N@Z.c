/*
 * XREFs of ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x18010D360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x1800371D8 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UnregisterIndirectSwapchainRenderTargetFromWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        bool *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  CTopLevelWindow *v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  *a3 = 0;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v11 = 6347;
LABEL_3:
    v8 = SyncedWindowData;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v11);
    goto LABEL_10;
  }
  if ( !v12 || (v9 = (CTopLevelWindow *)*((_QWORD *)v12 + 55)) == 0LL )
  {
    v7 = -2147467261;
    v11 = 6350;
    v8 = -2147467261;
    goto LABEL_9;
  }
  SyncedWindowData = CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(v9, a3);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v11 = 6353;
    goto LABEL_3;
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v7;
}
