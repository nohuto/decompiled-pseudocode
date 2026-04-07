/*
 * XREFs of ?QueryInterface@?$produce_base@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationRejuvTransitionHandler@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F49F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler,void>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler>::query_interface(
           (a1 - 24) & -(__int64)(a1 != 0),
           a2,
           a3);
}
