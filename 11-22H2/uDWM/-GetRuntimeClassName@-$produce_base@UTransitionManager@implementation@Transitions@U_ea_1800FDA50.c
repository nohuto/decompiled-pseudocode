/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FDA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager,void>::GetRuntimeClassName(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 32;
  if ( !a1 )
    v1 = 40LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::NonDelegatingGetRuntimeClassName(v1);
}
