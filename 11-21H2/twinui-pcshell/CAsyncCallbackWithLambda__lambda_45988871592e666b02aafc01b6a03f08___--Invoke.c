/*
 * XREFs of CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::Invoke @ 0x1805B29A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::Invoke(__int64 a1)
{
  signed int v1; // eax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48));
  if ( v1 < 0 )
    winrt::throw_hresult(v1);
  return 0LL;
}
