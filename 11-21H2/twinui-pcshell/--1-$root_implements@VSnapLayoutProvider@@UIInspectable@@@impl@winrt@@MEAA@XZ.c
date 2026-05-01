/*
 * XREFs of ??1?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ @ 0x18001D7E4
 * Callers:
 *     ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18001D6C4 (--1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??_G?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@UEAAPEAXI@Z @ 0x180040D60 (--_G-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows.c)
 *     ??1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ @ 0x1800AAD60 (--1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ.c)
 *     ??1TouchGestureSettings@@UEAA@XZ @ 0x180178684 (--1TouchGestureSettings@@UEAA@XZ.c)
 *     ??1?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@UEAA@XZ @ 0x1803AFBF4 (--1-$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803AFCF0 (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805799BC (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x180591A04 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x180591E5C (--1SnapLayoutProvider@@UEAA@XZ.c)
 *     ??_GSnapEducationHandler@@UEAAPEAXI@Z @ 0x180592380 (--_GSnapEducationHandler@@UEAAPEAXI@Z.c)
 *     ??_G?$heap_implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805B3980 (--_G-$heap_implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Inter.c)
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805C07D0 (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     winrt::impl::heap_implements__anonymous_namespace_::ShellExecuteSite_::_scalar_deleting_destructor_ @ 0x1805D03E8 (winrt--impl--heap_implements__anonymous_namespace_--ShellExecuteSite_--_scalar_deleting_destruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>(
        __int64 a1)
{
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
