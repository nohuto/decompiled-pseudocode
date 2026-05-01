/*
 * XREFs of ??1WeakReference@Platform@@QEAA@XZ @ 0x18076A514
 * Callers:
 *     _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$3 @ 0x18076AE0D (_XamlSnapAssistViewHost--AnimateDismissView_--_1_--dtor$3.c)
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$0 @ 0x18077A4C3 (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$0.c)
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$17 @ 0x18078A35E (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$17.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$0 @ 0x18078D4EB (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall Platform::WeakReference::~WeakReference(Platform::WeakReference *this)
{
  Platform::WeakReference::InternalRelease(this);
}
