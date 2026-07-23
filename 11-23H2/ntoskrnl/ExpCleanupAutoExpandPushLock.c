/*
 * XREFs of ExpCleanupAutoExpandPushLock @ 0x1403CFD08
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x1403CFCE0 (ExFreeAutoExpandPushLock.c)
 *     FsRtlFreeAePushLock @ 0x14053D4B0 (FsRtlFreeAePushLock.c)
 * Callees:
 *     ExSaFree @ 0x14035CA7C (ExSaFree.c)
 */

char __fastcall ExpCleanupAutoExpandPushLock(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 1) != 0 )
    LOBYTE(v1) = ExSaFree(v1 & 0xFFFFFFF8);
  return v1;
}
