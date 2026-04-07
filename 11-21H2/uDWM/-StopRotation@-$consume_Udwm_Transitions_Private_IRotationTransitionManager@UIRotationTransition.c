/*
 * XREFs of ?StopRotation@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x1800422F0
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040370 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_Private_IRotationTransitionManager<winrt::Udwm::Transitions::Private::IRotationTransitionManager>::StopRotation(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
