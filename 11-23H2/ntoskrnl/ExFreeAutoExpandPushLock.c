/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x1403CFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1403CFD08 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock();
  ExFreePoolWithTag(P, 0);
}
