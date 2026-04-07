/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FE2A0
 * Callers:
 *     ?GetTrustLevel@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800FDAB0 (-GetTrustLevel@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRo.c)
 *     ?GetTrustLevel@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FDB10 (-GetTrustLevel@-$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimat.c)
 *     ?GetTrustLevel@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FDB40 (-GetTrustLevel@-$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotati.c)
 *     ?GetTrustLevel@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FDB70 (-GetTrustLevel@-$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransi.c)
 *     ?GetTrustLevel@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FDBA0 (-GetTrustLevel@-$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindow.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 40LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
