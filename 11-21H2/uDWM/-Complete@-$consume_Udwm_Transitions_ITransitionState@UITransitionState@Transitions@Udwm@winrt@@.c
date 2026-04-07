/*
 * XREFs of ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x180013F74
 * Callers:
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003F454 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003FED0 (-ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ?PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F4790 (-PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     _lambda_c60948a4075e9d25cd4406f3dd63722d_::operator() @ 0x1800F7A14 (_lambda_c60948a4075e9d25cd4406f3dd63722d_--operator().c)
 *     ?Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7C48 (-Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAX.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
