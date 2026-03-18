/*
 * XREFs of HalpHvEnterSleepState @ 0x14050BEAC
 * Callers:
 *     HalpShutdown @ 0x140506C48 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x140527F40 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C624B8 )
    return ((__int64 (*)(void))qword_140C624B8)();
  return result;
}
