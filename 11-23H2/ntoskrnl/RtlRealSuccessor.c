/*
 * XREFs of RtlRealSuccessor @ 0x140326CF0
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x140200D08 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140326A34 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x140327004 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140327174 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1403278DC (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140327960 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x14032855C (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1403676E0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     RtlEnumerateGenericTable @ 0x1403B5380 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x14053D420 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x14079E720 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140865AC0 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
