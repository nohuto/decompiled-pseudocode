/*
 * XREFs of sub_1C0040950 @ 0x1C0040950
 * Callers:
 *     sub_1C00AA9A8 @ 0x1C00AA9A8 (sub_1C00AA9A8.c)
 *     sub_1C00ACDF4 @ 0x1C00ACDF4 (sub_1C00ACDF4.c)
 * Callees:
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 */

void __fastcall sub_1C0040950(__int64 a1)
{
  *(_BYTE *)(a1 + 37) = 1;
  sub_1C001A2F4((struct _EX_RUNDOWN_REF *)a1);
}
