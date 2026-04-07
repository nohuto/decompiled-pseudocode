/*
 * XREFs of ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x180109B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E5660 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateWindowTarget(CWindowList *this, struct IDwmWindow *a2, void *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  struct CWindowTarget **v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v11 = 2714;
LABEL_3:
    v8 = SyncedWindowData;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v11);
    goto LABEL_10;
  }
  if ( !v13 || (v9 = (struct CWindowTarget **)*((_QWORD *)v13 + 55)) == 0LL )
  {
    v7 = -2147467261;
    v11 = 2717;
    v8 = -2147467261;
    goto LABEL_9;
  }
  SyncedWindowData = CTopLevelWindow::CreateWindowTarget(v9, a3);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v11 = 2720;
    goto LABEL_3;
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
