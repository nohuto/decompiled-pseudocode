/*
 * XREFs of CpcAcquirePerformance @ 0x1C0002450
 * Callers:
 *     <none>
 * Callees:
 *     CpcSubspaceAcquirePerformance @ 0x1C0002640 (CpcSubspaceAcquirePerformance.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  __int64 *i; // rbx

  KeClearEvent(&Event);
  dword_1C0011A80 = dword_1C0011A60;
  qword_1C0011A88 = a1;
  byte_1C0011A90 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0011A40);
  for ( i = (__int64 *)qword_1C0011A50; i != &qword_1C0011A50; i = (__int64 *)*i )
    CpcSubspaceAcquirePerformance(i, &dword_1C0011A80);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C0011A40);
}
