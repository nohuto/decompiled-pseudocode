/*
 * XREFs of ?OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUActivationChangedEventArgs@XamlExplorerHost@4567@@Z @ 0x1806905B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180072DC0 (-IsActive@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActiva.c)
 *     ?NewForeground@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180079338 (-NewForeground@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIA.c)
 *     ??$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z @ 0x18068CFB0 (--$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnActivationChanged(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs *a3)
{
  bool v3; // di
  HWND v6; // rbx

  v3 = 0;
  if ( !*((_BYTE *)this + 340) )
  {
    if ( winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::IsActive((__int64 *)a3) )
    {
      v6 = (HWND)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::NewForeground((__int64 *)a3);
      v3 = v6 == GetForegroundWindow();
    }
    *((_BYTE *)this + 338) = v3;
    SnapFlyoutTelemetry::SnapFlyoutInstance_ActivationChanged<unsigned int &,bool &>(
      (int *)this + 80,
      (char *)this + 338);
  }
}
