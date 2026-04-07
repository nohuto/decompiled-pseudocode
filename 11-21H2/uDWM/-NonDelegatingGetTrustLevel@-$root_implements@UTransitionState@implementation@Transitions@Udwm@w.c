/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FAB60
 * Callers:
 *     ?GetTrustLevel@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800FA340 (-GetTrustLevel@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@_ea_1800FA340.c)
 *     ?GetTrustLevel@?$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FD810 (-GetTrustLevel@-$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransiti.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,Udwm::Transitions::ITransitionStateNative,Udwm::Transitions::ITransitionStateNativePrivate>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 24LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
