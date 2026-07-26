/*
 * XREFs of ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C012E3A4
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00CDD60 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C005D8FC (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ndisDmaAllocationHistogramAddEntry @ 0x1C012E8C8 (ndisDmaAllocationHistogramAddEntry.c)
 */

void __fastcall NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch(
        NdisDmaAllocationHistogramStopwatch *this)
{
  unsigned __int64 v2; // rax

  v2 = NdisStatisticalStopwatch::Stop(this);
  ndisDmaAllocationHistogramAddEntry(v2, (char *)this + 16);
  if ( *((_QWORD *)this + 1) )
    NdisStatisticalStopwatch::Stop(this);
}
