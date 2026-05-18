/*
 * XREFs of sub_1800A2334 @ 0x1800A2334
 * Callers:
 *     sub_1800A2510 @ 0x1800A2510 (sub_1800A2510.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A2334(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = sub_18001090C(0x58uLL);
  a1[1] = v7;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_OWORD *)(v7 + 32) = *(_OWORD *)a4;
  *(_OWORD *)(v7 + 48) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 15LL;
  *(_BYTE *)a4 = 0;
  *(_OWORD *)(v7 + 64) = *(_OWORD *)(a4 + 32);
  *(_QWORD *)(v7 + 80) = *(_QWORD *)(a4 + 48);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
