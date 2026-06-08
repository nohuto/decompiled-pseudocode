/*
 * XREFs of RefreshPkgThermalMSRValuesInternal @ 0x1C0001750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RefreshPkgThermalMSRValuesInternal(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi

  v2 = qword_1C001F930;
  if ( (__int64 *)qword_1C001F930 == &qword_1C001F930 )
    return 0LL;
  while ( (*(_DWORD *)(v2 + 24) & 2) == 0 )
  {
    v2 = *(_QWORD *)v2;
    if ( (__int64 *)v2 == &qword_1C001F930 )
      return 0LL;
  }
  if ( !*(_QWORD *)(v2 + 32) )
    return 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 16));
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v2 + 32))(a1, a2, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 16));
  return v5;
}
