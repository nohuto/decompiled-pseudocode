/*
 * XREFs of ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180004290
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800043A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceIconicRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  __int64 v7; // rdx
  char v8; // si
  HWND v9; // rbx
  bool v10; // r8
  int v11; // eax
  CWindowData *v13; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1719u, 0LL);
  }
  else
  {
    v6 = v13;
    if ( v13 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 216LL))(a2);
      if ( (*((_BYTE *)v6 + 665) & 1) != v8 )
      {
        *((_BYTE *)v6 + 665) ^= (v8 ^ *((_BYTE *)v6 + 665)) & 1;
        v9 = (HWND)*((_QWORD *)v6 + 5);
        LOBYTE(v7) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
          v7);
        *((_QWORD *)v6 + 104) = GetPropW(v9, (LPCWSTR)0xA920);
        if ( v8 && CWindowData::IsImmersiveWindow(v6) )
          CWindowData::ClearSnapshot(v6, 0, v10, 1);
        v11 = CWindowData::NotifyRepresentationChanged(v6);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1729u, 0LL);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
