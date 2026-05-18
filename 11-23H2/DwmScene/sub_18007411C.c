/*
 * XREFs of sub_18007411C @ 0x18007411C
 * Callers:
 *     sub_180074220 @ 0x180074220 (sub_180074220.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_18002A910 @ 0x18002A910 (sub_18002A910.c)
 *     sub_180074318 @ 0x180074318 (sub_180074318.c)
 */

__int64 __fastcall sub_18007411C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  __int64 v5; // r9
  char v7; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)(a2 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  if ( a1 + 136 != a2 + 136 )
  {
    sub_180074318(a1 + 136);
    sub_18002A910(v3, v2, v7, v5);
  }
  return a1;
}
