/*
 * XREFs of sub_14063CD9C @ 0x14063CD9C
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402339A0 (ExAcquireSharedStarveExclusive.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     sub_14039C618 @ 0x14039C618 (sub_14039C618.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_14063CD9C(ULONG_PTR BugCheckParameter2, char a2)
{
  _BYTE *v4; // rsi
  char v5; // bl

  v4 = sub_14039C618();
  v5 = ExAcquireFastResourceSharedStarveExclusive(BugCheckParameter2, (ULONG_PTR)v4, a2);
  if ( !v5 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
