/*
 * XREFs of HalpHvSetMachineCheckHandlerState @ 0x14050C5F0
 * Callers:
 *     HalpMceInit @ 0x140A8A918 (HalpMceInit.c)
 *     HalpPostSleepMP @ 0x140A96E18 (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetMachineCheckHandlerState()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v1 = 0LL;
  if ( qword_140C62530 )
  {
    LODWORD(v1) = 1;
    BYTE4(v1) = 1;
    return ((__int64 (__fastcall *)(__int64 *))qword_140C62530)(&v1);
  }
  return result;
}
