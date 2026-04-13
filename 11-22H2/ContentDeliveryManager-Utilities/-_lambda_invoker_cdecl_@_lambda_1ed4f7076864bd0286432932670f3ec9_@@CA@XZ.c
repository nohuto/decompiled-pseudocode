/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1ed4f7076864bd0286432932670f3ec9_@@CA@XZ @ 0x18004BEB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_1ed4f7076864bd0286432932670f3ec9_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(
             &`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper,
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
