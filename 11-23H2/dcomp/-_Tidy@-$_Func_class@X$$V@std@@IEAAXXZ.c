/*
 * XREFs of ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180011CC8
 * Callers:
 *     ??1ContextLatchedInvoke@WRL2@Microsoft@@QEAA@XZ @ 0x18000F68C (--1ContextLatchedInvoke@WRL2@Microsoft@@QEAA@XZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180108898 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Invoke@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@V?$function@$$A6AXXZ@std@@@Z @ 0x180108CD0 (-Invoke@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@V-$function@$$A6AXX.c)
 *     ?Static_DeferredNotify_NoLock@ContextLatchedInvoke@WRL2@Microsoft@@CAJPEAX@Z @ 0x180108F60 (-Static_DeferredNotify_NoLock@ContextLatchedInvoke@WRL2@Microsoft@@CAJPEAX@Z.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18010918C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,>::_Tidy(__int64 a1, __int64 a2)
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
