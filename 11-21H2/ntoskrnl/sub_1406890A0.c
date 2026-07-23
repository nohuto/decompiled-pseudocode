/*
 * XREFs of sub_1406890A0 @ 0x1406890A0
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_14020AA74 @ 0x14020AA74 (sub_14020AA74.c)
 *     sub_140689BB8 @ 0x140689BB8 (sub_140689BB8.c)
 *     sub_14068A5A8 @ 0x14068A5A8 (sub_14068A5A8.c)
 *     sub_1406E72CC @ 0x1406E72CC (sub_1406E72CC.c)
 */

char __fastcall sub_1406890A0(__int64 a1, char a2, int *a3)
{
  int *v3; // rsi
  char v7; // cl
  _DWORD *v8; // r11
  int v9; // r10d
  int v10; // r10d
  int v11; // ecx
  char v12; // al
  int v13; // eax
  int v14; // r9d
  int v15; // ecx
  int v16; // r10d
  int v17; // r9d
  int v18; // r9d
  char v19; // r10
  int v20; // r10d
  int v21; // r10d
  int v22; // r9d
  int v23; // r9d

  v3 = a3 + 2;
  *(_QWORD *)a3 = 0LL;
  a3[2] = 0;
  a3[5] = 0;
  a3[3] = 0;
  v7 = *(_BYTE *)(a1 + 195);
  if ( !v7 )
  {
    v8 = (_DWORD *)(a1 + 104);
    if ( !*(_DWORD *)(a1 + 104) && !*(_DWORD *)(a1 + 128) )
    {
      v12 = 0;
      goto LABEL_12;
    }
  }
  v8 = (_DWORD *)(a1 + 104);
  if ( !*(_DWORD *)(a1 + 104) )
  {
    v12 = 1;
    if ( !v7 )
    {
LABEL_12:
      v10 = 0;
      v11 = 0;
      if ( !v12 )
        goto LABEL_15;
      goto LABEL_13;
    }
  }
  v9 = 9;
  *a3 = 9;
  if ( *(_BYTE *)(a1 + 194) )
  {
    v9 = 27;
    *a3 = 27;
  }
  if ( *(_DWORD *)(a1 + 4228) )
    *a3 = v9 | 0x82;
  a3[6] = sub_140689BB8(a1);
  v11 = v10;
LABEL_13:
  if ( (a2 & 4) != 0 )
  {
    v10 = v11 | 0x42;
    *a3 = v11 | 0x42;
  }
LABEL_15:
  v13 = *(_DWORD *)(a1 + 160);
  if ( (v13 & 2) == 0 )
  {
    LOBYTE(v13) = (dword_140C49238 & 1) == 0;
    if ( (((*(_DWORD *)(a1 + 4112) & 0x800) == 0) & (unsigned __int8)v13) != 0 )
    {
      if ( (a2 & 8) != 0 && (!*(_BYTE *)(a1 + 194) || (v10 & 0x10) != 0) )
      {
        v16 = v10 | 0x107;
        *a3 = v16;
        if ( (v16 & 8) != 0 )
        {
          sub_14068A5A8(a1, (unsigned int)a3[6], v3);
          v13 = *v3;
          if ( (*v3 & 0xC) != 0 )
            *a3 |= 0x400u;
        }
        return v13;
      }
      if ( (v10 & 0x48) == 8 )
      {
        sub_14068A5A8(a1, (unsigned int)a3[6], v3);
        v13 = *v3;
        if ( (*v3 & 1) != 0 )
        {
          *a3 |= 2u;
          return v13;
        }
        if ( (v13 & 0xA) != 0 )
        {
          *a3 |= 0x42u;
        }
        else if ( (v13 & 4) != 0 )
        {
          *a3 |= 2u;
          if ( (unsigned __int8)sub_1406E72CC(a1) )
            v23 = v22 | 0x22;
          else
            v23 = v22 | 0x42;
          *a3 = v23;
        }
      }
      v14 = *a3;
      if ( (*a3 & 0x40) == 0 )
        goto LABEL_23;
      LOBYTE(v13) = sub_14020AA74((_QWORD *)(a1 + 4208));
      if ( (_BYTE)v13 )
        return v13;
      if ( (*v3 & 8) != 0 )
      {
        v14 = v17 | 0x504;
      }
      else
      {
        *a3 = v17 | 1;
        if ( (unsigned __int8)sub_1406E72CC(a1) )
        {
          v14 = v18 | 0x21;
        }
        else
        {
          v14 = v18 | 5;
          *a3 = v14;
          if ( (v19 & 4) == 0 )
            goto LABEL_23;
          v14 |= 0x400u;
        }
      }
      *a3 = v14;
LABEL_23:
      if ( (v14 & 0x48) == 8 )
      {
        v15 = v14;
        if ( !*(_DWORD *)(a1 + 128) )
        {
          v15 = v14 | 0x800;
          *a3 = v14 | 0x800;
        }
        v14 = v15;
        if ( (*v3 & 0x14) != 0 )
        {
          v14 = v15 | 0x1000;
          *a3 = v15 | 0x1000;
        }
      }
      v13 = *(_DWORD *)(a1 + 4224);
      if ( (v13 & 1) == 0 )
      {
        if ( *(_QWORD *)(a1 + 1544) )
        {
          LOBYTE(v13) = (a2 & 0x20) == 0;
          if ( (((v14 & 8) == 0) & (unsigned __int8)v13) == 0 )
            *a3 = v14 | 0x202;
        }
      }
      return v13;
    }
  }
  if ( *v8 || *(_BYTE *)(a1 + 195) )
  {
    v20 = v10 | 0x46;
    *a3 = v20;
    if ( *(_BYTE *)(a1 + 194) )
      v20 |= 0x10u;
    v21 = v20 | 0x500;
  }
  else
  {
    LOBYTE(v13) = (a2 & 0x20) != 0;
    if ( (((*(_BYTE *)(a1 + 4224) & 1) == 0) & (unsigned __int8)v13) == 0 )
      return v13;
    v21 = v10 | 0x202;
  }
  *a3 = v21;
  return v13;
}
