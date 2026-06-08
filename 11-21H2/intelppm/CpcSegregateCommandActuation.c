/*
 * XREFs of CpcSegregateCommandActuation @ 0x1C0003F32
 * Callers:
 *     CpcCommitPerformance @ 0x1C0003EC0 (CpcCommitPerformance.c)
 *     CpcAcquirePerformance @ 0x1C0007540 (CpcAcquirePerformance.c)
 *     CpcReadFeedback @ 0x1C0007640 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1C001E320 = dword_1C001E300;
  qword_1C001E328 = a2;
  byte_1C001E330 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C001E2E0);
  for ( i = (__int64 *)qword_1C001E2F0; i != &qword_1C001E2F0; i = (__int64 *)*i )
    a1(i, &dword_1C001E320);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C001E2E0);
}
