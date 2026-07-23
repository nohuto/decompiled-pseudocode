/*
 * XREFs of CcIsFatalWriteError @ 0x1402F4538
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14029EC80 (CcFlushCachePostProcessOneRange.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402F43E8 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x140394370 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A1760 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     MmIsWriteErrorFatal @ 0x1402F4C6C (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, int a2)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x193FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  ObFastDereferenceObjectDeferDelete((signed __int64 *)(a1 + 96), v5, 0x63536343u);
  return (unsigned int)MmIsWriteErrorFatal(1LL, v6, (unsigned int)a2) != 0;
}
