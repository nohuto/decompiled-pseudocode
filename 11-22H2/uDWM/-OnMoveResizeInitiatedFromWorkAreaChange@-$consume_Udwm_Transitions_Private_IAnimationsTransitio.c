/*
 * XREFs of ?OnMoveResizeInitiatedFromWorkAreaChange@?$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18010B5E8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_Private_IAnimationsTransitionManager<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::OnMoveResizeInitiatedFromWorkAreaChange(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
