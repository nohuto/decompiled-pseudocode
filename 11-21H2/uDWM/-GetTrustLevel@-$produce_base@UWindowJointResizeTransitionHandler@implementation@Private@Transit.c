/*
 * XREFs of ?GetTrustLevel@?$produce_base@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800F4110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler,void>::GetTrustLevel(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::NonDelegatingGetTrustLevel((a1 - 16) & -(__int64)(a1 != 0));
}
