/*
 * XREFs of sub_1800818E4 @ 0x1800818E4
 * Callers:
 *     sub_180081D34 @ 0x180081D34 (sub_180081D34.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_180074510 @ 0x180074510 (sub_180074510.c)
 *     sub_1800839BC @ 0x1800839BC (sub_1800839BC.c)
 */

char *__fastcall sub_1800818E4(char **a1, char *a2, _QWORD *a3)
{
  char *v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // rdx
  char *v13; // rsi
  char *v14; // r8
  char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r9
  signed __int64 v19; // rdx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = sub_180074510(a1, v6 + 1);
  v10 = sub_180017058(v9);
  v11 = sub_18001090C(v10);
  v12 = (_QWORD *)v11;
  v13 = (char *)(v11 + 8 * ((a2 - v3) >> 3));
  *(_QWORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    while ( v15 != v14 )
    {
      v16 = *(_QWORD *)v15;
      v15 += 8;
      *v12++ = v16;
    }
  }
  else
  {
    while ( v15 != a2 )
    {
      v17 = *(_QWORD *)v15;
      v15 += 8;
      *v12++ = v17;
    }
    v18 = a1[1];
    if ( a2 != v18 )
    {
      v19 = v13 - a2;
      do
      {
        *(_QWORD *)&a2[v19 + 8] = *(_QWORD *)a2;
        a2 += 8;
      }
      while ( a2 != v18 );
    }
  }
  sub_1800839BC(a1, v11, v8, v9);
  return v13;
}
