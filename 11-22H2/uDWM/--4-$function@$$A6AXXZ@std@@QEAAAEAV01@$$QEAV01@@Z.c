/*
 * XREFs of ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A2984
 * Callers:
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x1800A3670 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A3A18 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006BA24 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800A4278 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::function<void (void)>::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    std::_Func_class<void,>::_Tidy(a1, a2);
    std::_Func_class<void,>::_Reset_move(a1, a2);
  }
  return a1;
}
