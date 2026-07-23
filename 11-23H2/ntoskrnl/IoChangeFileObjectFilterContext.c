/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x1402FDACC
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x1402FD750 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1407654A8 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14030192C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1)
{
  signed __int64 v1; // r10
  char v2; // r11

  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3LL);
  if ( !v2 )
    return v1 != _InterlockedCompareExchange64((volatile signed __int64 *)0x20, 0LL, v1) ? 0xC0000021 : 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)0x20, v1, 0LL) )
    return 3221225505LL;
  return 0LL;
}
