/*
 * XREFs of MiPrefetchPagesViable @ 0x14033E874
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x140274E40 (MiObtainFaultCharges.c)
 *     MiPrefetchNormally @ 0x14033E8D0 (MiPrefetchNormally.c)
 *     MiReturnFaultCharges @ 0x140360060 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiPrefetchPagesViable(void *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4, int a5)
{
  if ( !(unsigned int)MiPrefetchNormally(a1, a4) )
    return 0LL;
  if ( a2 )
  {
    if ( *a2 < a4 )
      return 0LL;
    *a2 -= a4;
  }
  if ( !a5 || MiObtainFaultCharges(a1, a4, 1) == a4 )
    return 1LL;
  MiReturnFaultCharges(a1, a4, 1LL);
  return 0LL;
}
