/*
 * XREFs of ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA?AU0Foundation@Windows@3@XZ @ 0x1800F81EC
 * Callers:
 *     ?UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F8400 (-UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_OWORD *__fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Rect(
        _QWORD *a1,
        _OWORD *a2)
{
  signed int v3; // eax

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a2;
}
