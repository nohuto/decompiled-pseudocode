/*
 * XREFs of ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x18014EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800C5D44 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
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

  v5 = _Mtx_lock((_Mtx_t)&unk_1802780E0);
  if ( v5 )
    std::_Throw_C_error(v5);
  std::_Func_class<void,>::operator()(Context);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(Context, v6);
  _Mtx_unlock((_Mtx_t)&unk_1802780E0);
}
