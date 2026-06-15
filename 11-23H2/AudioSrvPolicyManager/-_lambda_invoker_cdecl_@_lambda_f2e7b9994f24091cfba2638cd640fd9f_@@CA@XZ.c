/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f2e7b9994f24091cfba2638cd640fd9f_@@CA@XZ @ 0x18001AD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(
             &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
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
