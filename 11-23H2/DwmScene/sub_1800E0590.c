/*
 * XREFs of sub_1800E0590 @ 0x1800E0590
 * Callers:
 *     sub_1800E073C @ 0x1800E073C (sub_1800E073C.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800118B0 @ 0x1800118B0 (sub_1800118B0.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 *     sub_180012228 @ 0x180012228 (sub_180012228.c)
 *     sub_18001306C @ 0x18001306C (sub_18001306C.c)
 *     sub_180097370 @ 0x180097370 (sub_180097370.c)
 */

void __fastcall sub_1800E0590(__int64 a1, char *a2, char *a3, char *a4)
{
  char *v4; // r14
  char *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // r8
  char *v15; // rcx
  __int64 v16; // r14
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v4 = *(char **)a1;
  v5 = *(char **)(a1 + 8);
  v6 = (a4 - a3) >> 4;
  if ( v6 )
  {
    if ( v6 <= (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 4 )
    {
      v16 = 16 * v6;
      if ( v6 >= (v5 - a2) >> 4 )
      {
        *(_QWORD *)(a1 + 8) = sub_180012228(a2, v5, &a2[v16]);
        v18 = (__int64)v5;
      }
      else
      {
        v17 = (__int64 *)&v5[-v16];
        *(_QWORD *)(a1 + 8) = sub_180012228(&v5[-v16], *(char **)(a1 + 8), *(_QWORD **)(a1 + 8));
        while ( v17 != (__int64 *)a2 )
        {
          v17 -= 2;
          sub_180011020(&v17[(unsigned __int64)v16 / 8], v17);
        }
        v18 = (__int64)&a2[v16];
      }
      sub_18001203C((__int64)a2, v18);
      sub_180097370(a3, a4, a2);
    }
    else
    {
      v11 = (v5 - v4) >> 4;
      if ( v6 > 0xFFFFFFFFFFFFFFFLL - v11 )
        sub_180011B80();
      v20 = v11 + v6;
      v19 = sub_1800118B0((_QWORD *)a1, v11 + v6);
      v12 = sub_180010B48(v19);
      v13 = (_QWORD *)sub_18001090C(v12);
      sub_180097370(a3, a4, &v13[2 * ((a2 - v4) >> 4)]);
      if ( v6 == 1 && a2 == v5 )
      {
        v14 = v13;
        v15 = v4;
      }
      else
      {
        sub_180012228(v4, a2, v13);
        v15 = a2;
        v14 = &v13[2 * v6 + 2 * ((a2 - v4) >> 4)];
      }
      sub_180012228(v15, v5, v14);
      sub_18001306C(a1, (__int64)v13, v20, v19);
    }
  }
}
