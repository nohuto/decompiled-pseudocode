/*
 * XREFs of ??1?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ @ 0x180035324
 * Callers:
 *     ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180034D4C (--1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ @ 0x180143A14 (--1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ.c)
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1801850D8 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801AB16C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1TouchGestureSettings@@UEAA@XZ @ 0x1801B0FEC (--1TouchGestureSettings@@UEAA@XZ.c)
 *     ??1SnapWindowProvider@SnapLauncher@@UEAA@XZ @ 0x18022DDE4 (--1SnapWindowProvider@SnapLauncher@@UEAA@XZ.c)
 *     ??_G?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@UEAAPEAXI@Z @ 0x1802D4250 (--_G-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows.c)
 *     ??1?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@UEAA@XZ @ 0x18048A010 (--1-$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x18048A10C (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 *     ??1?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@UEAA@XZ @ 0x180521310 (--1-$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTab.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180638E78 (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18065EFF0 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??1SnapEducationHandler@@UEAA@XZ @ 0x18065F4B0 (--1SnapEducationHandler@@UEAA@XZ.c)
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x18065F604 (--1SnapLayoutProvider@@UEAA@XZ.c)
 *     ??_GSnapEducationHandler@@UEAAPEAXI@Z @ 0x18065FAD0 (--_GSnapEducationHandler@@UEAAPEAXI@Z.c)
 *     winrt::impl::heap_implements__anonymous_namespace_::ShellExecuteSite_::_scalar_deleting_destructor_ @ 0x1806C2074 (winrt--impl--heap_implements__anonymous_namespace_--ShellExecuteSite_--_scalar_deleting_destruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>(
        __int64 a1)
{
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
