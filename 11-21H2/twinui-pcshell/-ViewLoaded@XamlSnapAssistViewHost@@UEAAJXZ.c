/*
 * XREFs of ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180604430
 * Callers:
 *     ?ViewLoaded@XamlSnapAssistViewHost@@WBA@EAAJXZ @ 0x180211520 (-ViewLoaded@XamlSnapAssistViewHost@@WBA@EAAJXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x180042AE4 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Stop@ShowSnapAssist@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180603F68 (-Stop@ShowSnapAssist@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapAssistShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapAssistShowTest@@@details@tip@@@std@@XZ @ 0x180604944 (-ensure_data@-$tip_test@U_tip_SnapAssistShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlSnapAssistViewHost::ViewLoaded(XamlSnapAssistViewHost *this, __int64 a2)
{
  _QWORD *v3; // rbx
  signed int v4; // eax
  signed int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  signed int v8; // eax
  _QWORD *v9; // rax
  char *v10; // rbx
  __int64 v11; // rax
  char v12; // dl
  const char *v13; // r9
  __int64 result; // rax
  char *v15; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v15 = (char *)this - 136;
  LOBYTE(v16) = 1;
  v3 = (_QWORD *)((char *)this + 128);
  LOBYTE(a2) = 1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 88LL))(*((_QWORD *)this + 16), a2);
  try
  {
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 104LL))(*v3, 0LL);
    if ( v5 < 0 )
      winrt::throw_hresult(v5);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate(v3);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
      1u,
      v6,
      v7);
    if ( *((_QWORD *)this + 67) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 160LL))(*v3);
      if ( v8 < 0 )
        winrt::throw_hresult(v8);
    }
    v9 = (_QWORD *)tip::tip_test<_tip_SnapAssistShowTest>::ensure_data((char *)this + 472);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v15,
      v9);
    v10 = v15;
    tip::details::test_common_data<0>::begin_update((__int64)(v15 + 8));
    v11 = (__int64)(v10 + 152);
    if ( !v10 )
      v11 = 8LL;
    *(_BYTE *)v11 = 1;
    if ( v10 )
    {
      tip::details::test_common_data<0>::end_update((__int64)(v10 + 8));
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v15);
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    tip::tip_test<_tip_TaskViewShowTest>::complete((__int64 *)this + 59);
    XamlSwitcherTelemetry::ShowSnapAssist::Stop((XamlSnapAssistViewHost *)((char *)this + 152), v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x165,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           v13);
  }
  return result;
}
