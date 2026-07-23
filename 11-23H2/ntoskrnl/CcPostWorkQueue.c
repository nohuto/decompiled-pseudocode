/*
 * XREFs of CcPostWorkQueue @ 0x14029B244
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x1402984D4 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScanVolume @ 0x14029A890 (CcLazyWriteScanVolume.c)
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403C0650 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcLazyWriteScan @ 0x1405364BC (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140537390 (CcQueueLazyWriteScanThread.c)
 *     CcRepostToSynchronousLazywriter @ 0x14053A8B8 (CcRepostToSynchronousLazywriter.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x140298944 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402995A0 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    return CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    return CcPostWorkQueueRegular((__int64)a1, a2, a3, a4);
}
