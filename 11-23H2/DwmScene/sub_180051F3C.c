/*
 * XREFs of sub_180051F3C @ 0x180051F3C
 * Callers:
 *     sub_180050E70 @ 0x180050E70 (sub_180050E70.c)
 *     sub_18008EE7C @ 0x18008EE7C (sub_18008EE7C.c)
 * Callees:
 *     sub_18001DBD0 @ 0x18001DBD0 (sub_18001DBD0.c)
 */

_QWORD *__fastcall sub_180051F3C(_QWORD *a1)
{
  _BYTE *v2; // rax

  sub_18001DBD0((__int64)a1, 0LL);
  v2 = a1;
  if ( a1[3] >= 0x10uLL )
    v2 = (_BYTE *)*a1;
  a1[2] = 0LL;
  *v2 = 0;
  return a1;
}
