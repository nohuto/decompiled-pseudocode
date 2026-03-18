/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x1403CFB00
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1403CFB28 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock();
  ExFreePoolWithTag(P, 0);
}
