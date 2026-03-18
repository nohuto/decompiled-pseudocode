/*
 * XREFs of FsRtlFreeAePushLock @ 0x14053CF60
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1403CFB28 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlFreeAePushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
