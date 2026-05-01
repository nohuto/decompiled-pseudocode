/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_70bc263229c7881e4aa0a680059fb776_@@CA@XZ @ 0x18048EF00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

int _lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = __std_init_once_begin_initialize(
             &`PenWorkspaceBrokerLogging::Instance'::`2'::wrapper,
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
