/*
 * XREFs of sub_1402F95EC @ 0x1402F95EC
 * Callers:
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14039E660 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402F95EC(_DWORD *a1)
{
  if ( (*a1 & 0xF0000u) >= 0xF0000 )
    return 0;
  *a1 += 0x10000;
  return 1;
}
