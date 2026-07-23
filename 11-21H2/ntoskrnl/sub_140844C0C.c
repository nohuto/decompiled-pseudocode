/*
 * XREFs of sub_140844C0C @ 0x140844C0C
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 * Callees:
 *     sub_1403CC514 @ 0x1403CC514 (sub_1403CC514.c)
 *     sub_1403CC568 @ 0x1403CC568 (sub_1403CC568.c)
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 *     sub_1403D48DC @ 0x1403D48DC (sub_1403D48DC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041AD40 @ 0x14041AD40 (sub_14041AD40.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140844FB8 @ 0x140844FB8 (sub_140844FB8.c)
 */

__int64 __fastcall sub_140844C0C(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int16 v6; // r12
  char v7; // di
  __int64 v8; // rcx
  __int16 v9; // si
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // cx
  char *v19; // rax
  __int64 v20; // rdx
  unsigned __int16 v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h]
  _BYTE v26[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v27; // [rsp+1A0h] [rbp+A0h] BYREF
  char v28; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v29[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v30[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v22[0] = 0;
  v25 = 0LL;
  memset(v30, 0, sizeof(v30));
  memset(v26, 0, sizeof(v26));
  *a2 = 0;
  memset(v29, 0, sizeof(v29));
  sub_1403D48DC(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = -1073741811;
LABEL_55:
    v18 = v22[0];
    goto LABEL_56;
  }
  v6 = *(_WORD *)(a1 + 18);
  v7 = 2;
  v5 = sub_1403CC5E8(a1, 0LL, 2, (__int64)v30, (__int64)v26, (__int64)&v27, v22, (__int64)v29);
  if ( v5 < 0 )
    goto LABEL_55;
  if ( *(_WORD *)(a1 + 16)
    && (v8 = *(unsigned __int16 *)(a1 + 16), v23 = 0, v24 = 0, (int)sub_140844FB8(v8, &v23, &v24) >= 0) )
  {
    v9 = v24 + (((_WORD)v23 + 48) << 8);
  }
  else
  {
    v9 = -256;
  }
  v10 = *(_DWORD *)(a1 + 4);
  if ( v10 <= 0x13C3 )
  {
    if ( v10 < 0x13C2 )
    {
      if ( v10 > 0x1250 )
      {
        if ( v10 < 0x1259 )
        {
LABEL_25:
          v7 = 0;
          goto LABEL_26;
        }
        if ( v10 <= 0x125E || v10 == 4719 || v10 == 4816 || v10 - 4928 <= 5 )
          goto LABEL_51;
        v16 = v10 == 4937;
        goto LABEL_24;
      }
      if ( v10 == 4688 )
        goto LABEL_26;
      v11 = v10 - 4616;
      if ( v11 )
      {
        v12 = v11 - 8;
        if ( !v12 )
          goto LABEL_26;
        v13 = v12 - 30;
        if ( v13 )
        {
          v14 = v13 - 2;
          if ( v14 )
          {
            v15 = v14 - 5;
            if ( v15 )
            {
              v16 = v15 == 2;
LABEL_24:
              if ( !v16 )
                goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_51:
    v7 = 1;
    goto LABEL_26;
  }
  if ( v10 > 0x1501 )
  {
    if ( v10 < 0x154B )
      goto LABEL_25;
    if ( v10 <= 0x154C || v10 == 5632 )
      goto LABEL_51;
    if ( v10 == 5712 )
    {
      v7 = (unsigned int)sub_14041AD40() != 0;
    }
    else
    {
      if ( v10 <= 0x187F )
        goto LABEL_25;
      if ( v10 > 0x1881 )
      {
        if ( v10 > 0x1883 )
          goto LABEL_25;
        goto LABEL_51;
      }
    }
  }
  else
  {
    if ( v10 >= 0x1500 || v10 == 5125 || v10 == 5140 )
      goto LABEL_51;
    if ( v10 <= 0x1419 )
      goto LABEL_25;
    if ( v10 <= 0x141B )
      goto LABEL_51;
    if ( v10 <= 0x141D )
      goto LABEL_25;
    if ( v10 <= 0x1421 || v10 == 5156 )
      goto LABEL_51;
    if ( v10 != 5157 )
      goto LABEL_25;
    v7 = 3;
  }
LABEL_26:
  LOWORD(v25) = *(_WORD *)(a1 + 4);
  v17 = 0x8020000000000000uLL;
  BYTE2(v25) = v7;
  if ( v6 != 8 )
    v17 = 0x8010000000000000uLL;
  *(_WORD *)((char *)&v25 + 3) = 10;
  v18 = v22[0];
  WORD3(v25) = v9;
  BYTE5(v25) = 0;
  *((_QWORD *)&v25 + 1) = v17;
  if ( !v22[0] )
    goto LABEL_53;
  v19 = &v28;
  v20 = v22[0];
  do
  {
    v4 += *(_DWORD *)v19;
    v19 += 16;
    --v20;
  }
  while ( v20 );
  if ( v4 <= 0xDC00 )
  {
LABEL_53:
    v5 = sub_1403CC568();
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_55;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_56:
  sub_1403CC514(v29, &v27, v18);
  return (unsigned int)v5;
}
