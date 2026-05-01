/*
 * XREFs of ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180062B98
 * Callers:
 *     ?EnsureXamlIslandHosting@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x180062B18 (-EnsureXamlIslandHosting@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAt@?$IVectorView@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Collections@Foundation@Windows@@UE$AAAPE$AAUIXamlMetadataProvider@Markup@Xaml@UI@4@I@Z @ 0x180062E44 (-GetAt@-$IVectorView@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Collections@Foundation.c)
 *     RegExists @ 0x180062ED4 (RegExists.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@2@XZ @ 0x180062FA0 (-start_and_watch_errors@-$tip_test@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@tip@@QE.c)
 *     ?get@MetadataProviders@NativeHostingXamlMetadataProvider@Desktop@ComposableShell@WindowsInternal@@SAPE$AAU?$IVectorView@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x1800630DC (-get@MetadataProviders@NativeHostingXamlMetadataProvider@Desktop@ComposableShell@WindowsInternal.c)
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x180063244 (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x18018D45C (IsQueryWin32SubsystemHostPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     RegGetDword @ 0x1805E6E2C (RegGetDword.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlExplorerHost::EnsureMetadataRegistered(__int64 a1)
{
  bool v2; // di
  std::_Ref_count_base *v3; // rbx
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rbx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, __int64); // rdi
  __int64 v13; // r15
  int v14; // eax
  int Win32SubsystemHost; // eax
  std::_Ref_count_base *v16; // rbx
  __int64 v17; // rdx
  std::_Ref_count_base *v18[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v20[24]; // [rsp+38h] [rbp-38h] BYREF
  int v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v23; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v25; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+50h]
  __int64 v28; // [rsp+C8h] [rbp+58h]

  if ( !*(_BYTE *)(a1 + 96) )
  {
    *(_OWORD *)v18 = 0LL;
    tip::tip_test<XamlExplorerHostTipTests::_tip_RegisterMetadataTest>::start_and_watch_errors(v18, v19);
    if ( v18[1] )
      std::_Ref_count_base::_Decref(v18[1]);
    if ( !(unsigned __int8)IsQueryWin32SubsystemHostPresent()
      || (Win32SubsystemHost = QueryWin32SubsystemHost(), Win32SubsystemHost != 1) && Win32SubsystemHost != 2 )
    {
      v2 = (unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status", L"AuditBoot") == 1
        && (unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status")
        || (unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status\\AuditBootVolatile", 0LL) == 1;
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v18,
        &v22);
      v3 = v18[0];
      tip::details::test_common_data<0>::begin_update((char *)v18[0] + 8);
      v4 = (__int64)v3 + 152;
      if ( !v3 )
        v4 = 8LL;
      *(_BYTE *)v4 = v2;
      if ( v3 )
      {
        tip::details::test_common_data<0>::end_update((char *)v3 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v18);
      }
      if ( v18[1] )
        std::_Ref_count_base::_Decref(v18[1]);
      v5 = AddDependencyToProcessPackageGraph(L"Microsoft.VCLibs.140.00_8wekyb3d8bbwe", 0LL, 0LL, 0LL);
      if ( v5 == -2147009196 )
      {
        std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
          v18,
          &v22);
        v16 = v18[0];
        tip::details::test_common_data<0>::begin_update((char *)v18[0] + 8);
        v17 = (__int64)v16 + 153;
        if ( !v16 )
          v17 = 9LL;
        *(_BYTE *)v17 = 1;
        if ( v16 )
        {
          tip::details::test_common_data<0>::end_update((char *)v16 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(v18);
        }
        if ( v18[1] )
          std::_Ref_count_base::_Decref(v18[1]);
      }
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5F,
          (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
          (const char *)(unsigned int)v5,
          (int)v18[0]);
      v6 = AddDependencyToProcessPackageGraph(L"Microsoft.UI.Xaml.CBS_8wekyb3d8bbwe", 0LL, 0LL, 0LL);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x61,
          (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
          (const char *)(unsigned int)v6,
          (int)v18[0]);
    }
    XamlExplorerHost::GetRuntimeSiteAggregator(a1, &v26);
    v7 = WindowsInternal::ComposableShell::Desktop::NativeHostingXamlMetadataProvider::MetadataProviders::get();
    v25 = v7;
    v8 = __abi_winrt_ptr_ctor(v7);
    v27 = v8;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v9 = 0;
    v10 = v26;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, &v25);
      if ( v11 < 0 )
      {
        __abi_WinRTraiseException(v11);
        JUMPOUT(0x18024A522LL);
      }
      if ( v9 >= (unsigned int)v25 )
        break;
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL);
      v13 = Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Markup::IXamlMetadataProvider __gc *>::GetAt(
              v8,
              v9);
      v28 = v13;
      v14 = v12(v10, v13);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x68,
          (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
          (const char *)(unsigned int)v14,
          (int)v18[0]);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      ++v9;
    }
    *(_BYTE *)(a1 + 96) = 1;
    tip::details::test_common_data<0>::complete(v22 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    if ( v21 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
  }
}
