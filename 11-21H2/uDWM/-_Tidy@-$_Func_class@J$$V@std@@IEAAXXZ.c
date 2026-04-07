/*
 * XREFs of ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x180010A40
 * Callers:
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800060F8 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ??4?$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180006348 (--4-$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Reset_move@?$_Func_class@J$$V@std@@IEAAX$$QEAV12@@Z @ 0x180007CB0 (-_Reset_move@-$_Func_class@J$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000FD6C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800450F0 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1?$function@$$A6AJXZ@std@@QEAA@XZ @ 0x1800E6B54 (--1-$function@$$A6AJXZ@std@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<long,>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
