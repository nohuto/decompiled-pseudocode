/*
 * XREFs of CpcCommitPerformance @ 0x1C0002510
 * Callers:
 *     <none>
 * Callees:
 *     CpcSubspaceCommitPerformance @ 0x1C0002808 (CpcSubspaceCommitPerformance.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcCommitPerformance(__int64 a1)
{
  __int64 *i; // rbx

  dword_1C0011A80 = dword_1C0011A60;
  qword_1C0011A88 = a1;
  byte_1C0011A90 = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0011A40);
  for ( i = (__int64 *)qword_1C0011A50; i != &qword_1C0011A50; i = (__int64 *)*i )
    CpcSubspaceCommitPerformance(i, &dword_1C0011A80);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C0011A40);
}
