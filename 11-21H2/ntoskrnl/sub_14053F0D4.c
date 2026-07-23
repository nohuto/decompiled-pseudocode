/*
 * XREFs of sub_14053F0D4 @ 0x14053F0D4
 * Callers:
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 * Callees:
 *     ExGetExclusiveWaiterCount @ 0x14063D240 (ExGetExclusiveWaiterCount.c)
 *     ExGetSharedWaiterCount @ 0x14063D280 (ExGetSharedWaiterCount.c)
 */

char sub_14053F0D4()
{
  char v0; // bl

  v0 = 0;
  if ( ExGetSharedWaiterCount((PERESOURCE)&stru_140D31980) || ExGetExclusiveWaiterCount((PERESOURCE)&stru_140D31980) )
    return 1;
  return v0;
}
