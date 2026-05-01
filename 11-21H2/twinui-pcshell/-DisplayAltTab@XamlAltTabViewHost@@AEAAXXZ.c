/*
 * XREFs of ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x1801E8D1C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::Run @ 0x1801E8DC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___--Run.c)
 *     ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x1805FDB00 (-ViewLoaded@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ?IsCloaked@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x1805B9900 (-IsCloaked@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?IsVisible@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x1805B9938 (-IsVisible@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ??C?$tip_test@U_tip_AltTabShowTest@@@tip@@QEAA?AV?$test_data_control@U_tip_AltTabShowTest@@@1@XZ @ 0x1805F9A08 (--C-$tip_test@U_tip_AltTabShowTest@@@tip@@QEAA-AV-$test_data_control@U_tip_AltTabShowTest@@@1@XZ.c)
 *     ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1805FC948 (-Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAltTabViewHost::DisplayAltTab(XamlAltTabViewHost *this, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  XamlAltTabViewHost *v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v6 = this;
  v7 = 1;
  v3 = (char *)this + 176;
  LOBYTE(a2) = 1;
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsVisible(
    (char *)this + 176,
    a2);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsCloaked(
    v3,
    0LL);
  v4 = *(_QWORD *)tip::tip_test<_tip_AltTabShowTest>::operator->((char *)this + 504, &v6);
  v5 = v4 + 152;
  if ( !v4 )
    v5 = 8LL;
  *(_BYTE *)v5 = 1;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>((__int64 *)&v6);
  tip::tip_test<_tip_TaskViewShowTest>::complete((__int64 *)this + 63);
  XamlSwitcherTelemetry::ShowAltTab::Stop((XamlAltTabViewHost *)((char *)this + 184), 1);
}
