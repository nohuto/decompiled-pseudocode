/*
 * XREFs of sub_1402394EC @ 0x1402394EC
 * Callers:
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 * Callees:
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_14033DFC0 @ 0x14033DFC0 (sub_14033DFC0.c)
 */

__int64 __fastcall sub_1402394EC(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int16 v8; // cx

  v6 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x21FFFFFFFFF8LL);
  *(_DWORD *)(a1 + 44) = 0;
  v7 = sub_1403342D0(a2, v6 | 0x8000000000000000uLL, 0xFFFFFFFFLL);
  sub_14033DFC0(a2);
  v8 = *(_WORD *)(a1 + 10) | 2;
  *(_WORD *)(a1 + 10) = v8;
  if ( (a3 & 8) != 0 )
    *(_WORD *)(a1 + 10) = v8 | 0x4000;
  *(_WORD *)(a1 + 8) = ((8 * (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12) + 48;
  return v7;
}
