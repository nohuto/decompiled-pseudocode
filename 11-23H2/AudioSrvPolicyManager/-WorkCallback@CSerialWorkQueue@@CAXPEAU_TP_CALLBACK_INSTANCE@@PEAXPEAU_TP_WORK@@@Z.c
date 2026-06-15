/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180022C80
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18000F070 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x180020F04 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, __int64 *Context, PTP_WORK Work)
{
  __int64 v5; // rdi
  int v6; // eax

  v5 = Context[2];
  v6 = _Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( !*(_BYTE *)(v5 + 80) )
    std::_Func_class<void,>::operator()(*Context);
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  _WorkTask::`scalar deleting destructor'((_WorkTask *)Context);
  CloseThreadpoolWork(Work);
}
