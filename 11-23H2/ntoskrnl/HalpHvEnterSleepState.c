/*
 * XREFs of HalpHvEnterSleepState @ 0x14050C3FC
 * Callers:
 *     HalpShutdown @ 0x140507198 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x140528490 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C624B8 )
    return ((__int64 (*)(void))qword_140C624B8)();
  return result;
}
