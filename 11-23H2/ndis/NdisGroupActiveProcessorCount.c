/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0028650
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C0117BF0 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
