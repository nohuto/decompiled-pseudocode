/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x14050C118
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x14085E050 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C624B0 )
    return ((__int64 (*)(void))qword_140C624B0)();
  return result;
}
