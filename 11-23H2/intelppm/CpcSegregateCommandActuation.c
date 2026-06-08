/*
 * XREFs of CpcSegregateCommandActuation @ 0x1C00051B2
 * Callers:
 *     CpcCommitPerformance @ 0x1C0005140 (CpcCommitPerformance.c)
 *     CpcAcquirePerformance @ 0x1C0008C60 (CpcAcquirePerformance.c)
 *     CpcReadFeedback @ 0x1C0008D60 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1C001F670 = dword_1C001F650;
  qword_1C001F678 = a2;
  byte_1C001F680 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C001F630);
  for ( i = (__int64 *)qword_1C001F640; i != &qword_1C001F640; i = (__int64 *)*i )
    a1(i, &dword_1C001F670);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C001F630);
}
