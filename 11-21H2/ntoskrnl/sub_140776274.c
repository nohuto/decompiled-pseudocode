/*
 * XREFs of sub_140776274 @ 0x140776274
 * Callers:
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 *     sub_140746B5C @ 0x140746B5C (sub_140746B5C.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14094D930 @ 0x14094D930 (sub_14094D930.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

bool __fastcall sub_140776274(void *Source2)
{
  return RtlCompareMemory(&xmmword_140010DE8, Source2, 0x10uLL) == 16;
}
