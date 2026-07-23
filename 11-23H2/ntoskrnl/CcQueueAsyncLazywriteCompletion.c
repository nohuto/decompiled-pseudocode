/*
 * XREFs of CcQueueAsyncLazywriteCompletion @ 0x14053BC64
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x14053B164 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcWriteBehindReleaseFile @ 0x14029B6B8 (CcWriteBehindReleaseFile.c)
 *     CcFlushCachePostProcess @ 0x14029DFCC (CcFlushCachePostProcess.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A684 (CcPostWorkQueueAsyncLazywrite.c)
 */

char __fastcall CcQueueAsyncLazywriteCompletion(__int64 a1, char a2, char a3)
{
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // r14

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 152);
  if ( a2 )
    CcFlushCachePostProcess(*(__int64 **)(a1 + 16));
  if ( a3 )
    v4 = CcWriteBehindReleaseFile(v3);
  *(_DWORD *)(a1 + 128) = 8;
  *(_BYTE *)(a1 + 72) = a3;
  CcPostWorkQueueAsyncLazywrite(a1, v5 + 424);
  return v4;
}
