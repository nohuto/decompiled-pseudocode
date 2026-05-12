/*
 * XREFs of sub_1C007F7A4 @ 0x1C007F7A4
 * Callers:
 *     sub_1C007F8D0 @ 0x1C007F8D0 (sub_1C007F8D0.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007D38C @ 0x1C007D38C (sub_1C007D38C.c)
 *     sub_1C007D404 @ 0x1C007D404 (sub_1C007D404.c)
 *     sub_1C007F988 @ 0x1C007F988 (sub_1C007F988.c)
 */

__int64 __fastcall sub_1C007F7A4(int **a1, __int64 a2)
{
  int v4; // esi
  __int16 v5; // r8
  int *v6; // rcx
  __int64 *v7; // r8
  __int64 *v8; // rdx

  v4 = sub_1C007F988(a1, a2, *((unsigned int *)a1 + 11));
  if ( v4 >= 0 )
  {
    v5 = *(_WORD *)(a2 + 24);
    if ( !v5 )
    {
      v5 = *((_WORD *)a1 + 14);
      *(_WORD *)(a2 + 24) = v5;
    }
    v4 = sub_1C007CEAC(*a1, 1, v5, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
    if ( v4 >= 0 )
    {
      sub_1C0055B8C(*a1, "OpenSession", 255, 2, *(_QWORD *)(a2 + 16), 0LL);
      v4 = sub_1C007CF64(
             (__int64)a1,
             a2,
             255LL,
             65282LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007EC10,
             0LL,
             255LL,
             65283LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1C007EDC0,
             0LL);
    }
  }
  v6 = *a1;
  v7 = (__int64 *)(a2 + 48);
  v8 = (__int64 *)(a2 + 40);
  if ( v4 < 0 )
  {
    sub_1C007D404(v6, v8, v7);
    *(_QWORD *)(a2 + 4) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 24) = 0;
  }
  else
  {
    sub_1C007D38C(v6, *v8, *v7);
  }
  return (unsigned int)v4;
}
