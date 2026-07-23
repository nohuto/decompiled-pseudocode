/*
 * XREFs of WmipAllocProviderId @ 0x1407E8EE4
 * Callers:
 *     WmipAllocRegEntry @ 0x1403C2864 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
