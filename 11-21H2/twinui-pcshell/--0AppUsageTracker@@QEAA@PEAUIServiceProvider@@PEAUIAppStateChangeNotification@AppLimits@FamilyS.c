/*
 * XREFs of ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x1800D8078
 * Callers:
 *     ??$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppUsageTracker@@@12@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x180151CC4 (--$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA?AV?$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@XZ @ 0x1801562EC (--$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA-AV-$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@.c)
 *     ??$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA?AV?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@XZ @ 0x180172F68 (--$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA-AV-$ComPtr@VWin32AppStateManager@@@WRL@Microso.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180179D90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 *     ??0?$com_ptr_t@UIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18017F904 (--0-$com_ptr_t@UIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@Uerr_except.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AppUsageTracker::AppUsageTracker(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, __int64); // rbp
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-38h]
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  *(_DWORD *)(a1 + 52) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewChangeListener'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &AppUsageTracker::`vftable';
  *(_QWORD *)(a1 + 8) = &AppUsageTracker::`vftable'{for `IApplicationViewChangeListener'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,wil::err_exception_policy>::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,wil::err_exception_policy>(
    a1 + 96,
    a3);
  *(_DWORD *)(a1 + 104) = a4;
  v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64))(*(_QWORD *)a2 + 24LL);
  v9 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = v8(a2, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, a1 + 72);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
      (const char *)(unsigned int)v10,
      v18);
  v11 = (__int64 *)wil::MakeOrThrow<UwpAppStateManager,>(&v21);
  v12 = *v11;
  *v11 = 0LL;
  if ( v21 )
  {
    v21 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release();
  }
  v21 = 0LL;
  v13 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v12;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v21);
  v14 = (__int64 *)wil::MakeOrThrow<Win32AppStateManager,>(v19);
  v15 = *v14;
  *v14 = 0LL;
  if ( v19[0] )
  {
    v19[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release();
  }
  v21 = 0LL;
  v16 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = v15;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v21);
  return a1;
}
