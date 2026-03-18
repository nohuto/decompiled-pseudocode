/*
 * XREFs of ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C028899C
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C0287C60 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 *     ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C0288C5C (-vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C0288D54 (-vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 */

void __fastcall vCalculateLine(struct _TRIVERTEX *a1, struct _TRIVERTEX *a2, struct _TRIANGLEDATA *a3)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  LONG y; // r11d
  LONG v10; // eax
  LONG x; // edi
  LONG v12; // r9d
  int v13; // r10d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  LONG v23; // ecx
  LONG v24; // eax
  int v25; // edi
  int v26; // r9d
  int v27; // edi
  int v28; // eax
  __int64 v29; // rcx
  _QWORD v30[16]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+7h]
  __int64 v32; // [rsp+100h] [rbp+67h]
  __int64 v33; // [rsp+108h] [rbp+6Fh]
  __int64 v34; // [rsp+110h] [rbp+77h]
  __int64 v35; // [rsp+118h] [rbp+7Fh]

  memset(v30, 0, sizeof(v30));
  v6 = *((_QWORD *)a3 + 6);
  v7 = *((_QWORD *)a3 + 7);
  v8 = *((_QWORD *)a3 + 8);
  y = a1->y;
  v33 = *((_QWORD *)a3 + 9);
  v30[15] = v33;
  v10 = a2->y;
  v30[12] = v6;
  v30[13] = v7;
  v30[14] = v8;
  if ( v10 < y )
  {
    x = a2->x;
    v12 = a1->x;
    v13 = y - v10;
    HIDWORD(v30[1]) = y - v10;
    y = v10;
    HIDWORD(v30[0]) = v10;
  }
  else
  {
    x = a1->x;
    v12 = a2->x;
    v13 = v10 - y;
    HIDWORD(v30[1]) = v10 - y;
    HIDWORD(v30[0]) = y;
  }
  LODWORD(v30[0]) = x;
  v14 = v12 - x;
  v22 = y - *((_DWORD *)a3 + 35);
  v15 = x - *((_DWORD *)a3 + 34);
  v16 = *((_QWORD *)a3 + 2) * v15;
  v34 = *((_QWORD *)a3 + 2);
  LODWORD(v30[1]) = v14;
  v17 = *((_QWORD *)a3 + 3);
  v30[8] = *((_QWORD *)a3 + 10) + v6 * v22 + v16;
  v35 = v17;
  v18 = v7 * v22 + v17 * v15;
  v19 = *((_QWORD *)a3 + 4);
  v30[9] = *((_QWORD *)a3 + 11) + v18;
  v32 = v19;
  v20 = v19 * v15 + v8 * v22;
  v21 = *((_QWORD *)a3 + 5);
  v30[10] = *((_QWORD *)a3 + 12) + v20;
  v31 = v21;
  v30[11] = *((_QWORD *)a3 + 13) + v21 * v15 + v33 * v22;
  LODWORD(v22) = 0;
  if ( v13 )
  {
    LODWORD(v30[6]) = 1;
    v23 = y + v13;
    HIDWORD(v30[6]) = y - *((_DWORD *)a3 + 28);
    v24 = *((_DWORD *)a3 + 3);
    LODWORD(v30[7]) = v13;
    if ( y <= v24 && v23 >= *((_DWORD *)a3 + 1) )
    {
      if ( v23 > v24 )
        LODWORD(v30[7]) = v24 - y;
      HIDWORD(v30[5]) = y;
      v30[2] = v13 * (x + 1LL) - v14 * (__int64)y - 1;
      if ( v14 <= 0 )
      {
        if ( v14 >= 0 )
        {
          v25 = 0;
          v30[3] = 0LL;
          v26 = 0;
        }
        else
        {
          LODWORD(v30[1]) = -v14;
          v27 = (-1 - v14) / v13;
          v28 = v13 * (v27 + 1);
          v25 = ~v27;
          LODWORD(v30[3]) = v25;
          v26 = v14 + v28;
          HIDWORD(v30[3]) = v26;
        }
      }
      else
      {
        LODWORD(v30[3]) = v14 / v13;
        v25 = v14 / v13;
        v26 = v14 % v13;
        HIDWORD(v30[3]) = v26;
      }
      v29 = y * v26 + v30[2];
      if ( v29 <= 0 )
      {
        if ( v29 < 0 )
          v22 = ~(~v29 / v13);
      }
      else
      {
        LODWORD(v22) = v29 / v13;
      }
      LODWORD(v30[5]) = y * v25 + v22;
      LODWORD(v30[4]) = v29 - v13 * v22;
      HIDWORD(v30[4]) = v13 - LODWORD(v30[4]) - 1;
      v30[12] = v34 * v25 + v6;
      v30[13] = v35 * v25 + v7;
      v30[14] = v32 * v25 + v8;
      v30[15] = v31 * v25 + v33;
      vEdgeDDA(a3, (struct _TRIDDA *)v30);
    }
  }
  else
  {
    vHorizontalLine(a1, a2, a3, (struct _TRIDDA *)v30);
  }
}
