/*
 * XREFs of ?QueryInterface@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800FE9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,void>::QueryInterface(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))((a1 - 16) & -(__int64)(a1 != 0));
  return (**v1)(v1);
}
