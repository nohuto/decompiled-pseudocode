/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx

  v5 = Context[2];
  v6 = _Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(v5 + 80) )
  {
    v7 = *(_QWORD *)(*Context + 56LL);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      goto LABEL_5;
    }
LABEL_11:
    std::_Xbad_function_call();
    JUMPOUT(0x1800758C4LL);
  }
LABEL_5:
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  v8 = (volatile signed __int32 *)Context[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  operator delete(Context, 0x18uLL);
  CloseThreadpoolWork(Work);
}
