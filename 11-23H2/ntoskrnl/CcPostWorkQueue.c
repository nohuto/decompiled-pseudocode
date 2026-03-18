/*
 * XREFs of CcPostWorkQueue @ 0x14029AFB4
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140298244 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScanVolume @ 0x14029A600 (CcLazyWriteScanVolume.c)
 *     CcScheduleReadAheadNuma @ 0x140328FBC (CcScheduleReadAheadNuma.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403C0470 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcLazyWriteScan @ 0x140535F6C (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140536E40 (CcQueueLazyWriteScanThread.c)
 *     CcRepostToSynchronousLazywriter @ 0x14053A368 (CcRepostToSynchronousLazywriter.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x1402986B4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140299310 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    return CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    return CcPostWorkQueueRegular((__int64)a1, a2, a3, a4);
}
