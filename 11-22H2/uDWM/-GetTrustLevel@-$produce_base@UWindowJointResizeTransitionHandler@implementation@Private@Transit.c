/*
 * XREFs of ?GetTrustLevel@?$produce_base@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800EDA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler,void>::GetTrustLevel(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 16LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::NonDelegatingGetTrustLevel(v1);
}
