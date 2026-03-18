/*
 * XREFs of FsRtlpClearOwner @ 0x1402FD62C
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x1402FBB38 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1402FD670 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402FE830 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x140300F14 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140301920 (FsRtlpRequestShareableOplock.c)
 *     FsRtlUninitializeOplock @ 0x14034C630 (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403B23B0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BFC24 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D3330 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053DF68 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockBreakToNone @ 0x14053E8F0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140766310 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093E34C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall FsRtlpClearOwner(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  if ( a2 )
  {
    v3 = *(void **)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  else
  {
    v3 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v3 )
    ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
}
