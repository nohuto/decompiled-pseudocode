/*
 * XREFs of CcReapPrivateVolumeCachemap @ 0x14053D880
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     CcPostDeferredWrites @ 0x14053A100 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcIsDirtyCachemapListEmptyForVolume @ 0x14053D2BC (CcIsDirtyCachemapListEmptyForVolume.c)
 *     CcNotifyWriteBehindVolume @ 0x14053D2E4 (CcNotifyWriteBehindVolume.c)
 *     CcDeleteSectionsForPartition @ 0x14053DDB8 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcReapPrivateVolumeCachemap(const void **StartContext)
{
  __int64 v2; // rsi

  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: Delete Processing PVCM, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    StartContext[5],
    *((_DWORD *)StartContext[5] + 51),
    StartContext,
    *((_DWORD *)StartContext + 6));
  v2 = (__int64)StartContext[4];
  CcNotifyWriteBehindVolume((__int64)StartContext, 2);
  while ( StartContext[76] != StartContext + 76 || !CcIsDirtyCachemapListEmptyForVolume((__int64)StartContext) )
  {
    CcDeleteSectionsForPartition(StartContext + 80, v2);
    CcDeleteSectionsForPartition(StartContext + 76, v2);
  }
  CcPostDeferredWrites(v2, (__int64)StartContext);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: PVCM:%p(vid:%2lx) - All lists processed, deleting PVCM\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    StartContext,
    *((_DWORD *)StartContext + 6));
  CcDeletePrivateVolumeCacheMap((char *)StartContext);
}
