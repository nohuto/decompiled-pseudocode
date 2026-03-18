/*
 * XREFs of _winput_s @ 0x1403EA0E8
 * Callers:
 *     _swinput_s @ 0x1403EA014 (_swinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     iswctype @ 0x1403E3CE0 (iswctype.c)
 *     ReadString_0 @ 0x1403E9C2C (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x1403E9E64 (ReadStringDelimited_0.c)
 *     _whiteout @ 0x1403EA090 (_whiteout.c)
 *     _fgetwc_nolock @ 0x1403EAB5C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1403EABA8 (_ungetwc_nolock.c)
 */

__int64 __fastcall winput_s(FILE *File, wint_t *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // rsi
  int v5; // edi
  FILE *v6; // r14
  wint_t v7; // ax
  int v8; // r15d
  unsigned int v9; // r12d
  wint_t v10; // ax
  int v11; // r11d
  int v12; // r10d
  char v13; // r13
  char v14; // r8
  char v15; // r12
  char v16; // r9
  int v17; // r14d
  unsigned int v18; // edx
  unsigned __int16 v19; // cx
  unsigned __int16 *v20; // rax
  char v21; // r8
  __int64 Src; // r9
  _BYTE *v23; // rdx
  unsigned __int16 *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  char v27; // r13
  char v28; // cl
  unsigned int v29; // r14d
  unsigned __int16 v30; // ax
  int v31; // eax
  char v32; // al
  char v33; // cl
  char v34; // al
  int v35; // eax
  FILE *v36; // r12
  wint_t v37; // ax
  int v38; // r8d
  int v39; // r12d
  wint_t v40; // ax
  wint_t v41; // ax
  __int64 v42; // rcx
  wchar_t v43; // dx
  __int64 v44; // rcx
  wint_t v45; // ax
  __int64 v46; // rax
  int v47; // ecx
  wchar_t v48; // dx
  int v49; // ecx
  wint_t v50; // ax
  wint_t v51; // ax
  wint_t v52; // ax
  int v53; // r13d
  bool v54; // cc
  int v56; // [rsp+50h] [rbp-49h] BYREF
  char v57; // [rsp+54h] [rbp-45h]
  int v58; // [rsp+58h] [rbp-41h] BYREF
  char v59; // [rsp+5Ch] [rbp-3Dh]
  char v60; // [rsp+5Dh] [rbp-3Ch]
  unsigned int v61; // [rsp+60h] [rbp-39h]
  int v62; // [rsp+64h] [rbp-35h]
  int v63; // [rsp+68h] [rbp-31h]
  int v64; // [rsp+6Ch] [rbp-2Dh]
  int v65; // [rsp+70h] [rbp-29h]
  int v66; // [rsp+74h] [rbp-25h]
  __int64 v67; // [rsp+80h] [rbp-19h]
  int v68; // [rsp+88h] [rbp-11h]
  _DWORD v69[3]; // [rsp+8Ch] [rbp-Dh] BYREF
  _BYTE *v70; // [rsp+98h] [rbp-1h]
  __int64 v71[10]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int16 *v73; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v74; // [rsp+110h] [rbp+77h]
  char v75; // [rsp+118h] [rbp+7Fh]

  v74 = a3;
  v3 = 0;
  v4 = a2;
  v67 = 0LL;
  LOWORD(v5) = 0;
  v62 = 0;
  v6 = File;
  LOWORD(v56) = 0;
  *(_QWORD *)&v69[1] = 0LL;
  if ( !a2 || !File )
  {
    v9 = -1;
LABEL_207:
    xHalTimerWatchdogStop();
    return v9;
  }
  v7 = *a2;
  v8 = 0;
  v57 = 0;
  v9 = 0;
  v58 = 0;
  v61 = 0;
  v69[0] = 0;
  if ( !v7 )
    return v9;
  while ( iswctype(v7, 8u) )
  {
    v58 = v8 - 1;
    v10 = whiteout(&v58, v6);
    if ( v10 != 0xFFFF )
      ungetwc_nolock(v10, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v8 = v58;
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
    v58 = ++v8;
    v51 = fgetwc_nolock(v6);
    v5 = v51;
    LOWORD(v56) = v51;
    v52 = *v4++;
    v62 = v5;
    if ( v52 == (_WORD)v5 )
      goto LABEL_182;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_202;
    ungetwc_nolock(v5, v6);
    goto LABEL_186;
  }
  v65 = 0;
  v68 = 0;
  v11 = 0;
  v12 = 0;
  v59 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  v17 = 0;
  do
  {
    v73 = ++v4;
    v18 = *v4;
    if ( (v18 & 0xFF00) == 0 && (pctype[(unsigned __int8)v18] & 4) != 0 )
    {
      ++v11;
      v12 = v18 + 2 * (5 * v12 - 24);
      continue;
    }
    if ( v18 <= 0x68 )
    {
      switch ( v18 )
      {
        case 'h':
          --v16;
          --v15;
          continue;
        case '*':
          ++v13;
          continue;
        case 'F':
          continue;
        case 'I':
          v19 = v4[1];
          if ( v19 == 54 )
          {
            v20 = v4 + 2;
            if ( v4[2] == 52 )
            {
LABEL_26:
              v4 = v20;
              v73 = v20;
LABEL_27:
              v67 = 0LL;
              ++v17;
              continue;
            }
          }
          if ( v19 == 51 )
          {
            v24 = v4 + 2;
            if ( v4[2] == 50 )
            {
              v4 += 2;
              v73 = v24;
              continue;
            }
          }
LABEL_41:
          v25 = v4[1];
          LOWORD(v25) = v25 - 88;
          if ( (unsigned __int16)v25 <= 0x20u )
          {
            v26 = 0x120821001LL;
            if ( _bittest64(&v26, v25) )
              goto LABEL_27;
          }
          ++v17;
          v67 = 0LL;
          break;
        case 'L':
          ++v16;
          continue;
        case 'N':
          continue;
      }
LABEL_44:
      ++v14;
      continue;
    }
    switch ( v18 )
    {
      case 'j':
        goto LABEL_27;
      case 'l':
        v20 = v4 + 1;
        if ( v4[1] == 108 )
          goto LABEL_26;
        ++v16;
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
    ++v15;
  }
  while ( !v14 );
  v5 = v62;
  v21 = v13;
  v8 = v58;
  v75 = v16;
  Src = 0LL;
  v60 = v13;
  v66 = v17;
  v64 = v11;
  v63 = v12;
  if ( v13 )
  {
    v23 = 0LL;
    v70 = 0LL;
  }
  else
  {
    *(_QWORD *)&v69[1] = v74;
    v74 += 8LL;
    v23 = *(_BYTE **)(v74 - 8);
    v70 = v23;
  }
  v71[0] = (__int64)v23;
  v27 = 0;
  if ( !v15 )
    v15 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v28 = 32;
  v29 = *v4 | 0x20;
  if ( v29 == 110 )
  {
LABEL_58:
    if ( !v11 || v12 )
    {
      if ( !v21 && (v29 == 99 || v29 == 115 || v29 == 123) )
      {
        *(_QWORD *)&v69[1] += 8LL;
        v23 = *(_BYTE **)(*(_QWORD *)&v69[1] - 8LL);
        v70 = v23;
        v71[0] = (__int64)v23;
        v74 = *(_QWORD *)&v69[1] + 8LL;
        Src = (unsigned int)**(_DWORD **)&v69[1];
        if ( !**(_DWORD **)&v69[1] )
        {
          v54 = v15 <= 0;
          v53 = 0;
          v9 = v61;
          if ( v54 )
            *v23 = 0;
          else
            *(_WORD *)v23 = 0;
          goto LABEL_187;
        }
      }
      if ( v29 > 0x70 )
      {
        if ( v29 != 115 )
        {
          if ( v29 == 117 )
            goto LABEL_72;
          if ( v29 == 120 )
            goto LABEL_78;
          if ( v29 != 123 )
          {
LABEL_95:
            if ( *v4 == (_WORD)v5 )
            {
              --v57;
              if ( !v21 )
                v74 = *(_QWORD *)&v69[1];
              goto LABEL_75;
            }
            if ( (_WORD)v5 != 0xFFFF )
              ungetwc_nolock(v5, File);
            v53 = 1;
LABEL_201:
            v9 = v61;
LABEL_187:
            if ( (_WORD)v5 == 0xFFFF )
              goto LABEL_202;
            if ( v53 != 1 )
              return v9;
            goto LABEL_207;
          }
          v28 = 64;
        }
      }
      else
      {
        if ( v29 == 112 )
        {
          ++v66;
          v75 = 1;
          v67 = 0LL;
          goto LABEL_72;
        }
        if ( v29 != 99 )
        {
          if ( v29 != 100 )
          {
            if ( v29 != 105 )
            {
              if ( v29 == 110 )
              {
                v31 = v8;
                if ( v21 )
                  goto LABEL_75;
                goto LABEL_172;
              }
              if ( v29 == 111 )
                goto LABEL_72;
              goto LABEL_95;
            }
            v29 = 100;
LABEL_78:
            if ( (_WORD)v5 == 45 )
            {
              v59 = 1;
            }
            else if ( (_WORD)v5 != 43 )
            {
              goto LABEL_103;
            }
            v63 = v12 - 1;
            if ( v12 != 1 || !v11 )
            {
              v36 = File;
              v58 = ++v8;
              v40 = fgetwc_nolock(File);
              v5 = v40;
              LOWORD(v56) = v40;
              v62 = v40;
LABEL_104:
              if ( (_WORD)v5 == 48 )
              {
                v58 = ++v8;
                v37 = fgetwc_nolock(v36);
                v5 = v37;
                LOWORD(v56) = v37;
                v62 = v37;
                if ( ((v37 - 88) & 0xFFDF) == 0 )
                {
                  v58 = ++v8;
                  v41 = fgetwc_nolock(v36);
                  v38 = v64;
                  v5 = v41;
                  v39 = v63;
                  v62 = v41;
                  LOWORD(v56) = v41;
                  if ( v64 )
                  {
                    v39 = v63 - 2;
                    if ( v63 - 2 < 1 )
                      ++v27;
                  }
                  v29 = 120;
                  goto LABEL_127;
                }
                v68 = 1;
                if ( v29 != 120 )
                {
                  v38 = v64;
                  v39 = v63;
                  if ( v64 )
                  {
                    v39 = v63 - 1;
                    if ( v63 == 1 )
                      ++v27;
                  }
                  v29 = 111;
                  goto LABEL_127;
                }
                v58 = --v8;
                if ( v37 != 0xFFFF )
                  ungetwc_nolock(v37, v36);
                v5 = 48;
LABEL_124:
                LOWORD(v56) = v5;
                v62 = v5;
                goto LABEL_125;
              }
              goto LABEL_125;
            }
            v27 = 1;
LABEL_103:
            v36 = File;
            goto LABEL_104;
          }
LABEL_72:
          if ( (_WORD)v5 == 45 )
          {
            v59 = 1;
            goto LABEL_120;
          }
          if ( (_WORD)v5 == 43 )
          {
LABEL_120:
            v63 = v12 - 1;
            if ( v12 == 1 && v11 )
            {
              v27 = 1;
              v39 = 0;
LABEL_126:
              v38 = v64;
LABEL_127:
              if ( v66 )
              {
                if ( !v27 )
                {
                  while ( 1 )
                  {
                    if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_143;
                      if ( v29 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_143;
                        v42 = 8 * v67;
                      }
                      else
                      {
                        v42 = 10 * v67;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v43 = pctype[(unsigned __int8)v5], (v43 & 0x80u) == 0) )
                      {
LABEL_143:
                        v58 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          ungetwc_nolock(v5, File);
                        break;
                      }
                      v42 = 16 * v67;
                      if ( (v43 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v62 = v5;
                        LOWORD(v56) = v5;
                      }
                    }
                    ++v68;
                    v44 = (unsigned __int16)v5 + v42 - 48;
                    v67 = v44;
                    if ( v38 )
                    {
                      if ( !--v39 )
                        goto LABEL_146;
                    }
                    v58 = ++v8;
                    v45 = fgetwc_nolock(File);
                    v38 = v64;
                    v5 = v45;
                    v62 = v45;
                    LOWORD(v56) = v45;
                  }
                }
                v44 = v67;
LABEL_146:
                v46 = -v44;
                if ( !v59 )
                  v46 = v44;
                v67 = v46;
              }
              else
              {
                if ( !v27 )
                {
                  while ( 1 )
                  {
                    if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_164;
                      if ( v29 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_164;
                        v47 = 8 * v65;
                      }
                      else
                      {
                        v47 = 10 * v65;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v48 = pctype[(unsigned __int8)v5], (v48 & 0x80u) == 0) )
                      {
LABEL_164:
                        v58 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          ungetwc_nolock(v5, File);
                        break;
                      }
                      v47 = 16 * v65;
                      if ( (v48 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v62 = v5;
                        LOWORD(v56) = v5;
                      }
                    }
                    ++v68;
                    v49 = (unsigned __int16)v5 + v47 - 48;
                    v65 = v49;
                    if ( v38 )
                    {
                      if ( !--v39 )
                        goto LABEL_167;
                    }
                    v58 = ++v8;
                    v50 = fgetwc_nolock(File);
                    v38 = v64;
                    v5 = v50;
                    v62 = v50;
                    LOWORD(v56) = v50;
                  }
                }
                v49 = v65;
LABEL_167:
                if ( v59 )
                  v65 = -v49;
              }
              if ( !v68 )
              {
                v53 = 0;
                goto LABEL_201;
              }
              if ( v60 )
                goto LABEL_75;
              v23 = v70;
              v69[0] = ++v61;
              v31 = v65;
LABEL_172:
              if ( !v66 )
              {
                v9 = v61;
                if ( v75 )
                  *(_DWORD *)v23 = v31;
                else
                  *(_WORD *)v23 = v31;
                goto LABEL_76;
              }
              *(_QWORD *)v23 = v67;
LABEL_75:
              v9 = v61;
LABEL_76:
              ++v57;
              v6 = File;
              ++v4;
LABEL_182:
              if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                goto LABEL_202;
              goto LABEL_185;
            }
            v58 = ++v8;
            v5 = fgetwc_nolock(File);
            goto LABEL_124;
          }
LABEL_125:
          v39 = v63;
          goto LABEL_126;
        }
        v28 = 16;
        if ( !v11 )
        {
          v11 = 1;
          ++v12;
        }
      }
      v32 = v28 | 1;
      if ( !v11 )
        v32 = v28;
      v33 = v32 | 2;
      if ( v15 <= 0 )
        v33 = v32;
      v34 = v33 | 4;
      if ( !v21 )
        v34 = v33;
      if ( v29 == 123 )
      {
        v35 = ReadStringDelimited_0(v34, &v73, (wint_t *)&v56, &v58, (void **)v71, v12, File, Src, v69);
        v4 = v73;
      }
      else
      {
        v35 = ReadString_0(v34, 0LL, (wint_t *)&v56, &v58, (void **)v71, v12, File, Src, v69);
      }
      v9 = v69[0];
      LOWORD(v5) = v56;
      v61 = v69[0];
      if ( v35 )
        goto LABEL_186;
      v8 = v58;
      v62 = (unsigned __int16)v56;
      goto LABEL_76;
    }
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_202;
    ungetwc_nolock(v5, File);
    v9 = v61;
LABEL_186:
    v53 = 0;
    goto LABEL_187;
  }
  if ( v29 == 99 || v29 == 123 )
  {
    v8 = ++v58;
    v30 = fgetwc_nolock(File);
  }
  else
  {
    v30 = whiteout(&v58, File);
    v8 = v58;
  }
  v5 = v30;
  LOWORD(v56) = v30;
  v62 = v30;
  if ( v30 != 0xFFFF )
  {
    v23 = v70;
    Src = 0LL;
    v12 = v63;
    v28 = 32;
    v11 = v64;
    v21 = v60;
    goto LABEL_58;
  }
LABEL_202:
  if ( v61 || v57 )
    return v61;
  return v3;
}
