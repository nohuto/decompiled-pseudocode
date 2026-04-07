/*
 * XREFs of ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1801024F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E5FC8 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ContentProtectionChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  char v7; // si
  char v8; // al
  char v9; // dl
  CTopLevelWindow *v10; // rcx
  int v11; // eax
  CWindowData *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v6 = v13;
    if ( v13 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 192LL))(a2);
      v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
      v9 = *((_BYTE *)v6 + 667);
      if ( ((v9 & 0x20) != 0) != v7 || ((v9 & 0x40) != 0) != v8 )
      {
        *((_BYTE *)v6 + 667) = v9 & 0x9F | (32 * (v7 & 1 | (2 * (v8 & 1))));
        v10 = (CTopLevelWindow *)*((_QWORD *)v6 + 55);
        if ( v10 )
          CTopLevelWindow::SetVisualProtectContent(v10, v8);
        v11 = CWindowData::NotifyRepresentationChanged(v6);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x16CDu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x16B9u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
