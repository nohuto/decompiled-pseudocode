/*
 * XREFs of ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018BA4
 * Callers:
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x1C0019068 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocateIterativeDataPathTracker(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *Pool2; // rax

  Pool2 = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)ExAllocatePool2(72LL, 96LL * ndisMaxNumberOfProcessors, 538985550);
  a1->IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY (*)[4])Pool2;
  return Pool2 == 0LL ? 0xC000009A : 0;
}
