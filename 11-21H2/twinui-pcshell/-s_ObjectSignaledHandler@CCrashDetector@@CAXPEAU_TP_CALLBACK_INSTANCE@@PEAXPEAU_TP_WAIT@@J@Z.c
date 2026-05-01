/*
 * XREFs of ?s_ObjectSignaledHandler@CCrashDetector@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180301500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCrashDetector::s_ObjectSignaledHandler(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  if ( !WaitResult )
  {
    if ( *Context )
      (*(void (__fastcall **)(_QWORD, _QWORD *, PTP_WAIT))(*(_QWORD *)*Context + 8LL))(*Context, Context, Wait);
  }
}
