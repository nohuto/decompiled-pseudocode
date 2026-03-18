/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x1403CF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1403CF4C8 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock();
  ExFreePoolWithTag(P, 0);
}
