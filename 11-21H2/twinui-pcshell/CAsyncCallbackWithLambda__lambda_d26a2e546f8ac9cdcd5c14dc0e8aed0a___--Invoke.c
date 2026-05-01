/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d26a2e546f8ac9cdcd5c14dc0e8aed0a___::Invoke @ 0x180181A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_d26a2e546f8ac9cdcd5c14dc0e8aed0a___::Invoke(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 408);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 64LL))(
      v2,
      *(unsigned int *)(v1 + 440),
      *(unsigned int *)(v1 + 448),
      *(unsigned int *)(v1 + 444),
      *(_DWORD *)(v1 + 452));
  return 0LL;
}
