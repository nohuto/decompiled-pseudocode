/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1402563D0 (FsRtlInsertPerFileContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402A2FE0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A3510 (FsRtlInsertPerFileObjectContext.c)
 *     MiUnlockLoaderEntry @ 0x1402D94D8 (MiUnlockLoaderEntry.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     FsRtlRemovePerFileContext @ 0x1405417D0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1405418D0 (FsRtlRemovePerStreamContext.c)
 *     MiFreePhysicalPageChain @ 0x1405AA6C4 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x1405AC8D4 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405AC950 (MiUnlockAweVadsExclusive.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406B41F0 (FsRtlTeardownPerFileContexts.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407B1200 (FsRtlTeardownPerStreamContexts.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14039F0DC (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  int v5; // ecx
  __int64 result; // rax

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v5 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( (v5 & 0xF0000u) < 0xF0000 )
      *(_DWORD *)(BugCheckParameter2 + 12) = v5 + 0x10000;
  }
  result = ExReleasePushLockEx(BugCheckParameter2, 2uLL);
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
