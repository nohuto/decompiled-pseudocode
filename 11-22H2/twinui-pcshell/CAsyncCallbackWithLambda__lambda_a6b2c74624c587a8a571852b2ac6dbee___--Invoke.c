/*
 * XREFs of CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee___::Invoke @ 0x18053C630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee___::Invoke(__int64 a1)
{
  __int64 v1; // r11

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 408LL);
  if ( v1 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v1 + 56LL))(
      v1,
      *(unsigned int *)(a1 + 56),
      *(unsigned int *)(a1 + 60),
      *(unsigned int *)(a1 + 64),
      *(_DWORD *)(a1 + 68));
  return 0LL;
}
