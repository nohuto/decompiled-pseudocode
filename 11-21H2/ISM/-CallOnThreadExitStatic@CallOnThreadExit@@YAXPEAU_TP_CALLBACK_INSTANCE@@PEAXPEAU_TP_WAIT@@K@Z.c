/*
 * XREFs of ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x180126390
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800469A4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18009D120 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CallOnThreadExit::CallOnThreadExitStatic(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  int v5; // eax
  __int64 v6; // rdx

  v5 = _Mtx_lock((_Mtx_t)&unk_180242C60);
  if ( v5 )
    std::_Throw_C_error(v5);
  std::_Func_class<void,>::operator()(Context);
  std::_Func_class<void,>::_Tidy(Context, v6);
  _Mtx_unlock((_Mtx_t)&unk_180242C60);
}
