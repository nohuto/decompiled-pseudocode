/*
 * XREFs of IoGetOplockFullFoExt @ 0x140301904
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403011A4 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x1403017B0 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14030192C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL);
  else
    return 0LL;
}
