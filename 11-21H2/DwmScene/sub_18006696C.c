/*
 * XREFs of sub_18006696C @ 0x18006696C
 * Callers:
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 *     sub_180026CF8 @ 0x180026CF8 (sub_180026CF8.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 */

__int64 __fastcall sub_18006696C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 *v5; // rbx
  __int64 *v6; // rdx
  char *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbp
  signed __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // rsi

  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(__int64 **)a2;
  v6 = *(__int64 **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = (v3 - (__int64)v5) >> 5;
  v9 = ((__int64)v6 - *(_QWORD *)a1) >> 5;
  if ( v8 <= v9 )
  {
    v18 = (__int64)&v7[32 * v8];
    if ( v5 != (__int64 *)v3 )
    {
      do
      {
        sub_18003372C((__int64 *)v7, v5, a3);
        v7 += 32;
        v5 += 4;
      }
      while ( v5 != (__int64 *)v3 );
      v6 = *(__int64 **)(a1 + 8);
    }
    result = sub_18001FF34(v18, (__int64)v6);
    *(_QWORD *)(a1 + 8) = v18;
  }
  else
  {
    v10 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 5;
    if ( v8 > v10 )
    {
      if ( v8 > 0x7FFFFFFFFFFFFFFLL )
        sub_180012170();
      v11 = v10 >> 1;
      if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
      {
        v12 = v11 + v10;
        if ( v11 + v10 < v8 )
          v12 = (v3 - (__int64)v5) >> 5;
      }
      else
      {
        v12 = 0x7FFFFFFFFFFFFFFLL;
      }
      v9 = 0LL;
      if ( v7 )
      {
        sub_18001FF34((__int64)v7, (__int64)v6);
        sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      if ( v12 > 0x7FFFFFFFFFFFFFFLL )
        sub_1800120D4();
      v13 = 32 * v12;
      v14 = sub_180011088(v13);
      *(_QWORD *)a1 = v14;
      v7 = (char *)v14;
      *(_QWORD *)(a1 + 8) = v14;
      v6 = (__int64 *)v14;
      *(_QWORD *)(a1 + 16) = v13 + v14;
    }
    v15 = (__int64)&v5[4 * v9];
    if ( v5 != (__int64 *)v15 )
    {
      v16 = v7 - (char *)v5;
      do
      {
        sub_18003372C((__int64 *)((char *)v5 + v16), v5, a3);
        v5 += 4;
      }
      while ( v5 != (__int64 *)v15 );
      v6 = *(__int64 **)(a1 + 8);
    }
    result = (__int64)sub_180026CF8(v15, v3, v6);
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
