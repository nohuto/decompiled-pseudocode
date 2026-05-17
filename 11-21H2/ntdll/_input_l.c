/*
 * XREFs of _input_l @ 0x18009D2A0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     isleadbyte @ 0x180097548 (isleadbyte.c)
 *     __pctype_func @ 0x18009A0B0 (__pctype_func.c)
 *     ReadString @ 0x18009CF54 (ReadString.c)
 *     ReadStringDelimited @ 0x18009D11C (ReadStringDelimited.c)
 *     _inc @ 0x18009D270 (_inc.c)
 *     _ungetc_nolock @ 0x18009DD34 (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int8 *v5; // rsi
  FILE *v6; // r14
  unsigned __int8 v7; // bl
  int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // r12d
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // edi
  int v14; // r15d
  char v15; // r14
  char v16; // r13
  __int64 v17; // rbx
  unsigned __int8 *v18; // rax
  char v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rcx
  char v22; // bl
  unsigned int v23; // r14d
  int v24; // edx
  int v25; // r8d
  int v26; // ecx
  char v27; // cl
  FILE *v28; // r13
  FILE *v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rbx
  int v32; // ebx
  const unsigned __int16 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ecx
  int v37; // ebx
  const unsigned __int16 *v38; // rax
  __int64 v39; // rcx
  char v40; // dl
  int v41; // ecx
  char v42; // al
  char v43; // dl
  char v44; // cl
  int v45; // eax
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
  int Character; // [rsp+5Ch] [rbp-25h]
  int v59; // [rsp+60h] [rbp-21h]
  int v60; // [rsp+64h] [rbp-1Dh]
  int v61; // [rsp+68h] [rbp-19h]
  int v62; // [rsp+6Ch] [rbp-15h]
  __int64 v63; // [rsp+70h] [rbp-11h] BYREF
  __int64 v64; // [rsp+78h] [rbp-9h]
  __int64 *v65; // [rsp+80h] [rbp-1h]
  unsigned int v66; // [rsp+88h] [rbp+7h]
  __int64 v67; // [rsp+90h] [rbp+Fh]
  char SrcCh[8]; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int8 *v70; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v71; // [rsp+100h] [rbp+7Fh]

  v71 = a4;
  v4 = 0;
  v5 = a2;
  v67 = 0LL;
  v6 = Stream;
  Character = 0;
  v55 = 0;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  result = 0LL;
  v52 = 0;
  v56 = 0;
  v54 = 0;
  LODWORD(v63) = 0;
  if ( !v7 )
    return result;
  v10 = -1;
  while ( 2 )
  {
    if ( (_pctype_func()[v7] & 8) != 0 )
    {
      --v8;
      while ( 1 )
      {
        v56 = ++v8;
        v54 = v8;
        v11 = inc(v6);
        if ( v11 == -1 )
          break;
        if ( (_pctype_func()[(unsigned __int8)v11] & 8) == 0 )
        {
          ungetc_nolock(v11, v6);
          goto LABEL_10;
        }
      }
      do
LABEL_10:
        v12 = *++v5;
      while ( (_pctype_func()[v12] & 8) != 0 );
      goto LABEL_185;
    }
    if ( *v5 != 37 )
      goto LABEL_179;
    if ( v5[1] == 37 )
    {
      ++v5;
LABEL_179:
      v56 = ++v8;
      v54 = v8;
      v4 = inc(v6);
      Character = v4;
      v55 = v4;
      v46 = *v5++;
      if ( v46 == v4 )
      {
        if ( !isleadbyte((unsigned __int8)v4) )
          goto LABEL_182;
        v47 = inc(v6);
        v48 = *v5++;
        if ( v48 == v47 )
          goto LABEL_182;
        if ( v47 != -1 )
          ungetc_nolock(v47, v6);
      }
      if ( v4 == -1 )
        goto LABEL_195;
      v49 = v6;
      goto LABEL_193;
    }
    v60 = 0;
    v13 = 0;
    v62 = 0;
    v14 = 0;
    v53 = 0;
    v15 = 0;
    v50 = 0;
    v16 = 0;
    v51 = 1;
    v57 = 0;
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
            if ( v5[1] == 108 )
            {
              v70 = ++v5;
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
            goto LABEL_47;
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
          v19 = v50;
          continue;
        }
        if ( v5[1] == 54 )
        {
          v18 = v5 + 2;
          if ( v5[2] == 52 )
          {
            v5 += 2;
            v70 = v18;
LABEL_29:
            ++v57;
            v64 = 0LL;
            goto LABEL_30;
          }
        }
        if ( v5[1] == 51 )
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
        if ( (unsigned __int8)v18 <= 0x20u )
        {
          v21 = 0x120821001LL;
          if ( _bittest64(&v21, (unsigned __int64)v18) )
            goto LABEL_29;
        }
        ++v57;
        v64 = 0LL;
LABEL_47:
        ++v15;
        goto LABEL_30;
      }
      v19 = ++v50;
    }
    while ( !v15 );
    v61 = v13;
    v4 = Character;
    v59 = v14;
    v8 = v56;
    if ( v19 )
    {
      v20 = 0LL;
    }
    else
    {
      v67 = v71;
      v71 += 8LL;
      v20 = *(__int64 **)(v71 - 8);
    }
    v22 = 0;
    v65 = v20;
    *(_QWORD *)SrcCh = v20;
    if ( !v16 )
      v16 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
    v23 = *v5 | 0x20;
    v66 = v23;
    if ( v23 != 110 )
    {
      if ( v23 == 99 || v23 == 123 )
      {
        v8 = v56 + 1;
        v56 = v8;
        v54 = v8;
        v4 = inc(Stream);
        Character = v4;
        v55 = v4;
      }
      else
      {
        do
        {
          v54 = ++v8;
          v4 = inc(Stream);
          Character = v4;
        }
        while ( v4 != -1 && (_pctype_func()[(unsigned __int8)v4] & 8) != 0 );
        v23 = v66;
        v56 = v8;
        v55 = v4;
      }
      if ( v4 == -1 )
        goto LABEL_195;
      v19 = v50;
    }
    v24 = v61;
    v25 = v59;
    if ( v61 && !v59 )
      goto LABEL_187;
    if ( v23 > 0x70 )
    {
      if ( v23 == 115 )
      {
        v27 = 32;
        goto LABEL_166;
      }
      if ( v23 != 117 )
      {
        if ( v23 == 120 )
          goto LABEL_78;
        if ( v23 != 123 )
          goto LABEL_87;
        v27 = 64;
        goto LABEL_166;
      }
    }
    else
    {
      if ( v23 != 112 )
      {
        if ( v23 != 99 )
        {
          if ( v23 == 100 )
            break;
          if ( v23 != 105 )
          {
            if ( v23 != 110 )
            {
              if ( v23 == 111 )
                break;
LABEL_87:
              if ( *v5 == v4 )
              {
                --v52;
                if ( !v19 )
                  v71 = v67;
                goto LABEL_177;
              }
LABEL_187:
              if ( v4 == -1 )
                goto LABEL_195;
              v49 = Stream;
LABEL_193:
              ungetc_nolock(v4, v49);
              goto LABEL_194;
            }
            v26 = v8;
            if ( !v19 )
            {
LABEL_160:
              if ( v57 )
              {
                *v65 = v64;
              }
              else if ( v51 )
              {
                *(_DWORD *)v65 = v26;
              }
              else
              {
                *(_WORD *)v65 = v26;
              }
            }
LABEL_177:
            ++v52;
            v6 = Stream;
            ++v5;
LABEL_182:
            if ( v4 == -1 && (*v5 != 37 || v5[1] != 110) )
              goto LABEL_195;
LABEL_185:
            v7 = *v5;
            if ( !*v5 )
              goto LABEL_194;
            continue;
          }
          v23 = 100;
LABEL_78:
          switch ( v4 )
          {
            case '-':
              v53 = 1;
LABEL_92:
              --v59;
              if ( v25 == 1 && v61 )
              {
                v22 = 1;
                goto LABEL_95;
              }
              v28 = Stream;
              v56 = ++v8;
              v54 = v8;
              v4 = inc(Stream);
              Character = v4;
              v55 = v4;
              break;
            case '+':
              goto LABEL_92;
            case '0':
              v56 = ++v8;
              v54 = v8;
              v4 = inc(v28);
              Character = v4;
              v55 = v4;
              if ( (((_BYTE)v4 - 88) & 0xDF) != 0 )
              {
                v62 = 1;
                if ( v23 == 120 )
                {
                  v56 = --v8;
                  v54 = v8;
                  if ( v4 != -1 )
                    ungetc_nolock(v4, v28);
                  v4 = 48;
                  Character = 48;
                  v55 = 48;
                }
                else
                {
                  if ( v61 )
                  {
                    if ( !--v59 )
                      ++v22;
                  }
                  v23 = 111;
                }
              }
              else
              {
                v56 = ++v8;
                v54 = v8;
                v4 = inc(v28);
                Character = v4;
                v55 = v4;
                if ( v61 )
                {
                  v59 -= 2;
                  if ( v59 < 1 )
                    ++v22;
                }
                v23 = 120;
              }
              break;
            default:
LABEL_95:
              v28 = Stream;
              break;
          }
LABEL_103:
          v29 = Stream;
          goto LABEL_104;
        }
        v27 = 16;
        if ( !v61 )
        {
          v24 = 1;
          v25 = v59 + 1;
        }
LABEL_166:
        v42 = v27 | 1;
        if ( !v24 )
          v42 = v27;
        v43 = v42 | 2;
        if ( v16 <= 0 )
          v43 = v42;
        v44 = v43 | 4;
        if ( !v19 )
          v44 = v43;
        if ( v23 == 123 )
        {
          v45 = ReadStringDelimited(v44, &v70, &v55, &v54, SrcCh, v25, Stream, &v63);
          v5 = v70;
        }
        else
        {
          v45 = ReadString(v44, 0LL, &v55, &v54, SrcCh, v25, Stream, &v63);
        }
        v4 = v55;
        if ( !v45 )
        {
          v8 = v54;
          v56 = v54;
          Character = v55;
          goto LABEL_177;
        }
        goto LABEL_194;
      }
      ++v57;
      v64 = 0LL;
      v51 = 1;
    }
    break;
  }
  if ( v4 == 45 )
  {
    v53 = 1;
  }
  else if ( v4 != 43 )
  {
    goto LABEL_103;
  }
  --v59;
  if ( v25 == 1 && v61 )
  {
    v22 = 1;
    goto LABEL_103;
  }
  v29 = Stream;
  v56 = ++v8;
  v54 = v8;
  v4 = inc(Stream);
  Character = v4;
  v55 = v4;
LABEL_104:
  if ( !v57 )
  {
    if ( !v22 )
    {
      while ( 1 )
      {
        if ( ((v23 - 112) & 0xFFFFFFF7) != 0 )
        {
          if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
            goto LABEL_152;
          if ( v23 == 111 )
          {
            if ( v4 >= 56 )
              goto LABEL_152;
            v36 = 8 * v60;
          }
          else
          {
            v36 = 10 * v60;
          }
        }
        else
        {
          if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) >= 0 )
          {
LABEL_152:
            v56 = --v8;
            v54 = v8;
            if ( v4 != -1 )
              ungetc_nolock(v4, v29);
            break;
          }
          v60 *= 16;
          v37 = (char)v4;
          v38 = _pctype_func();
          v39 = (unsigned __int8)v4;
          v4 = ((char)v4 & 0xFFFFFFDF) - 7;
          v40 = v38[v39];
          v36 = v60;
          if ( (v40 & 4) != 0 )
            v4 = v37;
          Character = v4;
          v55 = v4;
        }
        ++v62;
        v41 = v4 + v36 - 48;
        v60 = v41;
        if ( v61 )
        {
          if ( !--v59 )
            goto LABEL_155;
        }
        v56 = ++v8;
        v54 = v8;
        v4 = inc(v29);
        Character = v4;
        v55 = v4;
      }
    }
    v41 = v60;
LABEL_155:
    if ( v53 )
      v60 = -v41;
    goto LABEL_157;
  }
  if ( v22 )
    goto LABEL_135;
  v30 = v64;
  while ( 2 )
  {
    if ( ((v23 - 112) & 0xFFFFFFF7) != 0 )
    {
      if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
        break;
      if ( v23 == 111 )
      {
        if ( v4 >= 56 )
          break;
        v31 = 8 * v30;
      }
      else
      {
        v31 = 10 * v30;
      }
      goto LABEL_130;
    }
    if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) < 0 )
    {
      v64 = 16 * v30;
      v32 = (char)v4;
      v33 = _pctype_func();
      v34 = (unsigned __int8)v4;
      v4 = ((char)v4 & 0xFFFFFFDF) - 7;
      if ( (v33[v34] & 4) != 0 )
        v4 = v32;
      v31 = v64;
      Character = v4;
      v55 = v4;
LABEL_130:
      ++v62;
      v30 = v4 - 48 + v31;
      v64 = v30;
      if ( v61 )
      {
        if ( !--v59 )
          goto LABEL_135;
      }
      v56 = ++v8;
      v54 = v8;
      v4 = inc(v29);
      Character = v4;
      v55 = v4;
      continue;
    }
    break;
  }
  v56 = --v8;
  v54 = v8;
  if ( v4 != -1 )
    ungetc_nolock(v4, v29);
LABEL_135:
  v35 = -v64;
  if ( !v53 )
    v35 = v64;
  v64 = v35;
LABEL_157:
  if ( v62 )
  {
    if ( !v50 )
    {
      LODWORD(v63) = v63 + 1;
      v26 = v60;
      goto LABEL_160;
    }
    goto LABEL_177;
  }
LABEL_194:
  if ( v4 != -1 )
    return (unsigned int)v63;
LABEL_195:
  if ( (_DWORD)v63 || v52 )
    return (unsigned int)v63;
  return v10;
}
