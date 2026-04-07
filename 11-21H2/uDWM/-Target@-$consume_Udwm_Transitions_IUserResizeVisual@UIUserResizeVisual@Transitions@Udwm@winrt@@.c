/*
 * XREFs of ?Target@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBAHXZ @ 0x1800F8304
 * Callers:
 *     ?UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F8400 (-UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Target(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 64LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
