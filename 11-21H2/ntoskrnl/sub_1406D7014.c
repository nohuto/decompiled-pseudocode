/*
 * XREFs of sub_1406D7014 @ 0x1406D7014
 * Callers:
 *     sub_1406633A8 @ 0x1406633A8 (sub_1406633A8.c)
 *     sub_1406A1CC0 @ 0x1406A1CC0 (sub_1406A1CC0.c)
 *     sub_1407A6660 @ 0x1407A6660 (sub_1407A6660.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 * Callees:
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_1406D7014(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  sub_1407A6A34(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  sub_1407B0F40(v2);
  return sub_1407A5A54(BugCheckParameter2);
}
