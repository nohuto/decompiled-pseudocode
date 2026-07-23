/*
 * XREFs of sub_1409BDBFC @ 0x1409BDBFC
 * Callers:
 *     sub_1409BCCCC @ 0x1409BCCCC (sub_1409BCCCC.c)
 *     sub_1409BDA38 @ 0x1409BDA38 (sub_1409BDA38.c)
 * Callees:
 *     sub_1405ECFE0 @ 0x1405ECFE0 (sub_1405ECFE0.c)
 *     sub_1405ED010 @ 0x1405ED010 (sub_1405ED010.c)
 *     sub_1405ED044 @ 0x1405ED044 (sub_1405ED044.c)
 *     sub_1405ED07C @ 0x1405ED07C (sub_1405ED07C.c)
 *     sub_1405ED158 @ 0x1405ED158 (sub_1405ED158.c)
 *     sub_1405ED1F8 @ 0x1405ED1F8 (sub_1405ED1F8.c)
 *     sub_1405ED288 @ 0x1405ED288 (sub_1405ED288.c)
 *     sub_1405ED354 @ 0x1405ED354 (sub_1405ED354.c)
 *     sub_1405ED3E0 @ 0x1405ED3E0 (sub_1405ED3E0.c)
 *     sub_1405ED40C @ 0x1405ED40C (sub_1405ED40C.c)
 *     sub_1405ED45C @ 0x1405ED45C (sub_1405ED45C.c)
 *     sub_1405ED5A4 @ 0x1405ED5A4 (sub_1405ED5A4.c)
 *     sub_1405ED624 @ 0x1405ED624 (sub_1405ED624.c)
 *     sub_1405ED69C @ 0x1405ED69C (sub_1405ED69C.c)
 *     sub_1409BCCCC @ 0x1409BCCCC (sub_1409BCCCC.c)
 *     sub_1409BCDDC @ 0x1409BCDDC (sub_1409BCDDC.c)
 */

__int64 __fastcall sub_1409BDBFC(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  int v8; // edx
  char v9; // r14
  unsigned __int8 v10; // bp
  int v11; // eax
  int v12; // r9d
  char v13; // al
  unsigned __int16 *v14; // rax
  int v15; // ecx
  unsigned __int8 v16; // r15
  char v17; // dl
  unsigned __int8 v18; // r15
  int v19; // eax
  char v20; // dl
  bool v21; // zf
  __int16 *v22; // r8
  __int64 v23; // rcx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char v29; // r8
  __int64 v31; // r10
  char v32; // r9
  __int64 v33; // rax
  int v34; // eax
  char v35; // di
  char v36; // r8
  char v37; // di
  char v38; // al
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  char v43; // al
  unsigned __int16 *v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // esi
  unsigned __int16 v48; // di
  __int64 v49; // rcx
  unsigned __int16 v50; // si
  int v51; // eax
  unsigned int v52; // r9d
  int v53; // eax
  int v54; // r9d
  unsigned __int16 *v55; // r8
  int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // r8
  unsigned __int16 *v59; // r9
  unsigned __int16 *v60; // r10
  __int64 v61; // r10

  v5 = a3;
  if ( !a3 )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_125;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_125:
          v43 = sub_1405ED07C(a4, a2);
          goto LABEL_96;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return sub_1409BCCCC(a1, a2, a4);
      }
      if ( v5 != 254 )
        break;
      v14 = *(unsigned __int16 **)(a4 + 16);
      if ( v14 == *(unsigned __int16 **)(a4 + 8) )
        return 3221227287LL;
      v15 = *v14;
      *(_QWORD *)(a4 + 16) = v14 + 1;
      if ( (unsigned __int16)(v15 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = v15 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_30:
      if ( !v5 )
        goto LABEL_26;
    }
    if ( v5 != 255 )
      break;
    if ( a2 < 44032 )
    {
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v55 = *(unsigned __int16 **)(a4 + 16);
        if ( v55 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v56 = *v55;
        *(_QWORD *)(a4 + 16) = v55 + 1;
        v57 = sub_1405ECFE0(a2, v56);
        if ( !v57 )
        {
          *(_QWORD *)(a4 + 16) = v58;
          goto LABEL_26;
        }
        a2 = v57;
        if ( v60 == v59 )
          goto LABEL_26;
        v45 = *v60;
        *(_QWORD *)(a4 + 16) = v60 + 1;
        v46 = v57;
LABEL_119:
        v53 = sub_1405ED010(v46, v45);
        if ( !v53 )
        {
          *(_QWORD *)(a4 + 16) = v61;
          goto LABEL_26;
        }
LABEL_114:
        a2 = v53;
        goto LABEL_26;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)sub_1405ED1F8(a4) - 4352 > 0x12 )
          goto LABEL_26;
        sub_1405ED69C(a4);
        v53 = sub_1405ECFE0(v54, a2);
        goto LABEL_114;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        v51 = sub_1405ED1F8(a4);
        if ( sub_1405ED044(v51) )
        {
          sub_1405ED69C(a4);
          v53 = sub_1405ED010(v52, (unsigned int)a2);
          goto LABEL_114;
        }
LABEL_26:
        v13 = sub_1405ED07C(a4, a2);
LABEL_64:
        if ( v13 )
          return 0LL;
        return 3221225507LL;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
    }
    else
    {
      if ( a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( !sub_1405ED044(a2) )
            goto LABEL_26;
          v44 = *(unsigned __int16 **)(a4 + 16);
          if ( v44 == *(unsigned __int16 **)(a4 + 8) )
            goto LABEL_26;
          v45 = *v44;
          *(_QWORD *)(a4 + 16) = v44 + 1;
          v46 = (unsigned int)a2;
          goto LABEL_119;
        }
        v47 = a2 - 44032;
        if ( !sub_1405ED158(a4, (unsigned __int16)((a2 - 44032) / 588 + 4352), 0, 0) )
          return 3221225507LL;
        v48 = (a2 - 44032) % 588 / 28 + 4449;
        if ( !sub_1405ED158(a4, v48, 0, 0) )
          return 3221225507LL;
        v50 = (unsigned __int16)(v47 % 28) != 0 ? v47 % 28 + 4519 : 0;
        if ( v50 )
        {
          if ( !sub_1405ED158(v49, v50, 0, 0) )
            return 3221225507LL;
          v48 = v50;
        }
        *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
        *(_DWORD *)(a4 + 88) = v48;
LABEL_98:
        *(_WORD *)(a4 + 92) = 0;
        return 0LL;
      }
      if ( (unsigned int)(a2 - 55216) <= 0x16 || (unsigned int)(a2 - 55243) <= 0x30 )
        goto LABEL_26;
    }
    v5 = -5;
  }
  v8 = *(unsigned __int8 *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !(_BYTE)v8 )
    goto LABEL_95;
  v9 = v8 & 0xC0;
  v10 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v10 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      if ( sub_1405ED158(a4, a2, v8 & 0x3F, v8 & 0xC0) )
      {
        *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
        *(_DWORD *)(a4 + 88) = a2;
        *(_BYTE *)(a4 + 92) = v10;
        *(_BYTE *)(a4 + 93) = v9;
        return 0LL;
      }
      return 3221225507LL;
    }
    sub_1405ED1F8(a4);
    v16 = *(_BYTE *)(a4 + 72);
    if ( !v16 || v16 == 63 || (v17 = *(_BYTE *)(a4 + 73), (v17 & 0xBF) == 0) )
    {
      v17 = *(_BYTE *)(a4 + 73);
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
      *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
      *(_BYTE *)(a4 + 92) = v16;
      *(_BYTE *)(a4 + 93) = v17;
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    if ( v9 == (char)0x80 || (((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & 0xBF) == 0 )
    {
      sub_1405ED354((_QWORD *)a4, v10);
      goto LABEL_55;
    }
    if ( !v16 || v16 == 63 )
    {
      if ( (unsigned int)sub_1409BCDDC(a1, *(_DWORD *)(a4 + 88), a2) )
      {
        sub_1405ED69C(a4);
        a2 = v40;
        v41 = *(_QWORD *)(a1 + 40);
        v42 = (v40 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v40 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v9 = *(_BYTE *)(v42 + v41 - 128) & 0xC0;
        v10 = *(_BYTE *)(v42 + v41 - 128) & 0x3F;
      }
LABEL_73:
      v24 = a2;
      v23 = a4;
      goto LABEL_56;
    }
    if ( v17 )
    {
      if ( v17 != 64 )
      {
        if ( sub_1405ED354((_QWORD *)a4, v10) )
          goto LABEL_55;
        v18 = *(_BYTE *)(a4 + 92);
        if ( !v18 || v18 == 63 || *(_BYTE *)(a4 + 93) == 64 )
        {
          v19 = sub_1409BCDDC(a1, *(_DWORD *)(a4 + 88), a2);
          if ( v19 )
          {
            v20 = *(_BYTE *)((v19 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v19 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(*(_QWORD *)(a4 + 80) - 2LL) = v19;
            *(_DWORD *)(a4 + 88) = v19;
            *(_BYTE *)(a4 + 93) = v20 & 0xC0;
            v21 = (v20 & 0xC0) == 64;
            *(_BYTE *)(a4 + 92) = v20 & 0x3F;
            goto LABEL_83;
          }
          if ( !v18 || v18 == 63 )
            goto LABEL_55;
        }
        if ( v18 <= v10 )
          goto LABEL_55;
        if ( v18 == *(_BYTE *)(a1 + 116) )
        {
          if ( v10 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v10 != *(_BYTE *)(a1 + 115) )
              goto LABEL_55;
LABEL_59:
            v25 = sub_1405ED40C(a4);
            v26 = sub_1409BCDDC(a1, v25, a2);
            if ( v26 )
            {
LABEL_77:
              v35 = *(_BYTE *)((v26 & 0x7F)
                             + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v26 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                             + *(_QWORD *)(a1 + 40)
                             - 128);
              v36 = v35 & 0x3F;
              v37 = v35 & 0xC0;
              v38 = sub_1405ED624(a4, v26, v36, v37);
LABEL_81:
              if ( !v38 )
                return 3221225507LL;
              v21 = v37 == 64;
LABEL_83:
              if ( v21 )
                sub_1405ED45C(a4);
              return 0LL;
            }
LABEL_55:
            v22 = *(__int16 **)(a4 + 104);
            v23 = a4;
            v24 = a2;
            if ( v22 != *(__int16 **)(a4 + 40) )
            {
              v13 = sub_1405ED288((_QWORD *)a4, a2, v22);
              goto LABEL_64;
            }
LABEL_56:
            v13 = sub_1405ED158(v23, v24, v10, v9);
            goto LABEL_64;
          }
        }
        else if ( v18 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
        {
          goto LABEL_59;
        }
        v27 = sub_1405ED3E0(a4);
        v28 = sub_1409BCDDC(a1, v27, a2);
        if ( !v28 )
          goto LABEL_55;
        v29 = *(_BYTE *)(*(_QWORD *)(a1 + 40)
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v28 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + (v28 & 0x7F)
                       - 128);
LABEL_80:
        v37 = v29 & 0xC0;
        v38 = sub_1405ED5A4(a4, v28, v29 & 0x3F, v29 & 0xC0);
        goto LABEL_81;
      }
      if ( (unsigned int)sub_1409BCDDC(a1, *(_DWORD *)(a4 + 88), a2) )
      {
        sub_1405ED69C(a4);
        v32 = *(_BYTE *)((v31 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)((v31 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128);
        if ( sub_1405ED158(a4, v31, v32 & 0x3F, v32 & 0xC0) )
        {
          v33 = *(_QWORD *)(a4 + 64);
          *(_QWORD *)(a4 + 96) = 0LL;
          *(_QWORD *)(a4 + 80) = v33 + 2;
          *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
          *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
          *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
          return 0LL;
        }
        return 3221225507LL;
      }
    }
    if ( v16 <= v10 )
      goto LABEL_73;
    if ( v16 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_73;
LABEL_76:
        v34 = sub_1405ED40C(a4);
        v26 = sub_1409BCDDC(a1, v34, a2);
        if ( !v26 )
          goto LABEL_73;
        goto LABEL_77;
      }
    }
    else if ( v16 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_76;
    }
    v39 = sub_1405ED3E0(a4);
    v28 = sub_1409BCDDC(a1, v39, a2);
    if ( !v28 )
      goto LABEL_73;
    v29 = *(_BYTE *)((v28 & 0x7F)
                   + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v28 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                   + *(_QWORD *)(a1 + 40)
                   - 128);
    goto LABEL_80;
  }
  switch ( v8 )
  {
    case 127:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_95:
      v43 = sub_1405ED158(a4, a2, 0, 0);
LABEL_96:
      if ( !v43 )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      goto LABEL_98;
    case 191:
      return sub_1409BCCCC(a1, a2, a4);
    case 192:
      v11 = sub_1405ED1F8(a4);
      if ( !(unsigned int)sub_1409BCDDC(a1, v11, a2) )
        goto LABEL_73;
      sub_1405ED69C(a4);
      a2 = v12;
      goto LABEL_30;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(a4 + 16) == *(_QWORD *)(a4 + 8) )
    goto LABEL_73;
  return 3221227287LL;
}
