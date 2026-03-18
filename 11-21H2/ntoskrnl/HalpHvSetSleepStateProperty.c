/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x14050F078
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x14085E510 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4C490 )
    return ((__int64 (*)(void))qword_140C4C490)();
  return result;
}
