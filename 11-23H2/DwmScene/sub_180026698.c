/*
 * XREFs of sub_180026698 @ 0x180026698
 * Callers:
 *     sub_180026080 @ 0x180026080 (sub_180026080.c)
 *     sub_1800273E0 @ 0x1800273E0 (sub_1800273E0.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_18003439C @ 0x18003439C (sub_18003439C.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_1800C72E0 @ 0x1800C72E0 (sub_1800C72E0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800278F8 @ 0x1800278F8 (sub_1800278F8.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 */

_QWORD *__fastcall sub_180026698(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rax

  sub_18002A370(a1 + 24);
  v6 = (_QWORD *)sub_1800278F8(a1 + 248, a3);
  sub_18001246C(a2, v6);
  return a2;
}
