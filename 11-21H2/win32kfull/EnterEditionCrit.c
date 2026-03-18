/*
 * XREFs of EnterEditionCrit @ 0x1C0113280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterEditionCrit()
{
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return 1LL;
  EnterCrit(1LL, 0LL);
  return 0LL;
}
