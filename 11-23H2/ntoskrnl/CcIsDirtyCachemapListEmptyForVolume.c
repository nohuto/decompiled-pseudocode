/*
 * XREFs of CcIsDirtyCachemapListEmptyForVolume @ 0x140362C5C
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14029A600 (CcLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403C1CB4 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsDirtyCachemapListEmptyForVolume(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664;
}
