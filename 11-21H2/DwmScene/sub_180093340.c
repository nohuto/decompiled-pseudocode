/*
 * XREFs of sub_180093340 @ 0x180093340
 * Callers:
 *     sub_180049D54 @ 0x180049D54 (sub_180049D54.c)
 *     sub_180057DF0 @ 0x180057DF0 (sub_180057DF0.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_1800747C4 @ 0x1800747C4 (sub_1800747C4.c)
 *     sub_180074F6C @ 0x180074F6C (sub_180074F6C.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_1800AC370 @ 0x1800AC370 (sub_1800AC370.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 */

__int64 __fastcall sub_180093340(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  return sub_180093378(a1, v3);
}
