/*
 * XREFs of MiIsPteEvaluated @ 0x1402F2A98
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x1402F2828 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x14066A544 (MiGetClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 */

unsigned __int64 __fastcall MiIsPteEvaluated(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned int v5; // r9d

  v2 = a2;
  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( result )
  {
    if ( (result & 1) == 0 && (result & 0x400) != 0 && MiIsPrototypePteVadLookup(result) )
    {
      LOBYTE(v5) = ((v4 >> 5) & 0x1F) != v2;
      return v5;
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
