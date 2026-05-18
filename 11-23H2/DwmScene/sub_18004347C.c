/*
 * XREFs of sub_18004347C @ 0x18004347C
 * Callers:
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_18005D65C @ 0x18005D65C (sub_18005D65C.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_1800829E4 @ 0x1800829E4 (sub_1800829E4.c)
 *     sub_180086AFC @ 0x180086AFC (sub_180086AFC.c)
 *     sub_180088F6C @ 0x180088F6C (sub_180088F6C.c)
 *     sub_180092138 @ 0x180092138 (sub_180092138.c)
 *     sub_180093190 @ 0x180093190 (sub_180093190.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 *     sub_18009AA00 @ 0x18009AA00 (sub_18009AA00.c)
 * Callees:
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 *     sub_180011AF4 @ 0x180011AF4 (sub_180011AF4.c)
 */

_QWORD *__fastcall sub_18004347C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !v2 || !sub_180011A3C(v2) )
    sub_180011AF4();
  *v3 = *v4;
  v3[1] = v4[1];
  return v3;
}
