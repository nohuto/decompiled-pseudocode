/*
 * XREFs of ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180763A14
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::Run @ 0x1802ECA00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___--Run.c)
 *     ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x180766B10 (-ViewLoaded@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?IsVisible@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732A8 (-IsVisible@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?IsCloaked@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732E0 (-IsCloaked@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802897DC (--1-$test_data_control@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x180289880 (--C-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA-AV.c)
 *     ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180765914 (-Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAltTabViewHost::DisplayAltTab(XamlAltTabViewHost *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  void *v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 168);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsVisible((_QWORD *)this + 21);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsCloaked(v2);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::operator->(
                (__int64)this + 496,
                (__int64 *)&v4)
           + 264) = 1;
  tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>(
    &v4,
    v3);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)this + 62);
  XamlSwitcherTelemetry::ShowAltTab::Stop((XamlAltTabViewHost *)((char *)this + 176), 1);
}
