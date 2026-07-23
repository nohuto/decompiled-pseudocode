/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1407654A8
 * Callers:
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402FD630 (ExCleanupAutoExpandPushLock.c)
 *     IoGetFileObjectFilterContext @ 0x1402FD850 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x1402FDACC (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExCleanupAutoExpandPushLock((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
