/*
 * XREFs of ?OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUActivationChangedEventArgs@XamlExplorerHost@4567@@Z @ 0x1805B9A30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180013368 (-IsActive@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActiva.c)
 *     ?NewForeground@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_KXZ @ 0x1800133AC (-NewForeground@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIA.c)
 *     ??$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z @ 0x1805B7168 (--$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnActivationChanged(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs *a3)
{
  bool v3; // di
  HWND v6; // rbx

  v3 = 0;
  if ( !*((_BYTE *)this + 300) )
  {
    if ( winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::IsActive((__int64 *)a3) )
    {
      v6 = (HWND)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::NewForeground((__int64 *)a3);
      v3 = v6 == GetForegroundWindow();
    }
    *((_BYTE *)this + 298) = v3;
    SnapFlyoutTelemetry::SnapFlyoutInstance_ActivationChanged<unsigned int &,bool &>(
      (int *)this + 70,
      (char *)this + 298);
  }
}
