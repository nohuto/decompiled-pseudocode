/*
 * XREFs of _woutput_l @ 0x18009ACC0
 * Callers:
 *     _snwprintf @ 0x180094BD0 (_snwprintf.c)
 *     swprintf @ 0x1800951E0 (swprintf.c)
 *     _vswprintf_l @ 0x180095454 (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x1800955EC (_vsnwprintf_l.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     write_char_0 @ 0x18009B5D4 (write_char_0.c)
 *     write_multi_char_0 @ 0x18009B624 (write_multi_char_0.c)
 *     write_string_0 @ 0x18009B67C (write_string_0.c)
 *     _get_printf_count_output @ 0x18009DB58 (_get_printf_count_output.c)
 *     mbtowc @ 0x18009DC94 (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, wchar_t *a2, __int64 a3, int *a4)
{
  int *v4; // r11
  wchar_t *v5; // r15
  __int64 v6; // r10
  int v7; // esi
  int v8; // r8d
  int v9; // edi
  int v10; // r12d
  wchar_t v11; // r9
  int v12; // r14d
  __int64 v13; // r13
  wchar_t *v14; // rbx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // r9
  int *v24; // r11
  int *v25; // r10
  __int64 v26; // rax
  unsigned __int16 *v27; // rcx
  unsigned int v28; // eax
  wchar_t v29; // ax
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  const char *v33; // rax
  const wchar_t *v34; // rax
  unsigned __int64 v35; // r8
  char v36; // r11
  char *v37; // rbx
  int v38; // ecx
  int v39; // eax
  unsigned __int64 v40; // rdx
  char v41; // al
  __int16 v42; // ax
  unsigned int v43; // r14d
  unsigned int v44; // r12d
  __int64 v45; // rdi
  const char *v46; // r15
  int v47; // edi
  int v48; // eax
  __int64 v49; // r14
  _WORD *v50; // rdi
  wchar_t v51; // cx
  int v52; // eax
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  int v56; // r8d
  int v57; // eax
  int v58; // [rsp+30h] [rbp-D0h] BYREF
  int v59; // [rsp+34h] [rbp-CCh]
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  int *v62; // [rsp+40h] [rbp-C0h]
  int v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h]
  char SrcCh[4]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v66; // [rsp+5Ch] [rbp-A4h] BYREF
  _WORD v67[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v68; // [rsp+64h] [rbp-9Ch]
  int v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+6Ch] [rbp-94h]
  wchar_t *v71; // [rsp+70h] [rbp-90h]
  wchar_t DstCh[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v73; // [rsp+100h] [rbp+0h] BYREF
  char v74; // [rsp+27Fh] [rbp+17Fh] BYREF

  v62 = a4;
  v64 = a1;
  v4 = a4;
  v69 = 0;
  v5 = a2;
  v61 = 0;
  v6 = a1;
  v60 = 0;
  v7 = 0;
  v59 = 0;
  v8 = 0;
  v68 = 0;
  v9 = 0;
  v63 = 0;
  v10 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v58 = 0;
    LODWORD(v13) = 0;
    v70 = 0;
    if ( v11 )
    {
      v14 = v71;
      do
      {
        v71 = ++v5;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int16)(v11 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v11 - 32] & 0xF;
        v16 = _lookuptable[8 * v15 + v70] >> 4;
        v70 = v16;
        if ( !v16 )
          goto LABEL_166;
        v17 = v16 - 1;
        if ( !v17 )
        {
          v9 = -1;
          v68 = 0;
          v60 = -1;
          v8 = 0;
          v61 = 0;
          v10 = 0;
          v59 = 0;
          v7 = 0;
          v63 = 0;
          goto LABEL_169;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          switch ( v11 )
          {
            case ' ':
              v7 |= 2u;
              break;
            case '#':
              v7 |= 0x80u;
              break;
            case '+':
              v7 |= 1u;
              break;
            case '-':
              v7 |= 4u;
              break;
            case '0':
              v7 |= 8u;
              break;
          }
          goto LABEL_169;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( v11 == 42 )
          {
            v56 = *v4;
            v4 += 2;
            v62 = v4;
            if ( v56 < 0 )
              v7 |= 4u;
            v57 = v56;
            v8 = -v56;
            if ( v57 >= 0 )
              v8 = *(v4 - 2);
          }
          else
          {
            v8 = v11 + 2 * (5 * v8 - 24);
          }
          v61 = v8;
          goto LABEL_169;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v9 = 0;
          v60 = 0;
          goto LABEL_169;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( v11 == 42 )
          {
            v9 = *v4;
            v4 += 2;
            v62 = v4;
            v60 = v9;
            if ( v9 < 0 )
            {
              v9 = -1;
              v60 = -1;
            }
          }
          else
          {
            v9 = v11 + 2 * (5 * v9 - 24);
            v60 = v9;
          }
          goto LABEL_169;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            if ( v11 <= 0x69u )
            {
              if ( v11 == 105 )
                goto LABEL_25;
              if ( v11 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
                goto LABEL_45;
              }
              if ( v11 != 83 )
              {
                if ( v11 != 88 )
                {
                  if ( v11 == 90 )
                  {
                    v27 = *(unsigned __int16 **)v4;
                    v4 += 2;
                    v62 = v4;
                    if ( v27 && (v14 = (wchar_t *)*((_QWORD *)v27 + 1)) != 0LL )
                    {
                      v28 = *v27;
                      if ( v27[1] < (unsigned __int16)v28 )
                        goto LABEL_194;
                      LODWORD(v13) = *v27;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v28 & 1) != 0 || ((unsigned __int8)v14 & 1) != 0 )
                          goto LABEL_194;
                        LODWORD(v13) = v28 >> 1;
                        v63 = 1;
                      }
                      else
                      {
                        v63 = 0;
                      }
                    }
                    else
                    {
                      v13 = -1LL;
                      v14 = (wchar_t *)"(null)";
                      do
                        ++v13;
                      while ( aNull[v13] );
                    }
                    goto LABEL_107;
                  }
                  if ( v11 != 99 )
                  {
                    if ( v11 == 100 )
                    {
LABEL_25:
                      v7 |= 0x40u;
                      goto LABEL_26;
                    }
LABEL_107:
                    if ( v68 )
                      goto LABEL_168;
                    if ( (v7 & 0x40) != 0 )
                    {
                      if ( (v7 & 0x100) != 0 )
                      {
                        v42 = 45;
                        goto LABEL_111;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v42 = 43;
LABEL_111:
                        v43 = 1;
                        v67[0] = v42;
                        v59 = 1;
LABEL_117:
                        v44 = v61 - v13 - v43;
                        if ( (v7 & 0xC) == 0 )
                          write_multi_char_0(32LL, v44, v64, &v58);
                        write_string_0(v67, v43, v64, &v58);
                        v45 = v64;
                        if ( (v7 & 0xC) == 8 )
                          write_multi_char_0(48LL, v44, v64, &v58);
                        if ( !v63 && (int)v13 > 0 )
                        {
                          v46 = (const char *)v14;
                          v47 = v13;
                          while ( 1 )
                          {
                            --v47;
                            v48 = mbtowc(&v66, v46, _mb_cur_max);
                            v49 = v48;
                            if ( v48 == 2 )
                            {
                              --v47;
                            }
                            else if ( v48 <= 0 )
                            {
                              v5 = v71;
                              v12 = -1;
                              v45 = v64;
                              v58 = -1;
                              goto LABEL_132;
                            }
                            write_char_0(v66, v64, &v58);
                            v46 += v49;
                            if ( v47 <= 0 )
                            {
                              v5 = v71;
                              v45 = v64;
                              goto LABEL_131;
                            }
                          }
                        }
                        write_string_0(v14, (unsigned int)v13, v45, &v58);
LABEL_131:
                        v12 = v58;
LABEL_132:
                        if ( v12 >= 0 && (v7 & 4) != 0 )
                        {
                          write_multi_char_0(32LL, v44, v45, &v58);
                          v12 = v58;
                        }
                        v9 = v60;
                        v10 = v59;
                        goto LABEL_167;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v67[0] = 32;
                        v43 = 1;
                        v59 = 1;
                        goto LABEL_117;
                      }
                    }
                    v43 = v59;
                    goto LABEL_117;
                  }
LABEL_45:
                  v29 = *(_WORD *)v4;
                  v4 += 2;
                  v66 = v29;
                  v63 = 1;
                  v62 = v4;
                  if ( (v7 & 0x20) != 0 )
                  {
                    SrcCh[0] = v29;
                    SrcCh[1] = 0;
                    v30 = mbtowc(DstCh, SrcCh, _mb_cur_max);
                    v4 = v62;
                    if ( v30 < 0 )
                      v68 = 1;
                  }
                  else
                  {
                    DstCh[0] = v29;
                  }
                  v14 = DstCh;
                  LODWORD(v13) = 1;
                  goto LABEL_107;
                }
LABEL_74:
                v31 = 7;
LABEL_75:
                v69 = v31;
                if ( (v7 & 0x80u) != 0 )
                {
                  v67[0] = 48;
                  v67[1] = v31 + 81;
                  v10 = 2;
                }
                v23 = 16LL;
                goto LABEL_27;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x20u;
LABEL_57:
              v14 = *(wchar_t **)v4;
              v32 = v9;
              if ( v9 == -1 )
                v32 = 0x7FFFFFFF;
              v4 += 2;
              LODWORD(v13) = 0;
              v62 = v4;
              if ( (v7 & 0x20) != 0 )
              {
                v33 = (const char *)v14;
                if ( !v14 )
                {
                  v14 = (wchar_t *)"(null)";
                  v33 = "(null)";
                }
                if ( v32 > 0 )
                {
                  do
                  {
                    if ( !*v33 )
                      break;
                    ++v33;
                    LODWORD(v13) = v13 + 1;
                  }
                  while ( (int)v13 < v32 );
                }
              }
              else
              {
                v63 = 1;
                v34 = L"(null)";
                if ( v14 )
                  v34 = v14;
                v14 = (wchar_t *)v34;
                while ( v32 )
                {
                  --v32;
                  if ( !*v34 )
                    break;
                  ++v34;
                }
                LODWORD(v13) = v34 - v14;
              }
              goto LABEL_107;
            }
            switch ( v11 )
            {
              case 'n':
                v50 = *(_WORD **)v4;
                v62 = v4 + 2;
                if ( !get_printf_count_output() )
                  goto LABEL_194;
                if ( (v7 & 0x20) != 0 )
                  *v50 = v12;
                else
                  *(_DWORD *)v50 = v12;
                v4 = v62;
                v9 = v60;
                v8 = v61;
                v6 = v64;
                v68 = 1;
                goto LABEL_169;
              case 'o':
                v23 = 8LL;
                if ( (v7 & 0x80u) != 0 )
                  v7 |= 0x200u;
                goto LABEL_27;
              case 'p':
                v9 = 16;
                v7 |= 0x8000u;
                goto LABEL_74;
              case 's':
                goto LABEL_57;
            }
            if ( v11 != 117 )
            {
              if ( v11 != 120 )
                goto LABEL_107;
              v31 = 39;
              goto LABEL_75;
            }
LABEL_26:
            v23 = 10LL;
LABEL_27:
            v24 = v4 + 2;
            v62 = v24;
            v25 = v24;
            if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
            {
              v26 = *((_QWORD *)v24 - 1);
              goto LABEL_84;
            }
            if ( (v7 & 0x20) != 0 )
            {
              if ( (v7 & 0x40) != 0 )
              {
                v26 = *((__int16 *)v24 - 4);
                goto LABEL_88;
              }
              v26 = *((unsigned __int16 *)v24 - 4);
LABEL_84:
              if ( (v7 & 0x40) != 0 )
              {
LABEL_88:
                if ( v26 < 0 )
                {
                  v26 = -v26;
                  v7 |= 0x100u;
                }
              }
            }
            else
            {
              if ( (v7 & 0x40) != 0 )
              {
                v26 = *(v24 - 2);
                goto LABEL_88;
              }
              v26 = (unsigned int)*(v24 - 2);
            }
            v35 = (unsigned int)v26;
            if ( (v7 & 0x9000) != 0 )
              v35 = v26;
            if ( v9 >= 0 )
            {
              v7 &= ~8u;
              if ( v9 > 512 )
                v9 = 512;
            }
            else
            {
              v9 = 1;
            }
            v36 = v69;
            v37 = &v74;
            v38 = v35 != 0 ? v10 : 0;
            v10 = v38;
            v59 = v38;
            while ( 1 )
            {
              v39 = v9--;
              if ( v39 <= 0 && !v35 )
                break;
              v40 = v35 % v23;
              v35 /= v23;
              v41 = v40 + 48;
              if ( (int)v40 + 48 > 57 )
                v41 += v36;
              *v37-- = v41;
            }
            v60 = v9;
            LODWORD(v13) = (unsigned int)&v73 + 383 - (_DWORD)v37;
            v4 = v25;
            v14 = (wchar_t *)(v37 + 1);
            if ( (v7 & 0x200) != 0 )
            {
              if ( !(_DWORD)v13 || (v62 = v25, v59 = v38, *(_BYTE *)v14 != 48) )
              {
                v14 = (wchar_t *)((char *)v14 - 1);
                v62 = v25;
                LODWORD(v13) = v13 + 1;
                v59 = v38;
                v4 = v25;
                v10 = v38;
                *(_BYTE *)v14 = 48;
              }
            }
            goto LABEL_107;
          }
        }
        else
        {
          switch ( v11 )
          {
            case 'I':
              goto LABEL_148;
            case 'h':
              v7 |= 0x20u;
              break;
            case 'j':
              goto LABEL_148;
            case 'l':
              v51 = *v5;
              if ( *v5 == 108 )
                ++v5;
              v52 = 4096;
              if ( v51 != 108 )
                v52 = 16;
              v7 |= v52;
              break;
            case 't':
              goto LABEL_148;
            case 'w':
              v7 |= 0x800u;
              break;
            case 'z':
LABEL_148:
              v7 |= 0x8000u;
              if ( v11 == 73 )
              {
                if ( *v5 == 54 )
                {
                  if ( v5[1] != 52 )
                    goto LABEL_163;
                  v5 += 2;
                }
                else
                {
                  if ( *v5 != 51 || v5[1] != 50 )
                  {
LABEL_163:
                    v53 = *v5;
                    LOWORD(v53) = v53 - 88;
                    if ( (unsigned __int16)v53 <= 0x20u )
                    {
                      v54 = 0x120821001LL;
                      if ( _bittest64(&v54, v53) )
                        break;
                    }
                    v70 = 0;
LABEL_166:
                    v63 = 1;
                    write_char_0(v11, v6, &v58);
                    v12 = v58;
LABEL_167:
                    v4 = v62;
LABEL_168:
                    v6 = v64;
                    v8 = v61;
                    break;
                  }
                  v5 += 2;
                  v7 &= ~0x8000u;
                }
              }
              else if ( v11 != 106 )
              {
                goto LABEL_163;
              }
              break;
          }
        }
LABEL_169:
        v11 = *v5;
      }
      while ( *v5 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_194:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
