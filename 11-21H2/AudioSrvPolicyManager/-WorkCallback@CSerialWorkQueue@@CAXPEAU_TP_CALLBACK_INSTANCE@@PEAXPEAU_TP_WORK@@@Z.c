/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rcx

  v5 = Context[2];
  v6 = _Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( !*(_BYTE *)(v5 + 80) )
  {
    v7 = *(_QWORD *)(*Context + 56LL);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)Context);
  operator delete(Context);
  CloseThreadpoolWork(Work);
}
