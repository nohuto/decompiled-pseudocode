/*
 * XREFs of ??1WeakReference@Platform@@QEAA@XZ @ 0x180424374
 * Callers:
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::FirstFrameRendered_::_1_::dtor$0 @ 0x180214782 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--FirstFrameRendered_--_1_--dtor.c)
 *     _XamlAllUpViewController::[IMonitorFrameDismissAnimationCallback]::MonitorFrameDismissAnimationCompleted_::_1_::dtor$0 @ 0x1802147A6 (_XamlAllUpViewController--[IMonitorFrameDismissAnimationCallback]--MonitorFrameDism_ea_1802147A6.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$4 @ 0x180424E4C (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$4.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$0 @ 0x1804481EB (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$0.c)
 *     _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$3 @ 0x180601427 (_XamlSnapAssistViewHost--AnimateDismissView_--_1_--dtor$3.c)
 *     _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$0 @ 0x18060F476 (_XamlAltTabViewController--RegisterForEvents_--_1_--dtor$0.c)
 *     _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$17 @ 0x180611F45 (_XamlSnapAssistViewController--RegisterForEvents_--_1_--dtor$17.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall Platform::WeakReference::~WeakReference(Platform::WeakReference *this)
{
  Platform::WeakReference::InternalRelease(this);
}
