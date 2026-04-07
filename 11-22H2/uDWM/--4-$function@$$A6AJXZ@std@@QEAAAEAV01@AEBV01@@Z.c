/*
 * XREFs of ??4?$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800E73D0
 * Callers:
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800FAE54 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x1800550E4 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Reset_move@?$_Func_class@J$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800E79F0 (-_Reset_move@-$_Func_class@J$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<long (void)>::operator=(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v7);
    v8 = v3;
  }
  if ( v3 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<long,>::_Reset_move(v9, v7);
    std::_Func_class<long,>::_Reset_move(v7, a1);
    std::_Func_class<long,>::_Reset_move(a1, v9);
    std::_Func_class<long,>::_Tidy((__int64)v9, v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
  }
  std::_Func_class<long,>::_Tidy((__int64)v7, a2);
  return a1;
}
