/*
 * XREFs of ??$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA?AUTransitionManager@Transitions@Udwm@1@PEAU2implementation@341@@Z @ 0x18004216C
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::implementation::TransitionManager,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionManager>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
