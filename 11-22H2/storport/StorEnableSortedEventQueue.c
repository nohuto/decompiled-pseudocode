/*
 * XREFs of StorEnableSortedEventQueue @ 0x1C003FE14
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C0018AC4 (RaidUnitAllocateResources.c)
 *     RaUnitSetQOSIoctl @ 0x1C005E730 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorEnableSortedEventQueue(int *a1, int a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = *a1;
  v3 = *a1 | 1;
  *a1 = v3;
  if ( a2 )
  {
    if ( a2 == 1 )
      *a1 = v2 | 3;
  }
  else
  {
    *a1 = v3 | 4;
  }
  return 0LL;
}
