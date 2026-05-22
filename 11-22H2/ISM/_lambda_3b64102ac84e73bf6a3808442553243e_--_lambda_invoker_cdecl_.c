/*
 * XREFs of _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x1800C4CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800C5D44 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_(void *a1)
{
  __int64 v2; // rdx

  std::_Func_class<void,>::operator()();
  if ( a1 )
  {
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)a1, v2);
    operator delete(a1);
  }
  return 0LL;
}
