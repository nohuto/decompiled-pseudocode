/*
 * XREFs of _woutput_s @ 0x1800A1520
 * Callers:
 *     _swoutput_s @ 0x1800A13F4 (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x1800A03B4 (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x1800A1E50 (write_char_2.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall woutput_s(__int64 a1, unsigned __int16 *a2, int *a3)
{
  int v5; // r15d
  int v6; // r14d
  wchar_t *v7; // rbx
  __int64 v9; // r11
  unsigned __int16 v10; // r9
  int v11; // edi
  __int64 v12; // r12
  int v13; // r8d
  unsigned int v14; // r10d
  int v15; // edx
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int16 *v18; // rcx
  unsigned int v19; // eax
  int v20; // ecx
  const char *v21; // rax
  WCHAR v22; // ax
  int v23; // eax
  int v24; // eax
  const wchar_t *v25; // rax
  unsigned __int64 v26; // r8
  char v27; // r10
  char *v28; // rbx
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rdx
  char v32; // al
  __int16 v33; // ax
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // r14d
  int v37; // r11d
  unsigned int v38; // r11d
  int v39; // r9d
  unsigned __int16 *v40; // r10
  int v41; // r9d
  __int64 v42; // r10
  int v43; // r9d
  UCHAR *v44; // rsi
  int v45; // edi
  int v46; // eax
  __int64 v47; // r9
  wchar_t *v48; // r10
  int v49; // r9d
  __int64 v50; // r10
  bool i; // zf
  unsigned __int16 v52; // cx
  int v53; // eax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // ecx
  int v57; // edx
  int v59; // [rsp+30h] [rbp-D0h] BYREF
  int v60; // [rsp+34h] [rbp-CCh]
  int v61; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+3Ch] [rbp-C4h]
  WCHAR v63[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+44h] [rbp-BCh]
  UCHAR v65[4]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v66[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v67; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+54h] [rbp-ACh]
  int v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h]
  int v71; // [rsp+68h] [rbp-98h]
  int v72; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v73; // [rsp+78h] [rbp-88h]
  WCHAR v74[512]; // [rsp+80h] [rbp-80h] BYREF

  v70 = a1;
  v68 = 0;
  v5 = 0;
  v67 = 0;
  v6 = 0;
  v61 = 0;
  v7 = 0LL;
  v60 = 0;
  v69 = 0;
  memset(v74, 0, sizeof(v74));
  LODWORD(v9) = 0;
  v63[0] = 0;
  v64 = 0;
  if ( !a1 || !a2 )
    goto LABEL_214;
  v10 = *a2;
  v11 = 0;
  v59 = 0;
  LODWORD(v12) = 0;
  v13 = 0;
  if ( !v10 )
    return (unsigned int)v11;
  v14 = 32;
  do
  {
    v73 = ++a2;
    if ( v11 < 0 )
      break;
    if ( (unsigned __int16)(v10 - v14) > 0x5Au )
      v15 = v9;
    else
      v15 = _lookuptable_s[v10 - 32] & 0xF;
    v13 = _lookuptable_s[v15 + v13 + 8 * v15] >> 4;
    v62 = v13;
    switch ( v13 )
    {
      case 8:
        goto LABEL_214;
      case 0:
        goto LABEL_182;
      case 1:
        v6 = -1;
        v69 = v9;
        v61 = -1;
        v5 = v9;
        v67 = v9;
        v60 = v9;
        v64 = v9;
        break;
      case 2:
        if ( v10 == v14 )
        {
          v5 |= 2u;
        }
        else
        {
          switch ( v10 )
          {
            case '#':
              v5 |= 0x80u;
              break;
            case '+':
              v5 |= 1u;
              break;
            case '-':
              v5 |= 4u;
              break;
            case '0':
              v5 |= 8u;
              break;
          }
        }
        break;
      case 3:
        if ( v10 == 42 )
        {
          v56 = *a3;
          a3 += 2;
          if ( v56 < 0 )
            v5 |= 4u;
          v57 = -v56;
          if ( v56 >= 0 )
            v57 = v56;
        }
        else
        {
          v57 = v10 + 2 * (5 * v67 - 24);
        }
        v67 = v57;
        break;
      case 4:
        v6 = v9;
        v61 = v9;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v6 = v10 + 2 * (5 * v6 - 24);
          goto LABEL_187;
        }
        v6 = *a3;
        a3 += 2;
        v61 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
LABEL_187:
          v61 = v6;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_164;
          case 'h':
            v5 |= v14;
            goto LABEL_210;
          case 'j':
            goto LABEL_164;
          case 'l':
            v52 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v53 = 4096;
            if ( v52 != 108 )
              v53 = 16;
            v5 |= v53;
            goto LABEL_210;
          case 't':
            goto LABEL_164;
          case 'w':
            v5 |= 0x800u;
            goto LABEL_210;
          case 'z':
LABEL_164:
            v5 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *a2 == 54 )
              {
                if ( a2[1] != 52 )
                  goto LABEL_179;
                a2 += 2;
              }
              else
              {
                if ( *a2 != 51 || a2[1] != 50 )
                {
LABEL_179:
                  v54 = *a2;
                  LOWORD(v54) = v54 - 88;
                  if ( (unsigned __int16)v54 <= (unsigned __int16)v14 )
                  {
                    v55 = 0x120821001LL;
                    if ( _bittest64(&v55, v54) )
                      goto LABEL_210;
                  }
                  v62 = v9;
LABEL_182:
                  v64 = 1;
                  write_char_2(v10, v70, &v59);
                  v11 = v59;
LABEL_209:
                  v13 = v62;
                  goto LABEL_210;
                }
                a2 += 2;
                v5 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_179;
            }
            break;
        }
        break;
      case 7:
        if ( v10 <= 0x69u )
        {
          if ( v10 == 105 )
            goto LABEL_26;
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= v14;
            goto LABEL_55;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v18 = *(unsigned __int16 **)a3;
                a3 += 2;
                if ( v18 && (v7 = (wchar_t *)*((_QWORD *)v18 + 1)) != 0LL )
                {
                  v19 = *v18;
                  if ( v18[1] < (unsigned __int16)v19 )
                    goto LABEL_214;
                  LODWORD(v12) = *v18;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v19 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                      goto LABEL_214;
                    LODWORD(v12) = v19 >> 1;
                    v64 = 1;
                  }
                  else
                  {
                    v64 = v9;
                  }
                }
                else
                {
                  v12 = -1LL;
                  v7 = (wchar_t *)"(null)";
                  do
                    ++v12;
                  while ( aNull[v12] != (_BYTE)v9 );
                }
                goto LABEL_108;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_26:
                  v5 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_108:
                if ( v69 != (_DWORD)v9 )
                {
                  v14 = 32;
                  goto LABEL_209;
                }
                if ( (v5 & 0x40) == 0 )
                  goto LABEL_117;
                if ( (v5 & 0x100) != 0 )
                {
                  v33 = 45;
                  goto LABEL_114;
                }
                if ( (v5 & 1) != 0 )
                {
                  v33 = 43;
                  goto LABEL_114;
                }
                if ( (v5 & 2) != 0 )
                {
                  v33 = 32;
LABEL_114:
                  v34 = 1;
                  v66[0] = v33;
                  v60 = 1;
                }
                else
                {
LABEL_117:
                  v34 = v60;
                }
                v35 = v70;
                v36 = v67 - v12 - v34;
                v37 = v5 & 0xC;
                v72 = v36;
                v71 = v37;
                if ( (v5 & 0xC) == 0 && v36 > 0 )
                {
                  v38 = 32;
                  do
                  {
                    write_char_2(v38, v35, &v59);
                    v11 = v59;
                  }
                  while ( v59 != -1 && v39 > 0 );
                  v37 = v71;
                  v34 = v60;
                }
                v40 = v66;
                if ( (*(_DWORD *)(v35 + 24) & 0x40) == 0 || *(_QWORD *)(v35 + 16) )
                {
                  if ( v34 > 0 )
                  {
                    do
                    {
                      write_char_2(*v40, v35, &v59);
                      v11 = v59;
                      v40 = (unsigned __int16 *)(v42 + 2);
                    }
                    while ( v59 != -1 && v41 > 0 );
                  }
                }
                else
                {
                  v11 += v34;
                  v59 = v11;
                }
                if ( v37 == 8 )
                {
                  v9 = 0LL;
                  if ( v36 > 0 )
                  {
                    do
                    {
                      write_char_2(48LL, v35, &v59);
                      v11 = v59;
                    }
                    while ( v59 != -1 && v43 > 0 );
                    v36 = v72;
                  }
                }
                else
                {
                  v9 = 0LL;
                }
                if ( v64 == (_DWORD)v9 && (int)v12 > 0 )
                {
                  v44 = (UCHAR *)v7;
                  v45 = v12;
                  while ( 1 )
                  {
                    --v45;
                    v46 = safecrt_mbtowc(v63, v44, _mb_cur_max);
                    if ( v46 == 2 )
                    {
                      --v45;
                    }
                    else
                    {
                      LODWORD(v9) = 0;
                      if ( v46 <= 0 )
                      {
                        a2 = v73;
                        v11 = -1;
                        v35 = v70;
                        v59 = -1;
                        goto LABEL_151;
                      }
                    }
                    write_char_2(v63[0], v70, &v59);
                    v44 += v47;
                    if ( v45 <= 0 )
                    {
                      v11 = v59;
                      a2 = v73;
                      goto LABEL_151;
                    }
                  }
                }
                v48 = v7;
                if ( (*(_DWORD *)(v35 + 24) & 0x40) != 0 && *(_QWORD *)(v35 + 16) == v9 )
                {
                  v11 += v12;
                  v59 = v11;
                }
                else if ( (int)v12 > 0 )
                {
                  do
                  {
                    write_char_2(*v48, v35, &v59);
                    v11 = v59;
                    v48 = (wchar_t *)(v50 + 2);
                  }
                  while ( v59 != -1 && v49 > 0 );
                }
LABEL_151:
                v14 = 32;
                if ( v11 >= 0 )
                {
                  for ( i = (v5 & 4) == 0; !i && v36 > 0; i = v59 == -1 )
                  {
                    --v36;
                    write_char_2(v14, v35, &v59);
                    v11 = v59;
                  }
                }
                v6 = v61;
                goto LABEL_209;
              }
LABEL_55:
              v22 = *(_WORD *)a3;
              a3 += 2;
              v63[0] = v22;
              v64 = 1;
              if ( ((unsigned __int8)v5 & (unsigned __int8)v14) != 0 )
              {
                v65[0] = v22;
                v65[1] = v9;
                v23 = safecrt_mbtowc(v74, v65, _mb_cur_max);
                LODWORD(v9) = 0;
                if ( v23 < 0 )
                  v69 = 1;
              }
              else
              {
                v74[0] = v22;
              }
              v7 = v74;
              LODWORD(v12) = 1;
              goto LABEL_108;
            }
LABEL_75:
            v24 = 7;
LABEL_76:
            v68 = v24;
            if ( (v5 & 0x80u) != 0 )
            {
              v60 = 2;
              v66[0] = 48;
              v66[1] = v24 + 81;
            }
            v16 = 16LL;
            goto LABEL_28;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= v14;
LABEL_44:
          v7 = *(wchar_t **)a3;
          v20 = v6;
          if ( v6 == -1 )
            v20 = 0x7FFFFFFF;
          a3 += 2;
          if ( ((unsigned __int8)v5 & (unsigned __int8)v14) != 0 )
          {
            v21 = (const char *)v7;
            if ( !v7 )
            {
              v7 = (wchar_t *)"(null)";
              v21 = "(null)";
            }
            LODWORD(v12) = v9;
            if ( v20 > 0 )
            {
              do
              {
                if ( *v21 == (_BYTE)v9 )
                  break;
                ++v21;
                LODWORD(v12) = v12 + 1;
              }
              while ( (int)v12 < v20 );
            }
          }
          else
          {
            v64 = 1;
            v25 = L"(null)";
            if ( v7 )
              v25 = v7;
            v7 = (wchar_t *)v25;
            while ( v20 )
            {
              --v20;
              if ( *v25 == (_WORD)v9 )
                break;
              ++v25;
            }
            LODWORD(v12) = v25 - v7;
          }
          goto LABEL_108;
        }
        switch ( v10 )
        {
          case 'n':
            goto LABEL_214;
          case 'o':
            v16 = 8LL;
            if ( (v5 & 0x80u) != 0 )
              v5 |= 0x200u;
            goto LABEL_28;
          case 'p':
            v6 = 16;
            v5 |= 0x8000u;
            goto LABEL_75;
          case 's':
            goto LABEL_44;
        }
        if ( v10 != 117 )
        {
          if ( v10 != 120 )
            goto LABEL_108;
          v24 = 39;
          goto LABEL_76;
        }
LABEL_27:
        v16 = 10LL;
LABEL_28:
        a3 += 2;
        if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
        {
          v17 = *((_QWORD *)a3 - 1);
          goto LABEL_85;
        }
        if ( (v5 & 0x20) != 0 )
        {
          if ( (v5 & 0x40) != 0 )
          {
            v17 = *((__int16 *)a3 - 4);
            goto LABEL_89;
          }
          v17 = *((unsigned __int16 *)a3 - 4);
LABEL_85:
          if ( (v5 & 0x40) != 0 )
          {
LABEL_89:
            if ( v17 < 0 )
            {
              v17 = -v17;
              v5 |= 0x100u;
            }
          }
        }
        else
        {
          if ( (v5 & 0x40) != 0 )
          {
            v17 = *(a3 - 2);
            goto LABEL_89;
          }
          v17 = (unsigned int)*(a3 - 2);
        }
        v26 = (unsigned int)v17;
        if ( (v5 & 0x9000) != 0 )
          v26 = v17;
        if ( v6 >= 0 )
        {
          v5 &= ~8u;
          if ( v6 > 512 )
            v6 = 512;
        }
        else
        {
          v6 = 1;
        }
        v27 = v68;
        v28 = (char *)&v74[255] + 1;
        v29 = v26 != 0 ? v60 : 0;
        v60 = v29;
        while ( 1 )
        {
          v30 = v6--;
          if ( v30 <= 0 && !v26 )
            break;
          v31 = v26 % v16;
          v26 /= v16;
          v32 = v31 + 48;
          if ( (int)v31 + 48 > 57 )
            v32 += v27;
          *v28-- = v32;
        }
        v61 = v6;
        LODWORD(v12) = (unsigned int)&v74[64] + 383 - (_DWORD)v28;
        v7 = (wchar_t *)(v28 + 1);
        if ( (v5 & 0x200) != 0 )
        {
          if ( !(_DWORD)v12 || (v60 = v29, *(_BYTE *)v7 != 48) )
          {
            v7 = (wchar_t *)((char *)v7 - 1);
            v60 = v29;
            LODWORD(v12) = v12 + 1;
            *(_BYTE *)v7 = 48;
          }
        }
        goto LABEL_108;
    }
LABEL_210:
    v10 = *a2;
  }
  while ( *a2 );
  if ( !v13 || v13 == 7 )
    return (unsigned int)v11;
LABEL_214:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
