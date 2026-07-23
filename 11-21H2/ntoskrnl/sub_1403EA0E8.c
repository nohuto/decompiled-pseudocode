/*
 * XREFs of sub_1403EA0E8 @ 0x1403EA0E8
 * Callers:
 *     sub_1403EA014 @ 0x1403EA014 (sub_1403EA014.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 *     sub_1403E9C2C @ 0x1403E9C2C (sub_1403E9C2C.c)
 *     sub_1403E9E64 @ 0x1403E9E64 (sub_1403E9E64.c)
 *     _whiteout @ 0x1403EA090 (_whiteout.c)
 *     sub_1403EAB5C @ 0x1403EAB5C (sub_1403EAB5C.c)
 *     sub_1403EABA8 @ 0x1403EABA8 (sub_1403EABA8.c)
 */

__int64 __fastcall sub_1403EA0E8(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // rsi
  int v5; // edi
  __int64 v6; // r14
  unsigned __int16 v7; // ax
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  int v12; // r11d
  int v13; // r10d
  char v14; // r13
  char v15; // r8
  char v16; // r12
  char v17; // r9
  int v18; // r14d
  unsigned int v19; // edx
  unsigned __int16 v20; // cx
  unsigned __int16 *v21; // rax
  char v22; // r8
  __int64 Src; // r9
  __int64 v24; // rdx
  unsigned __int16 *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // r13
  char v29; // cl
  unsigned int v30; // r14d
  unsigned __int16 v31; // ax
  int v32; // eax
  char v33; // al
  char v34; // cl
  char v35; // al
  int v36; // eax
  __int64 v37; // r12
  unsigned __int16 v38; // ax
  int v39; // r8d
  int v40; // r12d
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // ax
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int16 v45; // ax
  __int64 v46; // rax
  int v47; // ecx
  int v48; // ecx
  unsigned __int16 v49; // ax
  unsigned __int16 v50; // ax
  unsigned __int16 v51; // ax
  int v52; // r13d
  bool v53; // cc
  int v55; // [rsp+50h] [rbp-49h] BYREF
  char v56; // [rsp+54h] [rbp-45h]
  int v57; // [rsp+58h] [rbp-41h] BYREF
  char v58; // [rsp+5Ch] [rbp-3Dh]
  char v59; // [rsp+5Dh] [rbp-3Ch]
  unsigned int v60; // [rsp+60h] [rbp-39h]
  int v61; // [rsp+64h] [rbp-35h]
  int v62; // [rsp+68h] [rbp-31h]
  int v63; // [rsp+6Ch] [rbp-2Dh]
  int v64; // [rsp+70h] [rbp-29h]
  int v65; // [rsp+74h] [rbp-25h]
  __int64 v66; // [rsp+80h] [rbp-19h]
  int v67; // [rsp+88h] [rbp-11h]
  _DWORD v68[3]; // [rsp+8Ch] [rbp-Dh] BYREF
  __int64 v69; // [rsp+98h] [rbp-1h]
  __int64 v70[10]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int16 *v72; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v73; // [rsp+110h] [rbp+77h]
  char v74; // [rsp+118h] [rbp+7Fh]

  v73 = a3;
  v3 = 0;
  v4 = a2;
  v66 = 0LL;
  LOWORD(v5) = 0;
  v61 = 0;
  v6 = a1;
  LOWORD(v55) = 0;
  *(_QWORD *)&v68[1] = 0LL;
  if ( !a2 || !a1 )
  {
    v9 = -1;
LABEL_207:
    _misaligned_access();
    return v9;
  }
  v7 = *a2;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v57 = 0;
  v60 = 0;
  v68[0] = 0;
  if ( !v7 )
    return v9;
  while ( (unsigned int)sub_1403E3CE0(v7, 8) )
  {
    v57 = v8 - 1;
    v11 = whiteout(&v57, v6);
    if ( v11 != 0xFFFF )
      sub_1403EABA8(v11, v6);
    do
      ++v4;
    while ( (unsigned int)sub_1403E3CE0(*v4, 8) );
    v8 = v57;
LABEL_185:
    v7 = *v4;
    if ( !*v4 )
      goto LABEL_186;
  }
  if ( *v4 != 37 )
    goto LABEL_181;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_181:
    v57 = ++v8;
    v50 = sub_1403EAB5C(v6, v10);
    v5 = v50;
    LOWORD(v55) = v50;
    v51 = *v4++;
    v61 = v5;
    if ( v51 == (_WORD)v5 )
      goto LABEL_182;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_202;
    sub_1403EABA8((unsigned __int16)v5, v6);
    goto LABEL_186;
  }
  v64 = 0;
  v67 = 0;
  v12 = 0;
  v13 = 0;
  v58 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  do
  {
    v72 = ++v4;
    v19 = *v4;
    if ( (v19 & 0xFF00) == 0 && (off_140C00000[(unsigned __int8)v19] & 4) != 0 )
    {
      ++v12;
      v13 = v19 + 2 * (5 * v13 - 24);
      continue;
    }
    if ( v19 <= 0x68 )
    {
      switch ( v19 )
      {
        case 'h':
          --v17;
          --v16;
          continue;
        case '*':
          ++v14;
          continue;
        case 'F':
          continue;
        case 'I':
          v20 = v4[1];
          if ( v20 == 54 )
          {
            v21 = v4 + 2;
            if ( v4[2] == 52 )
            {
LABEL_26:
              v4 = v21;
              v72 = v21;
LABEL_27:
              v66 = 0LL;
              ++v18;
              continue;
            }
          }
          if ( v20 == 51 )
          {
            v25 = v4 + 2;
            if ( v4[2] == 50 )
            {
              v4 += 2;
              v72 = v25;
              continue;
            }
          }
LABEL_41:
          v26 = v4[1];
          LOWORD(v26) = v26 - 88;
          if ( (unsigned __int16)v26 <= 0x20u )
          {
            v27 = 0x120821001LL;
            if ( _bittest64(&v27, v26) )
              goto LABEL_27;
          }
          ++v18;
          v66 = 0LL;
          break;
        case 'L':
          ++v17;
          continue;
        case 'N':
          continue;
      }
LABEL_44:
      ++v15;
      continue;
    }
    switch ( v19 )
    {
      case 'j':
        goto LABEL_27;
      case 'l':
        v21 = v4 + 1;
        if ( v4[1] == 108 )
          goto LABEL_26;
        ++v17;
        break;
      case 't':
        goto LABEL_41;
      case 'w':
        break;
      case 'z':
        goto LABEL_41;
      default:
        goto LABEL_44;
    }
    ++v16;
  }
  while ( !v15 );
  v5 = v61;
  v22 = v14;
  v8 = v57;
  v74 = v17;
  Src = 0LL;
  v59 = v14;
  v65 = v18;
  v63 = v12;
  v62 = v13;
  if ( v14 )
  {
    v24 = 0LL;
    v69 = 0LL;
  }
  else
  {
    *(_QWORD *)&v68[1] = v73;
    v73 += 8LL;
    v24 = *(_QWORD *)(v73 - 8);
    v69 = v24;
  }
  v70[0] = v24;
  v28 = 0;
  if ( !v16 )
    v16 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v29 = 32;
  v30 = *v4 | 0x20;
  if ( v30 == 110 )
  {
LABEL_58:
    if ( !v12 || v13 )
    {
      if ( !v22 && (v30 == 99 || v30 == 115 || v30 == 123) )
      {
        *(_QWORD *)&v68[1] += 8LL;
        v24 = *(_QWORD *)(*(_QWORD *)&v68[1] - 8LL);
        v69 = v24;
        v70[0] = v24;
        v73 = *(_QWORD *)&v68[1] + 8LL;
        Src = (unsigned int)**(_DWORD **)&v68[1];
        if ( !**(_DWORD **)&v68[1] )
        {
          v53 = v16 <= 0;
          v52 = 0;
          v9 = v60;
          if ( v53 )
            *(_BYTE *)v24 = 0;
          else
            *(_WORD *)v24 = 0;
          goto LABEL_187;
        }
      }
      if ( v30 > 0x70 )
      {
        if ( v30 != 115 )
        {
          if ( v30 == 117 )
            goto LABEL_72;
          if ( v30 == 120 )
            goto LABEL_78;
          if ( v30 != 123 )
          {
LABEL_95:
            if ( *v4 == (_WORD)v5 )
            {
              --v56;
              if ( !v22 )
                v73 = *(_QWORD *)&v68[1];
              goto LABEL_75;
            }
            if ( (_WORD)v5 != 0xFFFF )
              sub_1403EABA8((unsigned __int16)v5, a1);
            v52 = 1;
LABEL_201:
            v9 = v60;
LABEL_187:
            if ( (_WORD)v5 == 0xFFFF )
              goto LABEL_202;
            if ( v52 != 1 )
              return v9;
            goto LABEL_207;
          }
          v29 = 64;
        }
      }
      else
      {
        if ( v30 == 112 )
        {
          ++v65;
          v74 = 1;
          v66 = 0LL;
          goto LABEL_72;
        }
        if ( v30 != 99 )
        {
          if ( v30 != 100 )
          {
            if ( v30 != 105 )
            {
              if ( v30 == 110 )
              {
                v32 = v8;
                if ( v22 )
                  goto LABEL_75;
                goto LABEL_172;
              }
              if ( v30 == 111 )
                goto LABEL_72;
              goto LABEL_95;
            }
            v30 = 100;
LABEL_78:
            if ( (_WORD)v5 == 45 )
            {
              v58 = 1;
            }
            else if ( (_WORD)v5 != 43 )
            {
              goto LABEL_103;
            }
            v62 = v13 - 1;
            if ( v13 != 1 || !v12 )
            {
              v37 = a1;
              v57 = ++v8;
              v41 = sub_1403EAB5C(a1, v24);
              v5 = v41;
              LOWORD(v55) = v41;
              v61 = v41;
LABEL_104:
              if ( (_WORD)v5 == 48 )
              {
                v57 = ++v8;
                v38 = sub_1403EAB5C(v37, v24);
                v5 = v38;
                LOWORD(v55) = v38;
                v61 = v38;
                if ( ((v38 - 88) & 0xFFDF) == 0 )
                {
                  v57 = ++v8;
                  v42 = sub_1403EAB5C(v37, v24);
                  v39 = v63;
                  v5 = v42;
                  v40 = v62;
                  v61 = v42;
                  LOWORD(v55) = v42;
                  if ( v63 )
                  {
                    v40 = v62 - 2;
                    if ( v62 - 2 < 1 )
                      ++v28;
                  }
                  v30 = 120;
                  goto LABEL_127;
                }
                v67 = 1;
                if ( v30 != 120 )
                {
                  v39 = v63;
                  v40 = v62;
                  if ( v63 )
                  {
                    v40 = v62 - 1;
                    if ( v62 == 1 )
                      ++v28;
                  }
                  v30 = 111;
                  goto LABEL_127;
                }
                v57 = --v8;
                if ( v38 != 0xFFFF )
                  sub_1403EABA8(v38, v37);
                v5 = 48;
LABEL_124:
                LOWORD(v55) = v5;
                v61 = v5;
                goto LABEL_125;
              }
              goto LABEL_125;
            }
            v28 = 1;
LABEL_103:
            v37 = a1;
            goto LABEL_104;
          }
LABEL_72:
          if ( (_WORD)v5 == 45 )
          {
            v58 = 1;
            goto LABEL_120;
          }
          if ( (_WORD)v5 == 43 )
          {
LABEL_120:
            v62 = v13 - 1;
            if ( v13 == 1 && v12 )
            {
              v28 = 1;
              v40 = 0;
LABEL_126:
              v39 = v63;
LABEL_127:
              if ( v65 )
              {
                if ( !v28 )
                {
                  while ( 1 )
                  {
                    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (off_140C00000[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_143;
                      if ( v30 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_143;
                        v43 = 8 * v66;
                      }
                      else
                      {
                        v43 = 10 * v66;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v24 = off_140C00000[(unsigned __int8)v5], (v24 & 0x80u) == 0LL) )
                      {
LABEL_143:
                        v57 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          sub_1403EABA8((unsigned __int16)v5, a1);
                        break;
                      }
                      v43 = 16 * v66;
                      if ( (v24 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v61 = v5;
                        LOWORD(v55) = v5;
                      }
                    }
                    ++v67;
                    v44 = (unsigned __int16)v5 + v43 - 48;
                    v66 = v44;
                    if ( v39 )
                    {
                      if ( !--v40 )
                        goto LABEL_146;
                    }
                    v57 = ++v8;
                    v45 = sub_1403EAB5C(a1, v24);
                    v39 = v63;
                    v5 = v45;
                    v61 = v45;
                    LOWORD(v55) = v45;
                  }
                }
                v44 = v66;
LABEL_146:
                v46 = -v44;
                if ( !v58 )
                  v46 = v44;
                v66 = v46;
              }
              else
              {
                if ( !v28 )
                {
                  while ( 1 )
                  {
                    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (off_140C00000[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_164;
                      if ( v30 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_164;
                        v47 = 8 * v64;
                      }
                      else
                      {
                        v47 = 10 * v64;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v24 = off_140C00000[(unsigned __int8)v5], (v24 & 0x80u) == 0LL) )
                      {
LABEL_164:
                        v57 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          sub_1403EABA8((unsigned __int16)v5, a1);
                        break;
                      }
                      v47 = 16 * v64;
                      if ( (v24 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v61 = v5;
                        LOWORD(v55) = v5;
                      }
                    }
                    ++v67;
                    v48 = (unsigned __int16)v5 + v47 - 48;
                    v64 = v48;
                    if ( v39 )
                    {
                      if ( !--v40 )
                        goto LABEL_167;
                    }
                    v57 = ++v8;
                    v49 = sub_1403EAB5C(a1, v24);
                    v39 = v63;
                    v5 = v49;
                    v61 = v49;
                    LOWORD(v55) = v49;
                  }
                }
                v48 = v64;
LABEL_167:
                if ( v58 )
                  v64 = -v48;
              }
              if ( !v67 )
              {
                v52 = 0;
                goto LABEL_201;
              }
              if ( v59 )
                goto LABEL_75;
              v24 = v69;
              v68[0] = ++v60;
              v32 = v64;
LABEL_172:
              if ( !v65 )
              {
                v9 = v60;
                if ( v74 )
                  *(_DWORD *)v24 = v32;
                else
                  *(_WORD *)v24 = v32;
                goto LABEL_76;
              }
              *(_QWORD *)v24 = v66;
LABEL_75:
              v9 = v60;
LABEL_76:
              ++v56;
              v6 = a1;
              ++v4;
LABEL_182:
              if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                goto LABEL_202;
              goto LABEL_185;
            }
            v57 = ++v8;
            v5 = (unsigned __int16)sub_1403EAB5C(a1, v24);
            goto LABEL_124;
          }
LABEL_125:
          v40 = v62;
          goto LABEL_126;
        }
        v29 = 16;
        if ( !v12 )
        {
          v12 = 1;
          ++v13;
        }
      }
      v33 = v29 | 1;
      if ( !v12 )
        v33 = v29;
      v34 = v33 | 2;
      if ( v16 <= 0 )
        v34 = v33;
      v35 = v34 | 4;
      if ( !v22 )
        v35 = v34;
      if ( v30 == 123 )
      {
        v36 = sub_1403E9E64(v35, &v72, (unsigned __int16 *)&v55, &v57, (void **)v70, v13, a1, Src, v68);
        v4 = v72;
      }
      else
      {
        v36 = sub_1403E9C2C(v35, 0LL, (unsigned __int16 *)&v55, &v57, (void **)v70, v13, a1, Src, v68);
      }
      v9 = v68[0];
      LOWORD(v5) = v55;
      v60 = v68[0];
      if ( v36 )
        goto LABEL_186;
      v8 = v57;
      v61 = (unsigned __int16)v55;
      goto LABEL_76;
    }
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_202;
    sub_1403EABA8((unsigned __int16)v5, a1);
    v9 = v60;
LABEL_186:
    v52 = 0;
    goto LABEL_187;
  }
  if ( v30 == 99 || v30 == 123 )
  {
    v8 = ++v57;
    v31 = sub_1403EAB5C(a1, v24);
  }
  else
  {
    v31 = whiteout(&v57, a1);
    v8 = v57;
  }
  v5 = v31;
  LOWORD(v55) = v31;
  v61 = v31;
  if ( v31 != 0xFFFF )
  {
    v24 = v69;
    Src = 0LL;
    v13 = v62;
    v29 = 32;
    v12 = v63;
    v22 = v59;
    goto LABEL_58;
  }
LABEL_202:
  if ( v60 || v56 )
    return v60;
  return v3;
}
