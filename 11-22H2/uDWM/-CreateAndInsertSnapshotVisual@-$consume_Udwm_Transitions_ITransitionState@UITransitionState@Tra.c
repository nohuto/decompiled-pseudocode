/*
 * XREFs of ?CreateAndInsertSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUTopLevelWindow3DWrapper@Transitions@Udwm@3@@Z @ 0x1800F7D14
 * Callers:
 *     ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800F7A8C (-CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::CreateAndInsertSnapshotVisual(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 72LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
