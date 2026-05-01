/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_c2de52b76b02464b55ca8bf6e2d5d141_@@CA@XZ @ 0x1804A7110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = __std_init_once_begin_initialize(
             &`HolographicPositionerProvider::Instance'::`2'::wrapper,
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
