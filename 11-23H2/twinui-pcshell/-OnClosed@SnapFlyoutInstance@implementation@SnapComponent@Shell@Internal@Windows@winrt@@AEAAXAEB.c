/*
 * XREFs of ?OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180690630
 * Callers:
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18069161C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?XamlContent@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@@Z @ 0x1800730C0 (-XamlContent@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ?IsCloaked@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732E0 (-IsCloaked@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ??$SnapFlyoutInstance_BarClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x18068D014 (--$SnapFlyoutInstance_BarClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyoutInstance_FlyoutClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x18068D25C (--$SnapFlyoutInstance_FlyoutClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnClosed(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct IInspectable *a3)
{
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 93);
  if ( v4 == 1 )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_FlyoutClosed<unsigned int &>((int *)this + 80);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsCloaked((_QWORD *)this + 37);
  }
  else if ( v4 == 2 )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_BarClosed<unsigned int &>((int *)this + 80);
  }
  *(_WORD *)((char *)this + 339) = 256;
  v5 = 0LL;
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::XamlContent(
    (_QWORD *)this + 37,
    &v5);
}
