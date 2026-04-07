/*
 * XREFs of ?get_local_iids@?$implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1800597D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>>::value;
  return a2;
}
