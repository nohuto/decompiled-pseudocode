/*
 * XREFs of ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x180013D58
 * Callers:
 *     ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x18003F600 (-PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEA.c)
 *     ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FACD8 (-PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
        _QWORD *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
