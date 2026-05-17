/*
 * XREFs of _input_l @ 0x1800983D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 *     isleadbyte @ 0x180092548 (isleadbyte.c)
 *     __pctype_func @ 0x180095190 (__pctype_func.c)
 *     ReadString @ 0x180098068 (ReadString.c)
 *     ReadStringDelimited @ 0x180098244 (ReadStringDelimited.c)
 *     _inc @ 0x1800983A0 (_inc.c)
 *     _ungetc_nolock @ 0x180098E74 (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  FILE *v4; // r14
  unsigned __int8 *v5; // rsi
  int v6; // edi
  unsigned __int8 v7; // bl
  int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // r12d
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // edi
  int v14; // r15d
  char v15; // r14
  char v16; // r12
  __int64 v17; // rbx
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // al
  char v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rcx
  char v23; // r13
  unsigned int v24; // r14d
  int v25; // edx
  int v26; // r8d
  int v27; // ecx
  char v28; // cl
  FILE *v29; // rbx
  __int64 v30; // rbx
  int v31; // ebx
  const unsigned __int16 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // ecx
  int v36; // ebx
  const unsigned __int16 *v37; // rax
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // ecx
  char v41; // al
  char v42; // dl
  char v43; // cl
  int v44; // eax
  unsigned __int8 *v45; // rbx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  FILE *v49; // rdx
  char v50; // [rsp+48h] [rbp-39h]
  char v51; // [rsp+49h] [rbp-38h]
  char v52; // [rsp+4Ah] [rbp-37h]
  char v53; // [rsp+4Bh] [rbp-36h]
  int v54; // [rsp+4Ch] [rbp-35h] BYREF
  int v55; // [rsp+50h] [rbp-31h] BYREF
  int v56; // [rsp+54h] [rbp-2Dh]
  int v57; // [rsp+58h] [rbp-29h]
  int v58; // [rsp+5Ch] [rbp-25h]
  int Character; // [rsp+60h] [rbp-21h]
  int v60; // [rsp+64h] [rbp-1Dh]
  __int64 v61; // [rsp+68h] [rbp-19h]
  int v62; // [rsp+70h] [rbp-11h]
  int v63; // [rsp+74h] [rbp-Dh]
  __int64 v64; // [rsp+78h] [rbp-9h] BYREF
  __int64 *v65; // [rsp+80h] [rbp-1h]
  char SrcCh[8]; // [rsp+88h] [rbp+7h] BYREF
  unsigned int v67; // [rsp+90h] [rbp+Fh]
  __int64 v68; // [rsp+98h] [rbp+17h]
  unsigned __int8 *v70; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v71; // [rsp+100h] [rbp+7Fh]

  v71 = a4;
  v4 = Stream;
  v5 = a2;
  Character = 0;
  v6 = 0;
  v55 = 0;
  v68 = 0LL;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  v52 = 0;
  result = 0LL;
  v56 = 0;
  v54 = 0;
  LODWORD(v64) = 0;
  if ( !v7 )
    return result;
  v10 = -1;
  while ( 2 )
  {
    *(_QWORD *)SrcCh = a4;
    if ( (_pctype_func()[v7] & 8) != 0 )
    {
      --v8;
      while ( 1 )
      {
        v56 = ++v8;
        v54 = v8;
        v11 = inc(v4);
        if ( v11 == -1 )
          break;
        if ( (_pctype_func()[(unsigned __int8)v11] & 8) == 0 )
        {
          ungetc_nolock(v11, v4);
          goto LABEL_10;
        }
      }
      do
LABEL_10:
        v12 = *++v5;
      while ( (_pctype_func()[v12] & 8) != 0 );
      goto LABEL_191;
    }
    if ( *v5 != 37 )
      goto LABEL_185;
    if ( v5[1] == 37 )
    {
      ++v5;
LABEL_185:
      v56 = ++v8;
      v54 = v8;
      v6 = inc(v4);
      Character = v6;
      v55 = v6;
      v46 = *v5++;
      v45 = v5;
      if ( v46 == v6 )
      {
        if ( !isleadbyte((unsigned __int8)v6) )
          goto LABEL_188;
        v47 = inc(v4);
        v48 = *v5++;
        v45 = v5;
        if ( v48 == v47 )
          goto LABEL_188;
        if ( v47 != -1 )
          ungetc_nolock(v47, v4);
      }
      if ( v6 == -1 )
        goto LABEL_205;
      v49 = v4;
      goto LABEL_201;
    }
    v51 = 1;
    v57 = 0;
    v13 = 0;
    v63 = 0;
    v14 = 0;
    v53 = 0;
    v15 = 0;
    v50 = 0;
    v16 = 0;
    v58 = 0;
    do
    {
      v70 = ++v5;
      v17 = *v5;
      v18 = (unsigned __int8 *)_pctype_func();
      if ( (v18[2 * v17] & 4) != 0 )
      {
        ++v13;
        v14 = v17 + 2 * (5 * v14 - 24);
        goto LABEL_30;
      }
      if ( (unsigned __int8)v17 > 0x68u )
      {
        switch ( (_BYTE)v17 )
        {
          case 'j':
            goto LABEL_29;
          case 'l':
            v18 = v5 + 1;
            if ( v5[1] == 108 )
            {
LABEL_28:
              v5 = v18;
              v70 = v18;
              goto LABEL_29;
            }
            ++v51;
            break;
          case 't':
            goto LABEL_44;
          case 'w':
            break;
          case 'z':
            goto LABEL_44;
          default:
LABEL_47:
            ++v15;
            goto LABEL_30;
        }
        ++v16;
        goto LABEL_30;
      }
      if ( (_BYTE)v17 == 104 )
      {
        --v51;
        --v16;
        goto LABEL_30;
      }
      if ( (_BYTE)v17 != 42 )
      {
        if ( (_BYTE)v17 == 70 )
          goto LABEL_30;
        if ( (_BYTE)v17 != 73 )
        {
          if ( (_BYTE)v17 == 76 )
          {
            ++v51;
          }
          else if ( (_BYTE)v17 != 78 )
          {
            goto LABEL_47;
          }
LABEL_30:
          v20 = v50;
          continue;
        }
        v19 = v5[1];
        if ( v19 == 54 )
        {
          v18 = v5 + 2;
          if ( v5[2] == 52 )
            goto LABEL_28;
        }
        else if ( v19 == 51 )
        {
          v18 = v5 + 2;
          if ( v5[2] == 50 )
          {
            v5 += 2;
            v70 = v18;
            goto LABEL_30;
          }
        }
LABEL_44:
        LOBYTE(v18) = v5[1] - 88;
        if ( (unsigned __int8)v18 > 0x20u || (v22 = 0x120821001LL, !_bittest64(&v22, (unsigned __int64)v18)) )
        {
          ++v58;
          v61 = 0LL;
          goto LABEL_47;
        }
LABEL_29:
        ++v58;
        v61 = 0LL;
        goto LABEL_30;
      }
      v20 = ++v50;
    }
    while ( !v15 );
    v62 = v13;
    v6 = Character;
    v60 = v14;
    v8 = v56;
    if ( v20 )
    {
      v21 = 0LL;
    }
    else
    {
      v68 = v71;
      v71 += 8LL;
      v21 = **(__int64 ***)SrcCh;
    }
    v23 = 0;
    v65 = v21;
    *(_QWORD *)SrcCh = v21;
    if ( !v16 )
      v16 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
    v24 = *v5 | 0x20;
    v67 = v24;
    if ( v24 != 110 )
    {
      if ( v24 == 99 || v24 == 123 )
      {
        v8 = v56 + 1;
        v56 = v8;
        v54 = v8;
        v6 = inc(Stream);
        Character = v6;
        v55 = v6;
      }
      else
      {
        do
        {
          v54 = ++v8;
          v6 = inc(Stream);
          Character = v6;
        }
        while ( v6 != -1 && (_pctype_func()[(unsigned __int8)v6] & 8) != 0 );
        v24 = v67;
        v56 = v8;
        v55 = v6;
      }
      if ( v6 != -1 )
      {
        v20 = v50;
        goto LABEL_63;
      }
      v10 = -1;
LABEL_205:
      if ( (_DWORD)v64 || v52 )
        return (unsigned int)v64;
      return v10;
    }
LABEL_63:
    v25 = v62;
    v26 = v60;
    if ( v62 && !v60 )
    {
      v10 = -1;
      goto LABEL_194;
    }
    if ( v24 > 0x70 )
    {
      switch ( v24 )
      {
        case 's':
          v28 = 32;
          break;
        case 'u':
          goto LABEL_72;
        case 'x':
          goto LABEL_77;
        case '{':
          v28 = 64;
          break;
        default:
          goto LABEL_86;
      }
LABEL_171:
      v41 = v28 | 1;
      if ( !v25 )
        v41 = v28;
      v42 = v41 | 2;
      if ( v16 <= 0 )
        v42 = v41;
      v43 = v42 | 4;
      if ( !v20 )
        v43 = v42;
      if ( v24 == 123 )
      {
        v44 = ReadStringDelimited(v43, &v70, &v55, &v54, SrcCh, v26, Stream, &v64);
        v5 = v70;
      }
      else
      {
        v44 = ReadString(v43, 0LL, &v55, &v54, SrcCh, v26, Stream, &v64);
      }
      v6 = v55;
      if ( v44 )
      {
        v10 = -1;
        break;
      }
      v8 = v54;
      v56 = v54;
      Character = v55;
      goto LABEL_182;
    }
    switch ( v24 )
    {
      case 'p':
        ++v58;
        v61 = 0LL;
        v51 = 1;
LABEL_72:
        if ( v6 == 45 )
        {
          v53 = 1;
        }
        else if ( v6 != 43 )
        {
          goto LABEL_115;
        }
        --v60;
        if ( v26 == 1 && v62 )
        {
          v23 = 1;
        }
        else
        {
          v56 = ++v8;
          v54 = v8;
          v6 = inc(Stream);
          Character = v6;
          v55 = v6;
        }
        goto LABEL_115;
      case 'c':
        v28 = 16;
        if ( !v62 )
        {
          v25 = 1;
          v26 = v60 + 1;
        }
        goto LABEL_171;
      case 'd':
        goto LABEL_72;
    }
    if ( v24 != 105 )
    {
      if ( v24 != 110 )
      {
        if ( v24 == 111 )
          goto LABEL_72;
LABEL_86:
        v10 = -1;
        if ( *v5 == v6 )
        {
          --v52;
          if ( !v20 )
            v71 = v68;
          goto LABEL_183;
        }
LABEL_194:
        if ( v6 == -1 )
          goto LABEL_205;
        v49 = Stream;
LABEL_201:
        ungetc_nolock(v6, v49);
        break;
      }
      v27 = v8;
      if ( !v20 )
        goto LABEL_165;
LABEL_182:
      v10 = -1;
      goto LABEL_183;
    }
    v24 = 100;
LABEL_77:
    if ( v6 == 45 )
    {
      v53 = 1;
LABEL_91:
      --v60;
      if ( v26 == 1 && v62 )
      {
        v23 = 1;
        goto LABEL_94;
      }
      v29 = Stream;
      v56 = ++v8;
      v54 = v8;
      v6 = inc(Stream);
      Character = v6;
      v55 = v6;
    }
    else
    {
      if ( v6 == 43 )
        goto LABEL_91;
LABEL_94:
      v29 = Stream;
    }
    if ( v6 != 48 )
      goto LABEL_115;
    v56 = ++v8;
    v54 = v8;
    v6 = inc(v29);
    Character = v6;
    v55 = v6;
    if ( (((_BYTE)v6 - 88) & 0xDF) == 0 )
    {
      v56 = ++v8;
      v54 = v8;
      v6 = inc(v29);
      Character = v6;
      v55 = v6;
      if ( v62 )
      {
        v60 -= 2;
        if ( v60 < 1 )
          ++v23;
      }
      v24 = 120;
LABEL_115:
      v10 = -1;
      goto LABEL_116;
    }
    v63 = 1;
    if ( v24 != 120 )
    {
      if ( v62 )
      {
        if ( !--v60 )
          ++v23;
      }
      v24 = 111;
      goto LABEL_115;
    }
    --v8;
    v10 = -1;
    v56 = v8;
    v54 = v8;
    if ( v6 != -1 )
      ungetc_nolock(v6, v29);
    v6 = 48;
    Character = 48;
    v55 = 48;
LABEL_116:
    if ( !v58 )
    {
      if ( v23 )
      {
LABEL_159:
        v40 = v57;
LABEL_160:
        if ( v53 )
          v57 = -v40;
        goto LABEL_162;
      }
      while ( 1 )
      {
        if ( ((v24 - 112) & 0xFFFFFFF7) != 0 )
        {
          if ( (_pctype_func()[(unsigned __int8)v6] & 4) == 0 )
            goto LABEL_157;
          v35 = v57;
          if ( v24 == 111 )
          {
            if ( v6 >= 56 )
            {
              v23 = 1;
              goto LABEL_153;
            }
            v35 = 8 * v57;
          }
          else
          {
            v35 = 10 * v57;
          }
          v57 = v35;
        }
        else
        {
          if ( SLOBYTE(_pctype_func()[(unsigned __int8)v6]) >= 0 )
            goto LABEL_157;
          v57 *= 16;
          v36 = (char)v6;
          v37 = _pctype_func();
          v38 = (unsigned __int8)v6;
          v6 = ((char)v6 & 0xFFFFFFDF) - 7;
          v39 = (v37[v38] & 4) == 0;
          v35 = v57;
          if ( !v39 )
            v6 = v36;
          Character = v6;
          v55 = v6;
        }
LABEL_153:
        if ( v23 )
        {
LABEL_157:
          v56 = --v8;
          v54 = v8;
          if ( v6 != -1 )
            ungetc_nolock(v6, Stream);
          goto LABEL_159;
        }
        ++v63;
        v40 = v6 + v35 - 48;
        v57 = v40;
        if ( v62 )
        {
          if ( !--v60 )
            goto LABEL_160;
        }
        v56 = ++v8;
        v54 = v8;
        v6 = inc(Stream);
        Character = v6;
        v55 = v6;
      }
    }
    if ( v23 )
      goto LABEL_137;
    v30 = v61;
    while ( 2 )
    {
      if ( ((v24 - 112) & 0xFFFFFFF7) != 0 )
      {
        if ( (_pctype_func()[(unsigned __int8)v6] & 4) == 0 )
          break;
        if ( v24 == 111 )
        {
          if ( v6 < 56 )
          {
            v30 *= 8LL;
            goto LABEL_126;
          }
          v23 = 1;
        }
        else
        {
          v30 *= 10LL;
LABEL_126:
          v61 = v30;
        }
      }
      else
      {
        if ( SLOBYTE(_pctype_func()[(unsigned __int8)v6]) >= 0 )
          break;
        v61 = 16 * v30;
        v31 = (char)v6;
        v32 = _pctype_func();
        v33 = (unsigned __int8)v6;
        v6 = ((char)v6 & 0xFFFFFFDF) - 7;
        if ( (v32[v33] & 4) != 0 )
          v6 = v31;
        v30 = v61;
        Character = v6;
        v55 = v6;
      }
      if ( !v23 )
      {
        ++v63;
        v30 += v6 - 48;
        v61 = v30;
        if ( v62 )
        {
          if ( !--v60 )
            goto LABEL_137;
        }
        v56 = ++v8;
        v54 = v8;
        v6 = inc(Stream);
        Character = v6;
        v55 = v6;
        continue;
      }
      break;
    }
    v56 = --v8;
    v54 = v8;
    if ( v6 != -1 )
      ungetc_nolock(v6, Stream);
LABEL_137:
    v34 = -v61;
    if ( !v53 )
      v34 = v61;
    v61 = v34;
LABEL_162:
    if ( v63 )
    {
      if ( !v50 )
      {
        LODWORD(v64) = v64 + 1;
        v27 = v57;
LABEL_165:
        if ( v58 )
        {
          *v65 = v61;
          goto LABEL_182;
        }
        v10 = -1;
        if ( v51 )
          *(_DWORD *)v65 = v27;
        else
          *(_WORD *)v65 = v27;
      }
LABEL_183:
      ++v52;
      v4 = Stream;
      v45 = ++v5;
LABEL_188:
      if ( v6 == -1 && (*v5 != 37 || v45[1] != 110) )
        goto LABEL_205;
LABEL_191:
      v7 = *v5;
      if ( *v5 )
      {
        a4 = v71;
        continue;
      }
    }
    break;
  }
  if ( v6 == -1 )
    goto LABEL_205;
  return (unsigned int)v64;
}
