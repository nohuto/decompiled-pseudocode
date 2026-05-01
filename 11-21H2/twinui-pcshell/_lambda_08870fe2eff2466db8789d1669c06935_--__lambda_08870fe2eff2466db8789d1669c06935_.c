/*
 * XREFs of _lambda_08870fe2eff2466db8789d1669c06935_::__lambda_08870fe2eff2466db8789d1669c06935_ @ 0x180440EF4
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$21 @ 0x18021325D (_TaskViewFrame--RegisterForEvents_--_1_--dtor$21.c)
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$45 @ 0x1802132F3 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$45.c)
 *     _XamlAllUpViewController::[IMonitorFrameDismissAnimationCallback]::MonitorFrameDismissAnimationCompleted_::_1_::dtor$1 @ 0x180214794 (_XamlAllUpViewController--[IMonitorFrameDismissAnimationCallback]--MonitorFrameDismissAnimationC.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnLightDismiss_::_1_::dtor$1 @ 0x180444657 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnLightDismiss_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::VirtualDesktopInvoked_::_1_::dtor$1 @ 0x180444E41 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--VirtualDesktopInvoked_--_1_--dtor$1.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$4 @ 0x1804481F7 (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$4.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_ef4126646d7c3b67819dc4e9d2cf7836____::_1_::dtor$0 @ 0x1805FF154 (_WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHa_ea_1805FF154.c)
 *     _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$16 @ 0x18060F482 (_XamlAltTabViewController--RegisterForEvents_--_1_--dtor$16.c)
 *     _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$21 @ 0x180611F51 (_XamlSnapAssistViewController--RegisterForEvents_--_1_--dtor$21.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall lambda_08870fe2eff2466db8789d1669c06935_::__lambda_08870fe2eff2466db8789d1669c06935_(
        Platform::WeakReference *a1)
{
  Platform::WeakReference::InternalRelease(a1);
}
