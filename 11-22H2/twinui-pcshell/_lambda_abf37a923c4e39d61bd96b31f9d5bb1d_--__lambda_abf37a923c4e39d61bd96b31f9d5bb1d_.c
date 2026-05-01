/*
 * XREFs of _lambda_abf37a923c4e39d61bd96b31f9d5bb1d_::__lambda_abf37a923c4e39d61bd96b31f9d5bb1d_ @ 0x18076A404
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$21 @ 0x1802C390E (_TaskViewFrame--RegisterForEvents_--_1_--dtor$21.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_38d97ac131026f2cd3c3fc9c49359ac8____::_1_::dtor$0 @ 0x1802C39EC (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--XamlExplorerHost.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a____::_1_::dtor$0 @ 0x180768BBE (_WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHa_ea_180768BBE.c)
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$19 @ 0x18077A4CF (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$19.c)
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$21 @ 0x18078A36A (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$21.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$4 @ 0x18078D4F7 (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall lambda_abf37a923c4e39d61bd96b31f9d5bb1d_::__lambda_abf37a923c4e39d61bd96b31f9d5bb1d_(
        Platform::WeakReference *a1)
{
  Platform::WeakReference::InternalRelease(a1);
}
