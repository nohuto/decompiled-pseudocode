/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x14053E1A0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140301920 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053DF68 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x14053EC40 (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlpComputeShareableOplockState @ 0x140302370 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053EC5C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 */

void __fastcall FsRtlpCancelReadOnlyOplockIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // r14
  _QWORD *i; // rbx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v4 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 40); i != (_QWORD *)(v3 + 40); i = (_QWORD *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (_QWORD *)i[1];
      FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 3221225760LL, 0LL, v3);
      v4 = 1;
    }
  }
  if ( v4 )
    FsRtlpComputeShareableOplockState((_QWORD *)v3);
  if ( !a2 )
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v3 + 152));
}
