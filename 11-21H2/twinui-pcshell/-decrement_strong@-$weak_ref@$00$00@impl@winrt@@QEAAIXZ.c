/*
 * XREFs of ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18015C94C
 * Callers:
 *     ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x18001F32C (-subtract_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@.c)
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAKXZ @ 0x180129340 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindo.c)
 *     ?Release@?$produce_base@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x18015C900 (-Release@-$produce_base@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@wi.c)
 *     ??1?$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@UEAA@XZ @ 0x180591994 (--1-$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@UEAA@XZ.c)
 *     ??_ESnapMigrationHandler@@UEAAPEAXI@Z @ 0x180592220 (--_ESnapMigrationHandler@@UEAAPEAXI@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@USnapMigrationHandler@@@winrt@@AEAAXXZ @ 0x1805A8DC0 (-unconditional_release_ref@-$com_ptr@USnapMigrationHandler@@@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1805B5468 (-subtract_reference@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@She.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800FC1E0 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::decrement_strong(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int32 v4; // ebx

  v4 = _InterlockedDecrement(a1 + 6);
  if ( !v4 )
    winrt::impl::weak_ref<1,1>::Release(a1, a2, a3, a4);
  return v4;
}
