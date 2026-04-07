/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800F10F8
 * Callers:
 *     ?GetTrustLevel@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800F0EA0 (-GetTrustLevel@-$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U134.c)
 *     ?GetTrustLevel@?$produce_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800F0EC0 (-GetTrustLevel@-$produce_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 16LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
