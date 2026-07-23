/*
 * XREFs of HalpCompleteInitializeProfiling @ 0x140A9123C
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140A911A0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 (*HalpCompleteInitializeProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = HalpProfileInterface[16];
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
