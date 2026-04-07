/*
 * XREFs of ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18009BC08
 * Callers:
 *     std::function_void___cdecl(void)_::operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_ @ 0x180099568 (std--function_void___cdecl(void)_--operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180099A78 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800FF4CC (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall std::_Func_class<void,>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::_Tidy(a2);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
