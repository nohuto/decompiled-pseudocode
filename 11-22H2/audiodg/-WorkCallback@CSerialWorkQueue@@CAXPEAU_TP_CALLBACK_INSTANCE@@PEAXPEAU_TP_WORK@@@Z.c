/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x140070590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x140038702 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _WorkTask *Context, PTP_WORK Work)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rcx

  v5 = *((_QWORD *)Context + 2);
  v6 = _Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( !*(_BYTE *)(v5 + 80) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)Context + 56LL);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  _WorkTask::`scalar deleting destructor'(Context);
  CloseThreadpoolWork(Work);
}
