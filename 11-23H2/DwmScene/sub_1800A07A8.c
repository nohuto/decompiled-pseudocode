/*
 * XREFs of sub_1800A07A8 @ 0x1800A07A8
 * Callers:
 *     sub_1800A1684 @ 0x1800A1684 (sub_1800A1684.c)
 *     sub_1800A1768 @ 0x1800A1768 (sub_1800A1768.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_1800A1940 @ 0x1800A1940 (sub_1800A1940.c)
 */

__int64 __fastcall sub_1800A07A8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    sub_1800A1940(a1);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) &= 2 * v5 - 1;
  v6 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v7 = (v6 >> 1) & (v5 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = sub_18001090C(0x10uLL);
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) + 8 * (v6 & 1)) = *a2;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
