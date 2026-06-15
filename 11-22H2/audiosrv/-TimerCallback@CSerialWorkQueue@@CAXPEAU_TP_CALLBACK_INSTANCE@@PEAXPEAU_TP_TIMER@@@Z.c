/*
 * XREFs of ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180042220
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180042348 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  __int64 v4; // rdi
  int v5; // eax

  v4 = Context[3];
  v5 = _Mtx_lock((_Mtx_t)(v4 + 88));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
    JUMPOUT(0x1800B1F27LL);
  }
  if ( !*(_BYTE *)(v4 + 80) )
    std::_Func_class<void,>::operator()(Context[1]);
  _Mtx_unlock((_Mtx_t)(v4 + 88));
}
