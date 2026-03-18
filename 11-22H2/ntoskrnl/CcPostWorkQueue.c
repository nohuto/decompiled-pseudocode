/*
 * XREFs of CcPostWorkQueue @ 0x14029AE94
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140298124 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScanVolume @ 0x14029A4E0 (CcLazyWriteScanVolume.c)
 *     CcScheduleReadAheadNuma @ 0x140328DDC (CcScheduleReadAheadNuma.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403BFE10 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcLazyWriteScan @ 0x14053601C (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140536EF0 (CcQueueLazyWriteScanThread.c)
 *     CcRepostToSynchronousLazywriter @ 0x14053A418 (CcRepostToSynchronousLazywriter.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x140298594 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402991F0 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    return CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    return CcPostWorkQueueRegular((__int64)a1, a2, a3, a4);
}
