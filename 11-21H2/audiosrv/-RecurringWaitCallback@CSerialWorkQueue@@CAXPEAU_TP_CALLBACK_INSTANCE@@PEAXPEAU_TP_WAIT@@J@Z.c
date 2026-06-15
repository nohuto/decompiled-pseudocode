/*
 * XREFs of ?RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800D3E90
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18005DA70 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::RecurringWaitCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  __int64 v6; // rdi
  int v7; // eax

  v6 = *((_QWORD *)Context + 4);
  v7 = _Mtx_lock((_Mtx_t)(v6 + 88));
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( !*(_BYTE *)(v6 + 80) )
  {
    std::_Func_class<void,>::operator()(*((_QWORD *)Context + 1));
    SetThreadpoolWait(Wait, *((HANDLE *)Context + 3), 0LL);
  }
  _Mtx_unlock((_Mtx_t)(v6 + 88));
}
