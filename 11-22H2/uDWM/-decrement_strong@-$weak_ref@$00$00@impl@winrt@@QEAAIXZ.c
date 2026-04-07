/*
 * XREFs of ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18006ED68
 * Callers:
 *     ?Release@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAKXZ @ 0x180047820 (-Release@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotation.c)
 *     ?Release@?$produce_base@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x18004F590 (-Release@-$produce_base@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transi.c)
 *     ?subtract_reference@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAIXZ @ 0x180055320 (-subtract_reference@-$root_implements@UWindowJointResizeTransitionHandler@implementation@Private.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006ED90 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800EE020 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::decrement_strong(__int64 a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( !v1 )
    winrt::impl::weak_ref<1,1>::Release();
  return v1;
}
