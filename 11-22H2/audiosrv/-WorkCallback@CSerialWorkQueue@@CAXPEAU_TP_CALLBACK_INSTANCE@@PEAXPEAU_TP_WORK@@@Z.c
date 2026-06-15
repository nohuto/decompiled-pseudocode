/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800422B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180042348 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rdi
  int v6; // eax
  std::_Ref_count_base *v7; // rcx

  v5 = Context[2];
  v6 = _Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    __debugbreak();
    JUMPOUT(0x1800B1F37LL);
  }
  if ( !*(_BYTE *)(v5 + 80) )
    std::_Func_class<void,>::operator()(*Context);
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  v7 = (std::_Ref_count_base *)Context[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  operator delete(Context, 0x18uLL);
  CloseThreadpoolWork(Work);
}
