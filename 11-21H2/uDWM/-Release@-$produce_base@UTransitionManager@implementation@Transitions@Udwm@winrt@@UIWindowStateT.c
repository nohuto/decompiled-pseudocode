/*
 * XREFs of ?Release@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@X@impl@winrt@@UEAAIXZ @ 0x180013EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,void>::Release(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 - 24) & -(__int64)(a1 != 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
