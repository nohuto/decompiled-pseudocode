/*
 * XREFs of NetDmaIsr @ 0x1C0090330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NetDmaIsr(PVOID NetDmaChannelHandle, LARGE_INTEGER DmaDescriptor, PULONG pCpuNumber)
{
  *pCpuNumber = 0;
}
