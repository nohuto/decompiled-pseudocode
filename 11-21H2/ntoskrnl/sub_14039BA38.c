/*
 * XREFs of sub_14039BA38 @ 0x14039BA38
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402AEE80 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14063D340 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     sub_14039C618 @ 0x14039C618 (sub_14039C618.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_14039BA38(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  void *v4; // rsi
  char v5; // bl

  v4 = (void *)sub_14039C618(BugCheckParameter2, a2, a3);
  v5 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)v4);
  if ( !v5 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
