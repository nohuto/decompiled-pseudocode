/*
 * XREFs of CpcCommitPerformance @ 0x1C0002120
 * Callers:
 *     <none>
 * Callees:
 *     CpcSubspaceCommitPerformance @ 0x1C0002458 (CpcSubspaceCommitPerformance.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcCommitPerformance(__int64 a1)
{
  __int64 *i; // rbx

  dword_1C0012B30 = dword_1C0012B10;
  qword_1C0012B38 = a1;
  byte_1C0012B40 = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0012AF0);
  for ( i = (__int64 *)qword_1C0012B00; i != &qword_1C0012B00; i = (__int64 *)*i )
    CpcSubspaceCommitPerformance(i, &dword_1C0012B30);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C0012AF0);
}
