/*
 * XREFs of RtlpInitializeLeakDetection @ 0x1801037F4
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180054B20 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpInitializeMap @ 0x1801038A0 (RtlpInitializeMap.c)
 */

bool RtlpInitializeLeakDetection()
{
  unsigned __int64 *Heap; // rax
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap = (unsigned __int64 *)RtlAllocateHeap(RtlpLeakHeap, 0, 0x840uLL);
  RtlpProcessMemoryMap = (__int64)Heap;
  v1 = Heap;
  if ( !Heap )
    return 0;
  RtlpInitializeMap(Heap, 0LL);
  qword_180178CD8 = (__int64)&RtlpBusyList;
  RtlpBusyList = (__int64)&RtlpBusyList;
  qword_180178CE8 = (__int64)&RtlpLeakList;
  RtlpLeakList = (__int64)&RtlpLeakList;
  v2 = 0x100000LL;
  do
  {
    v3 = v2;
    v2 <<= 8;
  }
  while ( v2 >= v3 );
  v1[2] = -1LL;
  *v1 = v3;
  RtlpTempBlocks = RtlAllocateHeap(RtlpLeakHeap, 0, 0x28000uLL);
  return RtlpTempBlocks != 0;
}
