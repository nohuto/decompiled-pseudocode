/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14039EB60
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

__int64 __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter3)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter3);
  return sub_140348B40(BugCheckParameter3);
}
