/*
 * XREFs of ?SkipRestoreFromMaximizeTransition@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800F768C
 * Callers:
 *     ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800119AC (-CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::SkipRestoreFromMaximizeTransition(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 56LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
