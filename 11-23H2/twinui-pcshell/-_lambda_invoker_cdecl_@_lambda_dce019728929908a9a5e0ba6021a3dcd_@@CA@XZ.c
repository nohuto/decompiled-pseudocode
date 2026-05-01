/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_dce019728929908a9a5e0ba6021a3dcd_@@CA@XZ @ 0x180750C90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_dce019728929908a9a5e0ba6021a3dcd_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-20h] BYREF

  result = __std_init_once_begin_initialize(
             &`ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::Instance'::`2'::wrapper,
             1u,
             &fPending,
             &Context);
  if ( result )
  {
    if ( !fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
