/*
 * XREFs of ?SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z @ 0x1C01229D4
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00C9070 (NdisAllocateSharedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisDmaAllocationHistogramStopwatch::SetMacAddress(
        NdisDmaAllocationHistogramStopwatch *this,
        const unsigned __int8 *const a2)
{
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_WORD *)this + 10) = *((_WORD *)a2 + 2);
}
