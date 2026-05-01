/*
 * XREFs of ??1?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@UEAA@XZ @ 0x18048A010
 * Callers:
 *     _VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy_::_1_::dtor$1 @ 0x1802B41FB (_VirtualDestopSwitcherViewChangeNotificationProxy--VirtualDestopSwitcherViewChangeN_ea_1802B41FB.c)
 *     _TouchGestureSettings::TouchGestureSettings_::_1_::dtor$0 @ 0x1802BB2B4 (_TouchGestureSettings--TouchGestureSettings_--_1_--dtor$0.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$53 @ 0x1802BD37F (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$53.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$0 @ 0x1802BE661 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TabProxyWindow_--_1_--dtor$0.c)
 *     _ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration_::_1_::dtor$0 @ 0x180489F5B (_ImmersiveShellComponentsConfiguration--ImmersiveShellComponentsConfiguration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>::~implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>(
        __int64 a1)
{
  return winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>(a1 + 8);
}
