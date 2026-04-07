/*
 * XREFs of ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18005B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18005B2A8 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___ @ 0x18005B2F8 (CWindowList--ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsCursorChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  char v6; // al
  CVisual *v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v10; // [rsp+60h] [rbp+18h] BYREF
  struct CWindowData **v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1EEDu, 0LL);
  }
  else if ( v10 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 352LL))(a2);
    *((_BYTE *)v10 + 676) ^= (*((_BYTE *)v10 + 676) ^ (2 * v6)) & 2;
    v7 = (CVisual *)*((_QWORD *)v10 + 55);
    if ( v7 )
    {
      CVisual::SetIsCursor(v7, (*((_BYTE *)v10 + 676) & 2) != 0);
      v11 = &v10;
      CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___(this, &v11);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
