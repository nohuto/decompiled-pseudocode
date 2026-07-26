/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C00284C0
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C0117C30 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
