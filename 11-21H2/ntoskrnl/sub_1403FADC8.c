/*
 * XREFs of sub_1403FADC8 @ 0x1403FADC8
 * Callers:
 *     sub_1406884C4 @ 0x1406884C4 (sub_1406884C4.c)
 *     sub_140919024 @ 0x140919024 (sub_140919024.c)
 *     sub_140919080 @ 0x140919080 (sub_140919080.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403FADC8(int *a1, unsigned __int16 *a2, unsigned __int64 a3, _DWORD *a4)
{
  int v4; // r10d
  int v5; // r11d
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  int v8; // r10d
  int v9; // r11d
  int v10; // r10d
  int v11; // r11d
  int v12; // r10d
  int v13; // r10d
  int v14; // r11d
  int v15; // r10d
  int v16; // r11d
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  int v22; // r10d
  int v23; // r11d
  int v24; // r10d
  int v25; // r11d
  int v26; // ecx
  int v27; // r10d
  int v28; // r11d
  int v29; // r10d
  int v30; // r11d
  int v31; // r10d
  int v32; // r11d
  int v33; // r10d
  int v34; // r11d
  int v35; // r10d
  int v36; // r11d
  int v37; // r10d
  int v38; // r11d
  int v39; // r10d
  int v40; // r11d
  int v41; // r10d
  int v42; // r11d

  v4 = *a1;
  v5 = a1[1];
  if ( a3 > 7 )
  {
    v6 = ((a3 - 8) >> 3) + 1;
    result = -8LL * v6;
    a3 += -8LL * v6;
    do
    {
      v8 = *(_DWORD *)a2 + v4;
      v9 = v8 ^ v5;
      v10 = v9 + __ROL4__(v8, 20);
      v11 = v10 ^ __ROL4__(v9, 9);
      v12 = *((_DWORD *)a2 + 1) + __ROL4__(v10, 27);
      a2 += 4;
      v13 = v11 + v12;
      v14 = v13 ^ __ROL4__(v11, 19);
      v15 = v14 + __ROL4__(v13, 20);
      v16 = v15 ^ __ROL4__(v14, 9);
      v4 = v16 + __ROL4__(v15, 27);
      v5 = __ROL4__(v16, 19);
      --v6;
    }
    while ( v6 );
  }
  if ( !a3 )
    goto LABEL_17;
  v17 = a3 - 1;
  if ( !v17 )
    goto LABEL_16;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_14;
  v19 = v18 - 1;
  if ( v19 )
  {
    v20 = v19 - 2;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = *(_DWORD *)a2 + v4;
        v23 = v22 ^ v5;
        v24 = v23 + __ROL4__(v22, 20);
        v25 = v24 ^ __ROL4__(v23, 9);
        v4 = v25 + __ROL4__(v24, 27);
        v5 = __ROL4__(v25, 19);
        if ( v21 == 1 )
        {
          a2 += 2;
          goto LABEL_12;
        }
LABEL_17:
        v26 = 128;
        goto LABEL_18;
      }
      v27 = *(_DWORD *)a2 + v4;
      v28 = v27 ^ v5;
      v29 = v28 + __ROL4__(v27, 20);
      v30 = v29 ^ __ROL4__(v28, 9);
      v4 = v30 + __ROL4__(v29, 27);
      v5 = __ROL4__(v30, 19);
      a2 += 2;
LABEL_14:
      v26 = *a2 | 0x800000;
      goto LABEL_18;
    }
    v31 = *(_DWORD *)a2 + v4;
    v32 = v31 ^ v5;
    v33 = v32 + __ROL4__(v31, 20);
    v34 = v33 ^ __ROL4__(v32, 9);
    v4 = v34 + __ROL4__(v33, 27);
    v5 = __ROL4__(v34, 19);
    a2 += 2;
LABEL_16:
    v26 = *(unsigned __int8 *)a2 | 0x8000;
    goto LABEL_18;
  }
LABEL_12:
  result = *a2;
  v26 = result | (*((unsigned __int8 *)a2 + 2) << 16) | 0x80000000;
LABEL_18:
  v35 = v26 + v4;
  v36 = v35 ^ v5;
  v37 = v36 + __ROL4__(v35, 20);
  v38 = v37 ^ __ROL4__(v36, 9);
  v39 = v38 + __ROL4__(v37, 27);
  v40 = v39 ^ __ROL4__(v38, 19);
  v41 = v40 + __ROL4__(v39, 20);
  v42 = v41 ^ __ROL4__(v40, 9);
  a4[1] = __ROL4__(v42, 19);
  *a4 = v42 + __ROL4__(v41, 27);
  return result;
}
