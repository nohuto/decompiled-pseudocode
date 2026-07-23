/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x14063BAC8
 * Callers:
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x14063B194 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiReleaseControlAreaWaiters @ 0x1402E41BC (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1402F4AB4 (MiDecrementModifiedWriteCount.c)
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
