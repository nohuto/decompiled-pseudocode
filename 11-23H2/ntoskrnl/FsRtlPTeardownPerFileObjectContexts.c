/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1407652B8
 * Callers:
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402FD3A0 (ExCleanupAutoExpandPushLock.c)
 *     IoGetFileObjectFilterContext @ 0x1402FD5C0 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x1402FD83C (IoChangeFileObjectFilterContext.c)
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
