/*
 * XREFs of sub_180093158 @ 0x180093158
 * Callers:
 *     sub_180049AC8 @ 0x180049AC8 (sub_180049AC8.c)
 *     sub_180057DB0 @ 0x180057DB0 (sub_180057DB0.c)
 *     sub_180074E38 @ 0x180074E38 (sub_180074E38.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 */

__int64 __fastcall sub_180093158(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  return sub_180093190(a1, v5, a3);
}
