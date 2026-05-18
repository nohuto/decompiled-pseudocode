/*
 * XREFs of sub_18002F280 @ 0x18002F280
 * Callers:
 *     sub_180035B28 @ 0x180035B28 (sub_180035B28.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_1800109B0 @ 0x1800109B0 (sub_1800109B0.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180010C1C @ 0x180010C1C (sub_180010C1C.c)
 *     sub_1800118B0 @ 0x1800118B0 (sub_1800118B0.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18002FFD4 @ 0x18002FFD4 (sub_18002FFD4.c)
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 */

void __fastcall sub_18002F280(__int64 a1, char *a2, __int64 a3, __int64 a4)
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
  char *v17; // rsi
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
        *(_QWORD *)(a1 + 8) = sub_180010C1C(a2, v5, &a2[v16]);
        v18 = (__int64)v5;
      }
      else
      {
        v17 = &v5[-v16];
        *(_QWORD *)(a1 + 8) = sub_180010C1C(&v5[-v16], *(char **)(a1 + 8), *(_QWORD **)(a1 + 8));
        while ( v17 != a2 )
        {
          v17 -= 16;
          sub_180032160(&v17[v16], v17);
        }
        v18 = (__int64)&a2[v16];
      }
      sub_1800109B0((__int64)a2, v18);
      sub_18002FFD4(a3, a4, a2);
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
      sub_18002FFD4(a3, a4, &v13[2 * ((a2 - v4) >> 4)]);
      if ( v6 == 1 && a2 == v5 )
      {
        v14 = v13;
        v15 = v4;
      }
      else
      {
        sub_180010C1C(v4, a2, v13);
        v15 = a2;
        v14 = &v13[2 * v6 + 2 * ((a2 - v4) >> 4)];
      }
      sub_180010C1C(v15, v5, v14);
      sub_1800118EC(a1, (__int64)v13, v20, v19);
    }
  }
}
