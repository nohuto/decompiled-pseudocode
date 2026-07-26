/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0028880
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C010C800 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
