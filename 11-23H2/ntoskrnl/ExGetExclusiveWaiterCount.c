/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x1403BF520
 * Callers:
 *     CmpIsRegistryLockContended @ 0x140616290 (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->Flag & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
