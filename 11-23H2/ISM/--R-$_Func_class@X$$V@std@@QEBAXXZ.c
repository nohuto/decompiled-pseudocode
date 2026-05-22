/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800B463C
 * Callers:
 *     _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x1800B2B50 (_lambda_3b64102ac84e73bf6a3808442553243e_--_lambda_invoker_cdecl_.c)
 *     ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x180140A10 (-CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
