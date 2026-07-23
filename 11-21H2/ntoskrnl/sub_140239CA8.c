/*
 * XREFs of sub_140239CA8 @ 0x140239CA8
 * Callers:
 *     sub_140239C2C @ 0x140239C2C (sub_140239C2C.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 * Callees:
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140239CA8(ULONG_PTR BugCheckParameter2)
{
  if ( (sub_140317A10(BugCheckParameter2) & 0x400) != 0 || !sub_140315D60(BugCheckParameter2) )
    return 1LL;
  else
    return sub_1402C3100(BugCheckParameter2);
}
