/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e96d1fd5a37f2796eeb5af7e615ffb83_@@CAXXZ @ 0x1805DF070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void _lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(
         &`InputSwitchingManagerTelemetry::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
