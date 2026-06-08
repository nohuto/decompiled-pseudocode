/*
 * XREFs of ExecutePccWrite @ 0x1C0039740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 ExecutePccWrite()
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax

  v0 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001E2E8,
    0LL);
  v2 = qword_1C001E2F0;
  while ( (__int64 *)v2 != &qword_1C001E2F0 )
  {
    LOBYTE(v1) = 1;
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 120))(*(_QWORD *)(v2 + 72), v1);
    *(_DWORD *)(v2 + 144) &= ~1u;
    v2 = *(_QWORD *)v2;
    if ( v3 < 0 )
      v0 = v3;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001E2E8);
  return v0;
}
