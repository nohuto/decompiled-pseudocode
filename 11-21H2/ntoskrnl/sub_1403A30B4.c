/*
 * XREFs of sub_1403A30B4 @ 0x1403A30B4
 * Callers:
 *     sub_1403A2770 @ 0x1403A2770 (sub_1403A2770.c)
 *     sub_1403A2980 @ 0x1403A2980 (sub_1403A2980.c)
 *     sub_1403A2EE0 @ 0x1403A2EE0 (sub_1403A2EE0.c)
 *     sub_1403A2FD0 @ 0x1403A2FD0 (sub_1403A2FD0.c)
 *     sub_1403CC4C0 @ 0x1403CC4C0 (sub_1403CC4C0.c)
 *     sub_1403CCF30 @ 0x1403CCF30 (sub_1403CCF30.c)
 *     sub_1403CFBE0 @ 0x1403CFBE0 (sub_1403CFBE0.c)
 *     sub_1403D0D90 @ 0x1403D0D90 (sub_1403D0D90.c)
 *     sub_1403D0E30 @ 0x1403D0E30 (sub_1403D0E30.c)
 *     sub_1403D88E0 @ 0x1403D88E0 (sub_1403D88E0.c)
 *     sub_140534F20 @ 0x140534F20 (sub_140534F20.c)
 *     sub_140534FB0 @ 0x140534FB0 (sub_140534FB0.c)
 *     sub_140535070 @ 0x140535070 (sub_140535070.c)
 *     sub_140535110 @ 0x140535110 (sub_140535110.c)
 *     sub_140535190 @ 0x140535190 (sub_140535190.c)
 *     sub_1405351F0 @ 0x1405351F0 (sub_1405351F0.c)
 *     sub_140535340 @ 0x140535340 (sub_140535340.c)
 *     sub_1405353C0 @ 0x1405353C0 (sub_1405353C0.c)
 *     sub_140535490 @ 0x140535490 (sub_140535490.c)
 *     sub_1405354E0 @ 0x1405354E0 (sub_1405354E0.c)
 *     sub_1405355B0 @ 0x1405355B0 (sub_1405355B0.c)
 *     sub_1405355F0 @ 0x1405355F0 (sub_1405355F0.c)
 * Callees:
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403A343C @ 0x1403A343C (sub_1403A343C.c)
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     sub_1403D20CC @ 0x1403D20CC (sub_1403D20CC.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 *     sub_140536D58 @ 0x140536D58 (sub_140536D58.c)
 */

__int64 __fastcall sub_1403A30B4(__int64 a1, int *a2)
{
  unsigned int v3; // esi
  unsigned __int8 v5; // al
  unsigned int v6; // ecx
  bool v7; // cc
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int16 v15; // cx
  __int16 v16; // ax
  unsigned __int16 v17; // ax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int16 v20; // ax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  int v41; // esi
  int v42; // esi
  int v43; // esi
  __int16 v44; // cx
  unsigned __int16 v45; // cx
  __int16 v46; // ax
  __int16 v47; // cx
  unsigned __int16 v48; // cx
  __int16 v49; // ax
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  char v53; // al
  __int16 v54; // cx
  char v55; // al
  __int16 v56; // cx
  unsigned int v57; // ecx
  unsigned int v58; // ecx

  v3 = 0;
  v5 = ((__int64 (*)(void))sub_1403A340C)();
  *(_BYTE *)(a1 + 142) = 0;
  *a2 = (v5 >> 3) & 7;
  v6 = v5 & 7 | (8 * (v5 >> 6));
  if ( !*(_BYTE *)(a1 + 137) )
  {
    if ( v6 <= 0xC )
    {
      if ( v6 == 12 )
      {
        v15 = (char)sub_1403A340C(a1);
        v16 = *(_WORD *)(a1 + 48);
LABEL_24:
        v17 = v15 + v16;
        goto LABEL_25;
      }
      if ( v6 == 6 )
      {
        v17 = sub_1403A34E0(a1);
        goto LABEL_25;
      }
      if ( v6 > 6 )
      {
        v21 = v6 - 7;
        if ( !v21 )
        {
          v3 = *(unsigned __int16 *)(a1 + 36);
          goto LABEL_19;
        }
        v50 = v21 - 1;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( v51 )
          {
            v52 = v51 - 1;
            if ( v52 )
            {
              if ( v52 != 1 )
                goto LABEL_19;
              v53 = sub_1403A340C(a1);
              v54 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v53 = sub_1403A340C(a1);
              v54 = *(_WORD *)(a1 + 48);
            }
            v45 = v53 + *(_WORD *)(a1 + 44) + v54;
            goto LABEL_103;
          }
          v55 = sub_1403A340C(a1);
          v56 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v55 = sub_1403A340C(a1);
          v56 = *(_WORD *)(a1 + 48);
        }
        v48 = v55 + *(_WORD *)(a1 + 36) + v56;
      }
      else
      {
        if ( v6 )
        {
          v9 = v6 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  if ( v12 == 1 )
                    v3 = *(unsigned __int16 *)(a1 + 52);
                }
                else
                {
                  v3 = *(unsigned __int16 *)(a1 + 48);
                }
                goto LABEL_19;
              }
              v44 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v44 = *(_WORD *)(a1 + 48);
            }
            v45 = *(_WORD *)(a1 + 44) + v44;
            goto LABEL_103;
          }
          v47 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v47 = *(_WORD *)(a1 + 48);
        }
        v48 = *(_WORD *)(a1 + 36) + v47;
      }
    }
    else
    {
      if ( v6 > 0x13 )
      {
        if ( v6 == 20 )
        {
          v17 = *(_WORD *)(a1 + 48) + sub_1403A34E0(a1);
          goto LABEL_25;
        }
        if ( v6 == 21 )
        {
          v17 = *(_WORD *)(a1 + 52) + sub_1403A34E0(a1);
          goto LABEL_25;
        }
        if ( v6 != 22 )
        {
          v7 = v6 <= 0x17;
          if ( v6 != 23 )
            goto LABEL_8;
          v17 = *(_WORD *)(a1 + 36) + sub_1403A34E0(a1);
LABEL_25:
          v3 = v17;
          goto LABEL_19;
        }
        v20 = *(_WORD *)(a1 + 44) + sub_1403A34E0(a1);
        goto LABEL_32;
      }
      if ( v6 == 19 )
      {
        v46 = *(_WORD *)(a1 + 52) + sub_1403A34E0(a1);
LABEL_102:
        v45 = v46 + *(_WORD *)(a1 + 44);
LABEL_103:
        v3 = v45;
LABEL_33:
        if ( !*(_BYTE *)(a1 + 140) )
          *(_DWORD *)(a1 + 116) = 2;
        goto LABEL_19;
      }
      v18 = v6 - 13;
      if ( !v18 )
      {
        v15 = (char)sub_1403A340C(a1);
        v16 = *(_WORD *)(a1 + 52);
        goto LABEL_24;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v20 = (char)sub_1403A340C(a1) + *(_WORD *)(a1 + 44);
LABEL_32:
        v3 = v20;
        goto LABEL_33;
      }
      v22 = v19 - 1;
      if ( !v22 )
      {
        v15 = (char)sub_1403A340C(a1);
        v16 = *(_WORD *)(a1 + 36);
        goto LABEL_24;
      }
      v57 = v22 - 1;
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          if ( v58 != 1 )
            goto LABEL_19;
          v46 = *(_WORD *)(a1 + 48) + sub_1403A34E0(a1);
          goto LABEL_102;
        }
        v49 = *(_WORD *)(a1 + 52) + sub_1403A34E0(a1);
      }
      else
      {
        v49 = *(_WORD *)(a1 + 48) + sub_1403A34E0(a1);
      }
      v48 = v49 + *(_WORD *)(a1 + 36);
    }
    v3 = v48;
    goto LABEL_19;
  }
  if ( v6 <= 0xC )
  {
    if ( v6 == 12 )
      goto LABEL_97;
    if ( v6 <= 6 )
    {
      if ( v6 == 6 )
      {
        v3 = *(_DWORD *)(a1 + 48);
        goto LABEL_19;
      }
      if ( !v6 )
      {
        v3 = *(_DWORD *)(a1 + 24);
        goto LABEL_19;
      }
      v23 = v6 - 1;
      if ( !v23 )
      {
        v3 = *(_DWORD *)(a1 + 28);
        goto LABEL_19;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        v3 = *(_DWORD *)(a1 + 32);
        goto LABEL_19;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        v3 = *(_DWORD *)(a1 + 36);
        goto LABEL_19;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
          goto LABEL_19;
        v27 = sub_1403D20CC(a1);
        goto LABEL_98;
      }
LABEL_97:
      v27 = sub_140536D58(a1);
LABEL_98:
      v3 = v27;
      goto LABEL_19;
    }
    v28 = v6 - 7;
    if ( !v28 )
    {
      v3 = *(_DWORD *)(a1 + 52);
      goto LABEL_19;
    }
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 1 )
            goto LABEL_19;
          v32 = (char)sub_1403A340C(a1);
          goto LABEL_64;
        }
        v33 = (char)sub_1403A340C(a1);
LABEL_66:
        v3 = *(_DWORD *)(a1 + 32) + v33;
        goto LABEL_19;
      }
      v34 = (char)sub_1403A340C(a1);
      goto LABEL_69;
    }
    v35 = (char)sub_1403A340C(a1);
    goto LABEL_72;
  }
  if ( v6 <= 0x13 )
  {
    if ( v6 == 19 )
    {
      v32 = sub_1403D20CC(a1);
LABEL_64:
      v3 = *(_DWORD *)(a1 + 36) + v32;
      goto LABEL_19;
    }
    v36 = v6 - 13;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              if ( v40 != 1 )
                goto LABEL_19;
              v33 = sub_1403D20CC(a1);
              goto LABEL_66;
            }
            v34 = sub_1403D20CC(a1);
LABEL_69:
            v3 = *(_DWORD *)(a1 + 28) + v34;
            goto LABEL_19;
          }
          v35 = sub_1403D20CC(a1);
LABEL_72:
          v3 = *(_DWORD *)(a1 + 24) + v35;
          goto LABEL_19;
        }
        v41 = (char)sub_1403A340C(a1);
LABEL_85:
        v3 = *(_DWORD *)(a1 + 52) + v41;
        goto LABEL_19;
      }
      v42 = (char)sub_1403A340C(a1);
LABEL_88:
      v3 = *(_DWORD *)(a1 + 48) + v42;
      goto LABEL_19;
    }
    v43 = (char)sub_1403A340C(a1);
LABEL_91:
    v3 = *(_DWORD *)(a1 + 44) + v43;
    goto LABEL_33;
  }
  switch ( v6 )
  {
    case 0x14u:
      goto LABEL_97;
    case 0x15u:
      v43 = sub_1403D20CC(a1);
      goto LABEL_91;
    case 0x16u:
      v42 = sub_1403D20CC(a1);
      goto LABEL_88;
  }
  v7 = v6 <= 0x17;
  if ( v6 == 23 )
  {
    v41 = sub_1403D20CC(a1);
    goto LABEL_85;
  }
LABEL_8:
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 142) = 1;
    return sub_1403A343C(a1, v5 & 7);
  }
LABEL_19:
  if ( *(_BYTE *)(a1 + 143) )
  {
    result = (unsigned __int16)v3;
    if ( *(_DWORD *)(a1 + 120) != 1 )
      result = v3;
    *(_DWORD *)(a1 + 128) = result;
  }
  else
  {
    v13 = *(unsigned int *)(a1 + 116);
    v14 = *(unsigned __int16 *)(a1 + 2 * v13 + 68);
    if ( v3 > v14 || v3 + *(_DWORD *)(a1 + 120) > v14 )
      longjmp((_JBTYPE *)(a1 + 160), 14);
    *(_DWORD *)(a1 + 128) = v3;
    return sub_1403A3520(*(unsigned __int16 *)(a1 + 2 * v13 + 56), (unsigned __int16)v3);
  }
  return result;
}
