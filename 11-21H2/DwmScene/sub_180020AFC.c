/*
 * XREFs of sub_180020AFC @ 0x180020AFC
 * Callers:
 *     sub_18009F2D0 @ 0x18009F2D0 (sub_18009F2D0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18001FEFC @ 0x18001FEFC (sub_18001FEFC.c)
 *     sub_180020518 @ 0x180020518 (sub_180020518.c)
 */

__int64 __fastcall sub_180020AFC(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  void *v4; // rbp
  unsigned __int64 v5; // rcx
  char *v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(void **)a2;
  v5 = (v2 - *(_QWORD *)a2) >> 2;
  v6 = *(char **)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  if ( v5 > v7 )
  {
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      sub_180012170();
    v8 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v5 )
        v9 = v5;
    }
    else
    {
      v9 = 0x3FFFFFFFFFFFFFFFLL;
    }
    if ( v6 )
    {
      sub_180010884(*(char **)a1, 4 * v7);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    if ( v9 > 0x3FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
    v10 = 4 * v9;
    v11 = sub_180011088(v10);
    *(_QWORD *)a1 = v11;
    v6 = (char *)v11;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v10 + v11;
  }
  v12 = sub_18001FEFC(v4, v2, v6);
  result = sub_180020518(v12);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
