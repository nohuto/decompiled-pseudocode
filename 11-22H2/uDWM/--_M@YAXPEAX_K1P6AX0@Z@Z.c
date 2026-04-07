/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005CA2C
 * Callers:
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x1800389AC (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FEF98 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::SkipAnimationDelays_::_1_::dtor$3 @ 0x1800FF0C6 (_winrt--Udwm--Transitions--implementation--TransitionManager--SkipAnimationDelays_--_1_--dtor$3.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FF218 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle_::_1_::dtor$4 @ 0x1800FF3B2 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateAngle_--_1_--dtor$4.c)
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FF4A8 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$5 @ 0x1800FF6CE (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$5.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18005CAA8 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_xfg_dispatch_icall_fptr();
  }
}
