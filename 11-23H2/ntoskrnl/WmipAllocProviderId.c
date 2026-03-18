/*
 * XREFs of WmipAllocProviderId @ 0x1407E8C14
 * Callers:
 *     WmipAllocRegEntry @ 0x1403C2684 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
