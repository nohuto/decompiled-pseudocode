/*
 * XREFs of ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x18005D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180069ED6 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
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
  DWORD dwFlags; // eax
  CTopLevelWindow *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v13);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1650u);
  }
  else
  {
    v8 = v13;
    if ( v13 )
    {
      dwFlags = a3->dwFlags;
      if ( (a3->dwFlags & 1) != 0 )
      {
        *((_BYTE *)v13 + 665) = *((_BYTE *)v13 + 665) & 0xFB | (a3->fEnable ? 4 : 0);
        dwFlags = a3->dwFlags;
      }
      if ( (dwFlags & 4) != 0 )
        *((_BYTE *)v8 + 665) = *((_BYTE *)v8 + 665) & 0xF7 | (a3->fTransitionOnMaximized ? 8 : 0);
      v10 = (CTopLevelWindow *)*((_QWORD *)v8 + 55);
      if ( v10 )
        CTopLevelWindow::OnBlurBehindUpdated(v10);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
