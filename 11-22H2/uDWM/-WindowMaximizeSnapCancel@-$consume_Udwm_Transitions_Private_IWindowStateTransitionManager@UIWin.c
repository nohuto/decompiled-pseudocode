/*
 * XREFs of ?WindowMaximizeSnapCancel@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010D554
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapCancel(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
