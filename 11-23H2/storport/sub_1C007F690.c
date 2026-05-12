/*
 * XREFs of sub_1C007F690 @ 0x1C007F690
 * Callers:
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007D404 @ 0x1C007D404 (sub_1C007D404.c)
 */

__int64 __fastcall sub_1C007F690(int **a1, __int64 a2, __int64 a3)
{
  __int16 v6; // r8
  __int64 *v7; // r14
  __int64 *v8; // r15
  int v9; // ebp

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  v6 = *(_WORD *)(a2 + 24);
  if ( !v6 )
  {
    v6 = *((_WORD *)a1 + 14);
    *(_WORD *)(a2 + 24) = v6;
  }
  v7 = (__int64 *)(a2 + 48);
  v8 = (__int64 *)(a2 + 40);
  v9 = sub_1C007CEAC(*a1, 1, v6, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
  if ( v9 >= 0 )
  {
    sub_1C0055B8C(*a1, "GetTPerProperties", 255, 1, 0LL, 0LL);
    v9 = sub_1C007CF64(
           (__int64)a1,
           a2,
           255LL,
           65281LL,
           0LL,
           0LL,
           255LL,
           65281LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1C007EEF0,
           a3);
  }
  sub_1C007D404(*a1, v8, v7);
  return (unsigned int)v9;
}
