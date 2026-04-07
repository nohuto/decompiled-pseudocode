/*
 * XREFs of ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180103210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E4A44 (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroyWindowTarget(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  int v6; // r9d
  CTopLevelWindow *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CWindowData *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v9 = 2646;
LABEL_3:
    v6 = SyncedWindowData;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v9);
    goto LABEL_10;
  }
  if ( !v10 || (v7 = (CTopLevelWindow *)*((_QWORD *)v10 + 55)) == 0LL )
  {
    v5 = -2147467261;
    v9 = 2649;
    v6 = -2147467261;
    goto LABEL_9;
  }
  SyncedWindowData = CTopLevelWindow::DestroyWindowTarget(v7);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v9 = 2652;
    goto LABEL_3;
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
