/*
 * XREFs of HalpHvEnterSleepState @ 0x14050EE0C
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x14050AABC (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4C498 )
    return ((__int64 (*)(void))qword_140C4C498)();
  return result;
}
