/*
 * XREFs of sub_1405FBB0C @ 0x1405FBB0C
 * Callers:
 *     sub_1405FBC00 @ 0x1405FBC00 (sub_1405FBC00.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 */

void __fastcall sub_1405FBB0C(__int64 a1, __int16 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rax

  v2 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, a2 & 0x3FF);
  sub_1402AD030(v2 + 1);
}
