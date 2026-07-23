/*
 * XREFs of sub_1407881D0 @ 0x1407881D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407882D4 @ 0x1407882D4 (sub_1407882D4.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140788A34 @ 0x140788A34 (sub_140788A34.c)
 *     sub_140A2DA0C @ 0x140A2DA0C (sub_140A2DA0C.c)
 *     sub_140A2EAB8 @ 0x140A2EAB8 (sub_140A2EAB8.c)
 *     sub_140A2EF0C @ 0x140A2EF0C (sub_140A2EF0C.c)
 *     sub_140A2FD74 @ 0x140A2FD74 (sub_140A2FD74.c)
 *     sub_140A30458 @ 0x140A30458 (sub_140A30458.c)
 */

__int64 __fastcall sub_1407881D0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int v6; // eax
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // eax
  int v21; // r8d
  int v22[6]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v22 = 0LL;
  v6 = sub_1407882D4(a1, a3, v22);
  v9 = (unsigned int)v6;
  if ( v6 < 0 )
    return (unsigned int)v9;
  v10 = v22[0];
  v11 = *(unsigned int *)(*(_QWORD *)v22 + 12LL);
  if ( (v11 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v11 )
    {
      LODWORD(v9) = -1073740697;
      return (unsigned int)v9;
    }
    if ( v8 == 2 )
    {
      if ( !*((_BYTE *)a5 + 4) )
        goto LABEL_25;
    }
    else
    {
      if ( v8 <= 2 )
        goto LABEL_3;
      if ( v8 > 4 )
      {
        if ( v8 > 6 && v8 != 8 )
        {
          if ( v8 != 9 )
            goto LABEL_3;
          goto LABEL_24;
        }
LABEL_25:
        v11 = (unsigned int)v11 >> 31;
LABEL_26:
        v9 = (_BYTE)v11 == 0 ? 0xC0000022 : 0;
        if ( !(_BYTE)v11 )
          return (unsigned int)v9;
        goto LABEL_3;
      }
    }
LABEL_24:
    v11 = (unsigned int)v11 >> 30;
    LOBYTE(v11) = v11 & 1;
    goto LABEL_26;
  }
LABEL_3:
  v12 = v8 - 1;
  if ( !v12 )
  {
    v19 = sub_140A30458(v11, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    LOBYTE(v7) = *((_BYTE *)a5 + 4);
    v19 = sub_140788A34(v22[0], a2, *(_DWORD *)a5, v7, a5[1], (__int64)(a5 + 2));
LABEL_11:
    LODWORD(v9) = v19;
    return (unsigned int)v9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            v19 = sub_140A2FD74(v22[0], a2, *a5, a5[2], *((_DWORD *)a5 + 6), (void *)a5[4], *((_DWORD *)a5 + 10));
          }
          else
          {
            v19 = sub_1407886D0(v22[0], a2, *a5, a5[2], a5[3], (void *)a5[4], *((_DWORD *)a5 + 10), a5[6]);
          }
        }
        else
        {
          v19 = sub_140A2EAB8(*(_QWORD *)v22, a2, *a5, a5[3], *((_DWORD *)a5 + 8), a5[5]);
        }
      }
      else
      {
        v19 = sub_140A2EF0C(v22[0], 2, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      v19 = sub_140A2DA0C(*(_QWORD *)v22, 2LL, a2);
    }
    goto LABEL_11;
  }
  v21 = *(_DWORD *)a5;
  v22[0] = 0;
  LOBYTE(v7) = 1;
  LODWORD(v9) = sub_140788A34(v10, a2, v21, v7, (__int64)(a5 + 1), (__int64)v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = v22[0] == 1;
  return (unsigned int)v9;
}
