/*
 * XREFs of ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18076EC60
 * Callers:
 *     ?ViewLoaded@XamlSnapAssistViewHost@@WBA@EAAJXZ @ 0x1802AE7C0 (-ViewLoaded@XamlSnapAssistViewHost@@WBA@EAAJXZ.c)
 * Callees:
 *     ?IsVisible@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732A8 (-IsVisible@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?IsCloaked@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732E0 (-IsCloaked@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180223D70 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F44 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?open@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ @ 0x18022BA00 (-open@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B200 (--1-$test_data_control@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@2@XZ @ 0x18028B2B0 (-data@-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18076C300 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowSnapAssist@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18076E674 (-Stop@ShowSnapAssist@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?TryActivate@XamlSnapAssistViewHost@@AEAA_NXZ @ 0x18076EB1C (-TryActivate@XamlSnapAssistViewHost@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlSnapAssistViewHost::ViewLoaded(XamlSnapAssistViewHost *this)
{
  XamlSnapAssistViewHost *v2; // rbx
  void **v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const char *v7; // r9
  __int64 result; // rax
  void *v9; // rcx
  signed int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  char v13; // dl
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF
  void *v17; // [rsp+48h] [rbp+10h] BYREF

  v2 = (XamlSnapAssistViewHost *)((char *)this - 136);
  v14 = (_DWORD)this - 136;
  v3 = (void **)((char *)this + 160);
  v4 = (_QWORD *)((char *)this + 160);
  try
  {
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsVisible(v4);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsCloaked(v3);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      v5,
      v6);
    if ( XamlSnapAssistViewHost::TryActivate(v2) )
    {
      if ( *((_QWORD *)this + 69) )
      {
        v9 = *v3;
        if ( *v3 )
        {
          v16 = 0LL;
          v10 = (**(__int64 (__fastcall ***)(void *, _QWORD *, void **))v9)(
                  v9,
                  winrt::impl::guid_v<IXamlExplorerHostWindowLocal>,
                  &v16);
          if ( v10 < 0 )
            winrt::throw_hresult(v10);
          v9 = v16;
          v17 = v16;
        }
        else
        {
          v17 = 0LL;
        }
        v11 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, *((_QWORD *)this + 69));
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x189,
            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
            (const char *)(unsigned int)v11,
            v14);
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v17);
      }
      v12 = *tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>::data(
               (__int64)this + 496,
               (__int64 *)&v16);
      *(_BYTE *)(v12 + 264) = 1;
      tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>(
        &v16,
        v12);
      tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)this + 62);
      XamlSwitcherTelemetry::ShowSnapAssist::Stop((XamlSnapAssistViewHost *)((char *)this + 176), v13);
      result = 0LL;
    }
    else
    {
      v16 = 0LL;
      if ( tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::open(&v16) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                      (__int64)&v16,
                      (__int64 *)&v17)
                 + 276) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v17);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(&v16);
      CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView((__int64)v2 + 8);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x192,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           v7);
  }
  return result;
}
