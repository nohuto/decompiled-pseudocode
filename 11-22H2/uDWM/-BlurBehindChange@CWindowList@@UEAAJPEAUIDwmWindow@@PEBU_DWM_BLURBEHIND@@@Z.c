/*
 * XREFs of ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x180056F10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001636C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::BlurBehindChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        const struct _DWM_BLURBEHIND *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rdx
  CTopLevelWindow *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x16B1u, 0LL);
  }
  else
  {
    v8 = v12;
    if ( v12 )
    {
      if ( (a3->dwFlags & 1) != 0 )
        *((_BYTE *)v12 + 673) = *((_BYTE *)v12 + 673) & 0xFB | (a3->fEnable ? 4 : 0);
      if ( (a3->dwFlags & 4) != 0 )
        *((_BYTE *)v8 + 673) = *((_BYTE *)v8 + 673) & 0xF7 | (a3->fTransitionOnMaximized ? 8 : 0);
      v9 = (CTopLevelWindow *)*((_QWORD *)v8 + 55);
      if ( v9 )
        CTopLevelWindow::OnBlurBehindUpdated(v9);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
