/*
 * XREFs of CcReapPrivateVolumeCachemap @ 0x1403C1CB4
 * Callers:
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1403C1BA0 (CcReapPrivateVolumeCachemapWorkerThread.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A740 (DbgPrintEx.c)
 *     CcIsDirtyCachemapListEmptyForVolume @ 0x140362C5C (CcIsDirtyCachemapListEmptyForVolume.c)
 *     CcNotifyWriteBehindVolume @ 0x1403C1DBC (CcNotifyWriteBehindVolume.c)
 *     CcPostDeferredWrites @ 0x1403C1E48 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2074 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x140538F54 (CcDeleteSectionsForPartition.c)
 */

__int64 __fastcall CcReapPrivateVolumeCachemap(const void **P)
{
  const void *v2; // rsi

  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: Delete Processing PVCM, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P[5],
    *((_DWORD *)P[5] + 51),
    P,
    *((_DWORD *)P + 6));
  v2 = P[4];
  CcNotifyWriteBehindVolume(P, 2LL);
  while ( P[76] != P + 76 || !CcIsDirtyCachemapListEmptyForVolume((__int64)P) )
  {
    CcDeleteSectionsForPartition(P + 80, v2);
    CcDeleteSectionsForPartition(P + 76, v2);
  }
  CcPostDeferredWrites(v2, P);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: PVCM:%p(vid:%2lx) - All lists processed, deleting PVCM\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6));
  return CcDeletePrivateVolumeCacheMap(P);
}
