/*
 * XREFs of ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180108898
 * Callers:
 *     ?Invoke@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@V?$function@$$A6AXXZ@std@@@Z @ 0x180108CD0 (-Invoke@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@V-$function@$$A6AXX.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180011CC8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18010918C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::function<void (void)>::operator=(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v2 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  v8 = 0LL;
  if ( v4 )
  {
    v2 = (_BYTE *)(**v4)(v4, v7);
    v8 = v2;
  }
  if ( v2 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<void,>::_Reset_move(v9, v7);
    std::_Func_class<void,>::_Reset_move(v7, a1);
    std::_Func_class<void,>::_Reset_move(a1, v9);
    std::_Func_class<void,>::_Tidy((__int64)v9, v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v2;
  }
  std::_Func_class<void,>::_Tidy((__int64)v7, a2);
  return a1;
}
