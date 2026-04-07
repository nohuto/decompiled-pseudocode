/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e6d4de8c865c86d40bfbebb968f8a12c_@@CA@XZ @ 0x1800CCE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&`WindowFrameLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
