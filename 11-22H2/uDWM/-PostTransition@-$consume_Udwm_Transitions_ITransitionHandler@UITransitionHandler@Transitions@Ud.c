/*
 * XREFs of ?PostTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FE640
 * Callers:
 *     ?OnWindowMoveSizeChanged@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@@impl@winrt@@UEAAH_K@Z @ 0x1800FE580 (-OnWindowMoveSizeChanged@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIA.c)
 *     ?PostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHH@Z @ 0x1800FE680 (-PostTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransition.c)
 *     ?WindowMaximizeSnapPostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FF7E0 (-WindowMaximizeSnapPostTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@w.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PostTransition(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
