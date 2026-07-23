/*
 * XREFs of sub_1403E3D1C @ 0x1403E3D1C
 * Callers:
 *     sub_1403E0460 @ 0x1403E0460 (sub_1403E0460.c)
 *     _snwprintf @ 0x1403E1050 (_snwprintf.c)
 *     swprintf @ 0x1403E12E0 (swprintf.c)
 *     sub_1403E13CC @ 0x1403E13CC (sub_1403E13CC.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     mbtowc @ 0x1403E1D00 (mbtowc.c)
 *     write_char @ 0x1403E466C (write_char.c)
 *     write_multi_char @ 0x1403E46C0 (write_multi_char.c)
 *     sub_1403E4718 @ 0x1403E4718 (sub_1403E4718.c)
 *     _get_printf_count_output @ 0x1403E57CC (_get_printf_count_output.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403E3D1C(__int64 a1, unsigned __int16 *a2, __int64 a3, wchar_t *a4)
{
  int v5; // esi
  int v6; // r12d
  wchar_t *v7; // rbx
  wchar_t *v8; // rdi
  __int64 v9; // r11
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  int v13; // r8d
  int v14; // ecx
  unsigned __int64 v15; // r9
  wchar_t *v16; // rdi
  __int64 v17; // rax
  unsigned __int16 *v18; // rcx
  unsigned int v19; // eax
  wchar_t v20; // ax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  const char *v24; // rax
  const wchar_t *v25; // rax
  unsigned __int64 v26; // r8
  char v27; // r11
  char *v28; // rbx
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rdx
  char v32; // al
  __int16 v33; // ax
  unsigned int v34; // r14d
  unsigned int v35; // r12d
  __int64 v36; // rdi
  const char *v37; // r15
  int v38; // edi
  int v39; // eax
  __int64 v40; // r14
  _WORD *v42; // rdi
  unsigned __int16 v43; // cx
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // ecx
  int v48; // r8d
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh]
  int v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+3Ch] [rbp-C4h]
  wchar_t v53[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh]
  char SrcCh[4]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v56[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  wchar_t *v59; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+6Ch] [rbp-94h]
  unsigned __int16 *v62; // [rsp+70h] [rbp-90h]
  wchar_t DstCh[512]; // [rsp+80h] [rbp-80h] BYREF

  v58 = a1;
  v59 = a4;
  v61 = 0;
  v5 = 0;
  v57 = 0;
  v6 = 0;
  v51 = 0;
  v7 = 0LL;
  v50 = 0;
  v60 = 0;
  v8 = a4;
  memset(DstCh, 0, sizeof(DstCh));
  v9 = v58;
  v53[0] = 0;
  v54 = 0;
  if ( v58 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v49 = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      do
      {
        v62 = ++a2;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = *((_BYTE *)&qword_1400136A0[-4] + v10) & 0xF;
        v13 = *((char *)&qword_1400136A0[v14] + v13) >> 4;
        v52 = v13;
        switch ( v13 )
        {
          case 0:
            goto LABEL_168;
          case 1:
            v6 = -1;
            v60 = 0;
            v51 = -1;
            v5 = 0;
            v57 = 0;
            v50 = 0;
            v54 = 0;
            break;
          case 2:
            switch ( v10 )
            {
              case ' ':
                v5 |= 2u;
                break;
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
            break;
          case 3:
            if ( v10 != 42 )
            {
              v57 = v10 + 2 * (5 * v57 - 24);
              break;
            }
            v47 = *(_DWORD *)v8;
            v59 = v8 + 4;
            if ( v47 < 0 )
              v5 |= 4u;
            v48 = -v47;
            if ( v47 >= 0 )
              v48 = v47;
            v57 = v48;
LABEL_180:
            v13 = v52;
            break;
          case 4:
            v6 = 0;
            v51 = 0;
            break;
          case 5:
            if ( v10 == 42 )
            {
              v6 = *(_DWORD *)v8;
              v59 = v8 + 4;
              v51 = v6;
              if ( v6 < 0 )
              {
                v6 = -1;
                v51 = -1;
              }
            }
            else
            {
              v6 = v10 + 2 * (5 * v6 - 24);
              v51 = v6;
            }
            break;
          case 6:
            switch ( v10 )
            {
              case 'I':
                goto LABEL_150;
              case 'h':
                v5 |= 0x20u;
                goto LABEL_135;
              case 'j':
                goto LABEL_150;
              case 'l':
                v43 = *a2;
                if ( *a2 == 108 )
                  ++a2;
                v44 = 4096;
                if ( v43 != 108 )
                  v44 = 16;
                v5 |= v44;
                goto LABEL_135;
              case 't':
                goto LABEL_150;
              case 'w':
                v5 |= 0x800u;
                goto LABEL_135;
              case 'z':
LABEL_150:
                v5 |= 0x8000u;
                if ( v10 == 73 )
                {
                  if ( *a2 == 54 )
                  {
                    if ( a2[1] == 52 )
                    {
                      a2 += 2;
                      goto LABEL_135;
                    }
                  }
                  else if ( *a2 == 51 && a2[1] == 50 )
                  {
                    a2 += 2;
                    v5 &= ~0x8000u;
                    goto LABEL_135;
                  }
                }
                else if ( v10 == 106 )
                {
                  goto LABEL_135;
                }
                v45 = *a2;
                LOWORD(v45) = v45 - 88;
                if ( (unsigned __int16)v45 <= 0x20u )
                {
                  v46 = 0x120821001LL;
                  if ( _bittest64(&v46, v45) )
                    goto LABEL_135;
                }
                v52 = 0;
LABEL_168:
                v54 = 1;
                write_char(v10, v9, &v49);
LABEL_134:
                v11 = v49;
                v13 = v52;
                break;
            }
            break;
          case 7:
            if ( v10 <= 0x69u )
            {
              if ( v10 == 105 )
                goto LABEL_24;
              if ( v10 == 67 )
              {
                if ( (v5 & 0x830) == 0 )
                  v5 |= 0x20u;
                goto LABEL_44;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v18 = *(unsigned __int16 **)v8;
                    v59 = v8 + 4;
                    if ( v18 && (v7 = (wchar_t *)*((_QWORD *)v18 + 1)) != 0LL )
                    {
                      v19 = *v18;
                      if ( v18[1] < (unsigned __int16)v19 )
                        goto LABEL_195;
                      LODWORD(v12) = *v18;
                      if ( (v5 & 0x800) != 0 )
                      {
                        if ( (v19 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                          goto LABEL_195;
                        LODWORD(v12) = v19 >> 1;
                        v54 = 1;
                      }
                      else
                      {
                        v54 = 0;
                      }
                    }
                    else
                    {
                      v12 = -1LL;
                      v7 = (wchar_t *)"(null)";
                      do
                        ++v12;
                      while ( aNull_0[v12] );
                    }
                    goto LABEL_106;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 == 100 )
                    {
LABEL_24:
                      v5 |= 0x40u;
                      goto LABEL_25;
                    }
LABEL_106:
                    if ( v60 )
                      goto LABEL_180;
                    if ( (v5 & 0x40) != 0 )
                    {
                      if ( (v5 & 0x100) != 0 )
                      {
                        v33 = 45;
                        goto LABEL_110;
                      }
                      if ( (v5 & 1) != 0 )
                      {
                        v33 = 43;
LABEL_110:
                        v34 = 1;
                        v56[0] = v33;
                        v50 = 1;
LABEL_116:
                        v35 = v57 - v12 - v34;
                        if ( (v5 & 0xC) == 0 )
                          write_multi_char(32LL, v35, v9, &v49);
                        sub_1403E4718(v56, v34, v58, &v49);
                        v36 = v58;
                        if ( (v5 & 0xC) == 8 )
                          write_multi_char(48LL, v35, v58, &v49);
                        if ( !v54 && (int)v12 > 0 )
                        {
                          v37 = (const char *)v7;
                          v38 = v12;
                          while ( 1 )
                          {
                            --v38;
                            v39 = mbtowc(v53, v37, dword_140C094C4);
                            v40 = v39;
                            if ( v39 == 2 )
                            {
                              --v38;
                            }
                            else if ( v39 <= 0 )
                            {
                              a2 = v62;
                              v11 = -1;
                              v36 = v58;
                              v49 = -1;
                              goto LABEL_131;
                            }
                            write_char(v53[0], v58, &v49);
                            v37 += v40;
                            if ( v38 <= 0 )
                            {
                              a2 = v62;
                              v36 = v58;
                              goto LABEL_130;
                            }
                          }
                        }
                        sub_1403E4718(v7, (unsigned int)v12, v36, &v49);
LABEL_130:
                        v11 = v49;
LABEL_131:
                        if ( v11 < 0 || (v5 & 4) == 0 )
                        {
                          v6 = v51;
LABEL_142:
                          v13 = v52;
                          break;
                        }
                        write_multi_char(32LL, v35, v36, &v49);
                        v6 = v51;
                        goto LABEL_134;
                      }
                      if ( (v5 & 2) != 0 )
                      {
                        v56[0] = 32;
                        v34 = 1;
                        v50 = 1;
                        goto LABEL_116;
                      }
                    }
                    v34 = v50;
                    goto LABEL_116;
                  }
LABEL_44:
                  v20 = *v8;
                  v53[0] = *v8;
                  v54 = 1;
                  v59 = v8 + 4;
                  if ( (v5 & 0x20) != 0 )
                  {
                    SrcCh[0] = v20;
                    SrcCh[1] = 0;
                    v21 = mbtowc(DstCh, SrcCh, dword_140C094C4);
                    v9 = v58;
                    if ( v21 < 0 )
                      v60 = 1;
                  }
                  else
                  {
                    DstCh[0] = v20;
                  }
                  v7 = DstCh;
                  LODWORD(v12) = 1;
                  goto LABEL_106;
                }
LABEL_73:
                v22 = 7;
LABEL_74:
                v61 = v22;
                if ( (v5 & 0x80u) != 0 )
                {
                  v50 = 2;
                  v56[0] = 48;
                  v56[1] = v22 + 81;
                }
                v15 = 16LL;
                goto LABEL_26;
              }
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x20u;
LABEL_56:
              v7 = *(wchar_t **)v8;
              v23 = v6;
              if ( v6 == -1 )
                v23 = 0x7FFFFFFF;
              v59 = v8 + 4;
              if ( (v5 & 0x20) != 0 )
              {
                v24 = (const char *)v7;
                if ( !v7 )
                {
                  v7 = (wchar_t *)"(null)";
                  v24 = "(null)";
                }
                LODWORD(v12) = 0;
                if ( v23 > 0 )
                {
                  do
                  {
                    if ( !*v24 )
                      break;
                    ++v24;
                    LODWORD(v12) = v12 + 1;
                  }
                  while ( (int)v12 < v23 );
                }
              }
              else
              {
                v54 = 1;
                v25 = L"(null)";
                if ( v7 )
                  v25 = v7;
                v7 = (wchar_t *)v25;
                while ( v23 )
                {
                  --v23;
                  if ( !*v25 )
                    break;
                  ++v25;
                }
                LODWORD(v12) = v25 - v7;
              }
              goto LABEL_106;
            }
            switch ( v10 )
            {
              case 'n':
                v59 = v8 + 4;
                v42 = *(_WORD **)v8;
                if ( !get_printf_count_output() )
                  goto LABEL_195;
                if ( (v5 & 0x20) != 0 )
                  *v42 = v11;
                else
                  *(_DWORD *)v42 = v11;
                v60 = 1;
                goto LABEL_142;
              case 'o':
                v15 = 8LL;
                if ( (v5 & 0x80u) != 0 )
                  v5 |= 0x200u;
                goto LABEL_26;
              case 'p':
                v6 = 16;
                v5 |= 0x8000u;
                goto LABEL_73;
              case 's':
                goto LABEL_56;
            }
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_106;
              v22 = 39;
              goto LABEL_74;
            }
LABEL_25:
            v15 = 10LL;
LABEL_26:
            v16 = v8 + 4;
            v59 = v16;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v17 = *((_QWORD *)v16 - 1);
              goto LABEL_83;
            }
            if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) != 0 )
              {
                v17 = (__int16)*(v16 - 4);
                goto LABEL_87;
              }
              v17 = *(v16 - 4);
LABEL_83:
              if ( (v5 & 0x40) != 0 )
              {
LABEL_87:
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
                v17 = *((int *)v16 - 2);
                goto LABEL_87;
              }
              v17 = *((unsigned int *)v16 - 2);
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
            v27 = v61;
            v28 = (char *)&DstCh[255] + 1;
            v29 = v26 != 0 ? v50 : 0;
            v50 = v29;
            while ( 1 )
            {
              v30 = v6--;
              if ( v30 <= 0 && !v26 )
                break;
              v31 = v26 % v15;
              v26 /= v15;
              v32 = v31 + 48;
              if ( (int)v31 + 48 > 57 )
                v32 += v27;
              *v28-- = v32;
            }
            v9 = v58;
            LODWORD(v12) = (unsigned int)&DstCh[64] + 383 - (_DWORD)v28;
            v51 = v6;
            v7 = (wchar_t *)(v28 + 1);
            if ( (v5 & 0x200) != 0 )
            {
              if ( !(_DWORD)v12 || (v59 = v16, v50 = v29, *(_BYTE *)v7 != 48) )
              {
                v7 = (wchar_t *)((char *)v7 - 1);
                v59 = v16;
                LODWORD(v12) = v12 + 1;
                v50 = v29;
                *(_BYTE *)v7 = 48;
              }
            }
            goto LABEL_106;
        }
LABEL_135:
        v10 = *a2;
        v8 = v59;
        v9 = v58;
      }
      while ( *a2 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_195:
    _misaligned_access();
    return 0xFFFFFFFFLL;
  }
}
