/*
 * XREFs of sub_1800DD780 @ 0x1800DD780
 * Callers:
 *     sub_1800DE890 @ 0x1800DE890 (sub_1800DE890.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 *     sub_18001EF38 @ 0x18001EF38 (sub_18001EF38.c)
 *     sub_18001F1A8 @ 0x18001F1A8 (sub_18001F1A8.c)
 *     sub_18001F588 @ 0x18001F588 (sub_18001F588.c)
 *     sub_18001F62C @ 0x18001F62C (sub_18001F62C.c)
 *     sub_1800DDD4C @ 0x1800DDD4C (sub_1800DDD4C.c)
 */

void __fastcall sub_1800DD780(char **a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r13
  char *v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  char *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v4 = *a1;
  v5 = a1[1];
  v6 = (a4 - a3) >> 5;
  if ( v6 )
  {
    if ( v6 <= (a1[2] - v5) >> 5 )
    {
      v16 = 32 * v6;
      if ( v6 >= (v5 - a2) >> 5 )
      {
        a1[1] = (char *)sub_18001EF38(a2, v5, (__int64)&a2[v16]);
        v18 = (__int64)v5;
      }
      else
      {
        v17 = (__int64)&v5[-v16];
        a1[1] = (char *)sub_18001EF38(&v5[-v16], a1[1], (__int64)a1[1]);
        while ( (char *)v17 != a2 )
        {
          v17 -= 32LL;
          sub_18001F1A8((_OWORD *)(v16 + v17), v17);
        }
        v18 = (__int64)&a2[v16];
      }
      sub_18001E9BC((__int64)a2, v18);
      sub_1800DDD4C(a3, a4, a2);
    }
    else
    {
      v11 = (v5 - v4) >> 5;
      if ( v6 > 0x7FFFFFFFFFFFFFFLL - v11 )
        sub_180011B80();
      v20 = v11 + v6;
      v19 = sub_18001F588(a1, v11 + v6);
      v12 = sub_18001E9F4(v19);
      v13 = sub_18001090C(v12);
      sub_1800DDD4C(a3, a4, v13 + 32 * ((a2 - v4) >> 5));
      if ( v6 == 1 && a2 == v5 )
      {
        v14 = v13;
        v15 = v4;
      }
      else
      {
        sub_18001EF38(v4, a2, v13);
        v15 = a2;
        v14 = v13 + 32 * (v6 + ((a2 - v4) >> 5));
      }
      sub_18001EF38(v15, v5, v14);
      sub_18001F62C((__int64)a1, v13, v20, v19);
    }
  }
}
