/*
 * XREFs of WmipAllocProviderId @ 0x1407E9194
 * Callers:
 *     WmipAllocRegEntry @ 0x1403C2024 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
