/*
 * XREFs of ??1?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@UEAA@XZ @ 0x1803AFBF4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$0 @ 0x180214605 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TabProxyWindow_--_1_--dtor$0.c)
 *     _TouchGestureSettings::TouchGestureSettings_::_1_::dtor$0 @ 0x18021CB8D (_TouchGestureSettings--TouchGestureSettings_--_1_--dtor$0.c)
 *     _VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy_::_1_::dtor$1 @ 0x18021F5B5 (_VirtualDestopSwitcherViewChangeNotificationProxy--VirtualDestopSwitcherViewChangeN_ea_18021F5B5.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$37 @ 0x1802222BC (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$37.c)
 *     _ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration_::_1_::dtor$0 @ 0x1803AFB40 (_ImmersiveShellComponentsConfiguration--ImmersiveShellComponentsConfiguration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>::~implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>(
        __int64 a1)
{
  return winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>(a1 + 8);
}
