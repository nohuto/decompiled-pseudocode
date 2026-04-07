/*
 * XREFs of ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800070A0
 * Callers:
 *     ?Release@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAKXZ @ 0x180009E30 (-Release@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotation.c)
 *     ?Release@?$produce_base@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x180009FA0 (-Release@-$produce_base@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions.c)
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045348 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800070D0 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::decrement_strong(__int64 a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( !v1 )
    winrt::impl::weak_ref<1,1>::Release();
  return v1;
}
