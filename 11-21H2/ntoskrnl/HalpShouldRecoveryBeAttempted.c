/*
 * XREFs of HalpShouldRecoveryBeAttempted @ 0x14051CD50
 * Callers:
 *     HalpMcaReportError @ 0x14050745C (HalpMcaReportError.c)
 *     HalpMceRecovery @ 0x14051C710 (HalpMceRecovery.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpShouldRecoveryBeAttempted(int a1, const signed __int64 *a2)
{
  if ( a1 == 1 )
  {
    if ( !_bittest64(a2, 0x37u) )
      return 0;
  }
  else if ( a1 != 2 || (*a2 & 0x2000100000000000LL) != 0x2000000000000000LL )
  {
    return 0;
  }
  return 1;
}
