/*
 * XREFs of sub_1C007F988 @ 0x1C007F988
 * Callers:
 *     sub_1C007F7A4 @ 0x1C007F7A4 (sub_1C007F7A4.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007D404 @ 0x1C007D404 (sub_1C007D404.c)
 */

__int64 __fastcall sub_1C007F988(int **a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r8
  __int64 *v6; // rbp
  __int64 *v7; // r14
  int v8; // esi
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_WORD *)(a2 + 24);
  if ( !v3 )
  {
    v3 = *((_WORD *)a1 + 14);
    *(_WORD *)(a2 + 24) = v3;
  }
  v6 = (__int64 *)(a2 + 48);
  v7 = (__int64 *)(a2 + 40);
  v8 = sub_1C007CEAC(*a1, 1, v3, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
  if ( v8 >= 0 )
  {
    sub_1C0055B8C(*a1, "SetMaxPacketSize", 255, 23, v10, 0LL);
    v8 = sub_1C007CF64(
           (__int64)a1,
           a2,
           255LL,
           65281LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007EA10,
           (__int64)&v10,
           255LL,
           65281LL,
           0LL,
           0LL);
  }
  sub_1C007D404(*a1, v7, v6);
  return (unsigned int)v8;
}
