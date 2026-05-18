/*
 * XREFs of sub_1800F7DC4 @ 0x1800F7DC4
 * Callers:
 *     sub_1800F9160 @ 0x1800F9160 (sub_1800F9160.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 *     sub_180020570 @ 0x180020570 (sub_180020570.c)
 *     sub_1800F8248 @ 0x1800F8248 (sub_1800F8248.c)
 */

void __fastcall sub_1800F7DC4(__int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rbp
  __int64 v5; // r12
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  _OWORD *v18; // r13
  char *v19; // rcx
  _OWORD *v20; // r8
  __int64 v21; // r15
  char *v22; // r14
  char *v23; // r12
  char *v24; // rbp
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  char *v27; // [rsp+60h] [rbp+8h]
  __int64 v28; // [rsp+68h] [rbp+10h]

  v4 = (char *)a1[1];
  v5 = a4 - a3;
  v7 = *a1;
  v8 = a3;
  v9 = v5 >> 5;
  v27 = (char *)*a1;
  if ( v9 )
  {
    v12 = a1[2];
    if ( v9 <= (v12 - (__int64)v4) >> 5 )
    {
      v21 = 32 * v9;
      if ( v9 >= (v4 - a2) >> 5 )
      {
        a1[1] = (__int64)sub_180020570(a2, v4, &a2[v21]);
        v26 = (__int64)v4;
      }
      else
      {
        a1[1] = (__int64)sub_180020570(&v4[-v21], v4, v4);
        if ( &v4[-v21] != a2 )
        {
          v22 = &v4[-v21 + 24];
          do
          {
            v22 -= 32;
            v23 = &v22[v21 - 24];
            v24 = v22 - 24;
            if ( v23 != v22 - 24 )
            {
              v25 = *(_QWORD *)&v22[v21];
              if ( v25 >= 8 )
                sub_180010884(*(char **)v23, 2 * v25 + 2);
              *(_QWORD *)&v22[v21 - 8] = 0LL;
              *(_QWORD *)&v22[v21] = 7LL;
              *(_WORD *)v23 = 0;
              *(_OWORD *)v23 = *(_OWORD *)v24;
              *((_OWORD *)v23 + 1) = *((_OWORD *)v24 + 1);
              *((_QWORD *)v22 - 1) = 0LL;
              *(_QWORD *)v22 = 7LL;
              *(_WORD *)v24 = 0;
            }
          }
          while ( v24 != a2 );
          v8 = a3;
        }
        v26 = (__int64)&a2[v21];
      }
      sub_18001FF34((__int64)a2, v26);
      sub_1800F8248(v8, a4, a2);
    }
    else
    {
      v13 = 0x7FFFFFFFFFFFFFFLL;
      v14 = (__int64)&v4[-v7] >> 5;
      if ( v9 > 0x7FFFFFFFFFFFFFFLL - v14 )
        sub_180012170();
      v15 = v14 + v9;
      v16 = (v12 - v7) >> 5;
      if ( v16 <= 0x7FFFFFFFFFFFFFFLL - (v16 >> 1) )
      {
        v17 = v14 + v9;
        if ( (v16 >> 1) + v16 >= v15 )
          v17 = (v16 >> 1) + v16;
        if ( v17 > 0x7FFFFFFFFFFFFFFLL )
          sub_1800120D4();
        v13 = v17;
      }
      v28 = 2 * v13;
      v18 = (_OWORD *)sub_180011088(32 * v13);
      sub_1800F8248(v8, a4, &v18[2 * ((a2 - v27) >> 5)]);
      if ( v9 == 1 && a2 == v4 )
      {
        v19 = v27;
        v20 = v18;
      }
      else
      {
        sub_180020570(v27, a2, v18);
        v19 = a2;
        v20 = &v18[2 * v9 + 2 * ((a2 - v27) >> 5)];
      }
      sub_180020570(v19, v4, v20);
      if ( *a1 )
      {
        sub_18001FF34(*a1, a1[1]);
        sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
      }
      *a1 = (__int64)v18;
      a1[1] = (__int64)&v18[2 * v15];
      a1[2] = (__int64)&v18[v28];
    }
  }
}
