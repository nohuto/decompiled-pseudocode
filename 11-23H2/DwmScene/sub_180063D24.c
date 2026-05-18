/*
 * XREFs of sub_180063D24 @ 0x180063D24
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 * Callees:
 *     sub_18004E6AC @ 0x18004E6AC (sub_18004E6AC.c)
 *     sub_180062BB4 @ 0x180062BB4 (sub_180062BB4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180063D24(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18004E6AC(a1);
  v4 = *a2;
  v5 = (_QWORD *)a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != (_QWORD *)v7 )
  {
    sub_180062BB4(a1, v6, v5);
    v5 += 4;
  }
  return a1;
}
