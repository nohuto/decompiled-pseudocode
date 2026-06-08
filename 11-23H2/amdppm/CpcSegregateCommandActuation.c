/*
 * XREFs of CpcSegregateCommandActuation @ 0x1C0001ED0
 * Callers:
 *     CpcReadFeedback @ 0x1C0005170 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1C0012B30 = dword_1C0012B10;
  qword_1C0012B38 = a2;
  byte_1C0012B40 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0012AF0);
  for ( i = (__int64 *)qword_1C0012B00; i != &qword_1C0012B00; i = (__int64 *)*i )
    a1(i, &dword_1C0012B30);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C0012AF0);
}
