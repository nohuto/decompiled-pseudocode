/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_fcb9b5ef2ad8bfd832238adf5d8bb457_@@CA@XZ @ 0x1800A4000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_fcb9b5ef2ad8bfd832238adf5d8bb457_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&`CDMUtilsUnlockLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
