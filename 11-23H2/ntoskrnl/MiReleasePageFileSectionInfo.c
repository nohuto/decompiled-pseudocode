/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x14063B578
 * Callers:
 *     MiReservePageFileSpace @ 0x1402849A0 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x1406382E4 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x14063AC44 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseControlAreaWaiters @ 0x1402E3F2C (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1402F4824 (MiDecrementModifiedWriteCount.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
