/*
 * XREFs of CcIsDirtyCachemapListEmptyForVolume @ 0x140362DFC
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14029A890 (CcLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403C1E94 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsDirtyCachemapListEmptyForVolume(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664;
}
