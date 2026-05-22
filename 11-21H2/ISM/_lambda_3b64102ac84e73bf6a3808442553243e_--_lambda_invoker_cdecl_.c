/*
 * XREFs of _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x18009BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800469A4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18009D120 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_(void *a1)
{
  __int64 v2; // rdx

  std::_Func_class<void,>::operator()();
  if ( a1 )
  {
    std::_Func_class<void,>::_Tidy((__int64)a1, v2);
    operator delete(a1);
  }
  return 0LL;
}
