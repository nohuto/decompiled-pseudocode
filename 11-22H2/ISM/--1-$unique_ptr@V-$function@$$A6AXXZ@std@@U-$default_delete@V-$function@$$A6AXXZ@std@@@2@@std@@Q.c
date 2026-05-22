/*
 * XREFs of ??1?$unique_ptr@V?$function@$$A6AXXZ@std@@U?$default_delete@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800C5924
 * Callers:
 *     __lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x1800C4D17 (__lambda_3b64102ac84e73bf6a3808442553243e_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor$1 @ 0x1800C5E61 (_MPCHolographicInputManager--DeferInvokeHelper_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>(
        __int64 *a1,
        __int64 a2)
{
  void *v2; // rbx

  v2 = (void *)*a1;
  if ( *a1 )
  {
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(*a1, a2);
    operator delete(v2);
  }
}
