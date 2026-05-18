/*
 * XREFs of sub_180053850 @ 0x180053850
 * Callers:
 *     sub_180051B50 @ 0x180051B50 (sub_180051B50.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800509F8 @ 0x1800509F8 (sub_1800509F8.c)
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 *     sub_180050D2C @ 0x180050D2C (sub_180050D2C.c)
 */

__int64 __fastcall sub_180053850(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbp
  char *v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rbx

  v2 = *(_QWORD **)(a2 + 8);
  v3 = *(_QWORD **)a2;
  v5 = *(char **)a1;
  v6 = 0x2E8BA2E8BA2E8BA3LL * (((__int64)v2 - *(_QWORD *)a2) >> 3);
  v7 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v6 <= v7 )
  {
    v14 = (__int64)&v5[88 * v6];
    sub_1800509F8(v3, v2, v5);
    result = sub_180050B9C(v14, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v14;
  }
  else
  {
    v8 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 3);
    if ( v6 > v8 )
    {
      if ( v6 > 0x2E8BA2E8BA2E8BALL )
        sub_180012170();
      v9 = v8 >> 1;
      if ( v8 <= 0x2E8BA2E8BA2E8BALL - (v8 >> 1) )
      {
        v10 = v9 + v8;
        if ( v9 + v8 < v6 )
          v10 = v6;
      }
      else
      {
        v10 = 0x2E8BA2E8BA2E8BALL;
      }
      v7 = 0LL;
      if ( v5 )
      {
        sub_180050B9C((__int64)v5, *(_QWORD *)(a1 + 8));
        sub_180010884(*(char **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      if ( v10 > 0x2E8BA2E8BA2E8BALL )
        sub_1800120D4();
      v11 = 88 * v10;
      v12 = sub_180011088(v11);
      *(_QWORD *)a1 = v12;
      v5 = (char *)v12;
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 16) = v11 + v12;
    }
    sub_1800509F8(v3, &v3[11 * v7], v5);
    result = (__int64)sub_180050D2C((__int64)&v3[11 * v7], (__int64)v2, *(_QWORD **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
