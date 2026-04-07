/*
 * XREFs of ?GetTrustLevel@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800FA380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,void>::GetTrustLevel(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 16;
  if ( !a1 )
    v1 = 32LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::NonDelegatingGetTrustLevel(v1);
}
