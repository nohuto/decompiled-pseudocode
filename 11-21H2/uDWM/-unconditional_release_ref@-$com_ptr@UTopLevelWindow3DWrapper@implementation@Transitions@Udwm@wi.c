/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180007AB4
 * Callers:
 *     _lambda_4f6e55dd49ac94c28a6037e68643a924_::operator() @ 0x180007A04 (_lambda_4f6e55dd49ac94c28a6037e68643a924_--operator().c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?release_ref@?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18005FAAC (-release_ref@-$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F8728 (--1-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call @ 0x1800FFCB0 (std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
