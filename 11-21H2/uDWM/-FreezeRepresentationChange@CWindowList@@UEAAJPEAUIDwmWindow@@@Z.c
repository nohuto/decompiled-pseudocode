/*
 * XREFs of ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800133C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180011F7C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B2624 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::FreezeRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  CWindowData *v6; // rdi
  char v7; // bl
  bool v8; // r8
  char v9; // bl
  int v10; // eax
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1737u);
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
      if ( *((HWND *)v6 + 5) != CWindowList::GetShellWindowForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                  *((_QWORD *)v6 + 17))
        || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() == v7 )
      {
        if ( ((*((_BYTE *)v6 + 668) & 8) != 0) != v7 )
        {
          v9 = *((_BYTE *)v6 + 668) ^ (*((_BYTE *)v6 + 668) ^ (8 * v7)) & 8;
          *((_BYTE *)v6 + 668) = v9;
          if ( (v9 & 8) != 0 )
            CWindowData::SnapshotWindow(v6);
          else
            CWindowData::ClearSnapshot(v6, 1, v8, 0);
          v10 = CWindowData::NotifyRepresentationChanged(v6);
          v5 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x174Eu);
        }
      }
      else
      {
        CDesktopThumbnail::FreezeDesktopThumbnail(v6, v7);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
