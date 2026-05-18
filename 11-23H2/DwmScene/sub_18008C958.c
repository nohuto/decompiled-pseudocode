/*
 * XREFs of sub_18008C958 @ 0x18008C958
 * Callers:
 *     sub_18008D2E8 @ 0x18008D2E8 (sub_18008D2E8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_180074510 @ 0x180074510 (sub_180074510.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 */

char *__fastcall sub_18008C958(char **a1, char *a2, _QWORD *a3)
{
  char *v3; // rsi
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r10
  char *v13; // rsi
  char *v14; // r8
  char *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  char *v19; // rdx
  signed __int64 v20; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v8 = v6 + 1;
  v9 = sub_180074510(a1, v6 + 1);
  v10 = sub_180017058(v9);
  v11 = (_QWORD *)sub_18001090C(v10);
  v12 = (__int64)v11;
  v13 = (char *)&v11[(a2 - v3) >> 3];
  *(_QWORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v11;
    while ( v15 != v14 )
    {
      v17 = *(_QWORD *)v15;
      v15 += 8;
      *v16++ = v17;
    }
  }
  else
  {
    while ( v15 != a2 )
    {
      v18 = *(_QWORD *)v15;
      v15 += 8;
      *v11++ = v18;
    }
    v19 = a1[1];
    if ( a2 != v19 )
    {
      v20 = v13 - a2;
      do
      {
        *(_QWORD *)&a2[v20 + 8] = *(_QWORD *)a2;
        a2 += 8;
      }
      while ( a2 != v19 );
    }
  }
  sub_180085B50((__int64)a1, v12, v8, v9);
  return v13;
}
