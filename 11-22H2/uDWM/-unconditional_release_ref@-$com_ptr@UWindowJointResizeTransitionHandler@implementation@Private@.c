/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7A54
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?release_ref@?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18005C310 (-release_ref@-$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F90D4 (--1-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ.c)
 *     _lambda_c60948a4075e9d25cd4406f3dd63722d_::operator() @ 0x1800F9288 (_lambda_c60948a4075e9d25cd4406f3dd63722d_--operator().c)
 *     _lambda_65776acf8dfa6fe29cb3050938b98b74_::operator() @ 0x1800FAC80 (_lambda_65776acf8dfa6fe29cb3050938b98b74_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call @ 0x180104F70 (std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
