/*
 * XREFs of HalpInitializeUncoreProfiling @ 0x1403BB680
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140A54EF0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*HalpInitializeUncoreProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = HalpProfileInterface[19];
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
