/*
 * XREFs of ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000F7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx

  v4 = Context[3];
  v5 = _Mtx_lock((_Mtx_t)(v4 + 88));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v4 + 80) )
  {
    v6 = *(_QWORD *)(Context[1] + 56LL);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      goto LABEL_5;
    }
LABEL_7:
    std::_Xbad_function_call();
    JUMPOUT(0x18007811CLL);
  }
LABEL_5:
  _Mtx_unlock((_Mtx_t)(v4 + 88));
}
