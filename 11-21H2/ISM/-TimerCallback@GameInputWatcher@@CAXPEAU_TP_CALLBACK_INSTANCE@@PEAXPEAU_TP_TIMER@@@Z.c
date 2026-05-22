/*
 * XREFs of ?TimerCallback@GameInputWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800FC8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GameInputWatcher::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  void (__fastcall *v3)(__int64); // rbx
  __int64 v4; // rdi

  v3 = (void (__fastcall *)(__int64))Context[15];
  v4 = Context[14];
  if ( v3 )
  {
    DisassociateCurrentThreadFromCallback(Instance);
    v3(v4);
  }
}
