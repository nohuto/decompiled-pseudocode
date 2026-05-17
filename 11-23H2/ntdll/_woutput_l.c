/*
 * XREFs of _woutput_l @ 0x1800965C0
 * Callers:
 *     _snwprintf @ 0x180090390 (_snwprintf.c)
 *     swprintf @ 0x1800909B0 (swprintf.c)
 *     _vswprintf_l @ 0x180090C24 (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x180090DBC (_vsnwprintf_l.c)
 * Callees:
 *     _invalid_parameter @ 0x18008EEB8 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     write_char_0 @ 0x180096EF0 (write_char_0.c)
 *     write_multi_char_0 @ 0x180096F40 (write_multi_char_0.c)
 *     write_string_0 @ 0x180096F98 (write_string_0.c)
 *     _get_printf_count_output @ 0x180099498 (_get_printf_count_output.c)
 *     mbtowc @ 0x1800995D4 (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned __int16 *a4)
{
  wchar_t *v4; // rsi
  unsigned __int16 *v5; // r15
  int v6; // edi
  int v7; // r11d
  int v8; // r12d
  int v9; // r10d
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  wchar_t *v13; // rbx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  unsigned __int16 *v24; // rcx
  unsigned int v25; // eax
  int v26; // ecx
  const char *v27; // rax
  wchar_t v28; // ax
  int v29; // eax
  int v30; // eax
  const wchar_t *v31; // rax
  unsigned __int64 v32; // r9
  char v33; // si
  wchar_t *i; // rcx
  int v35; // eax
  int v36; // r8d
  __int16 v37; // ax
  unsigned int v38; // r14d
  unsigned int v39; // r12d
  __int64 v40; // rsi
  const char *v41; // r15
  int v42; // esi
  int v43; // eax
  __int64 v44; // r14
  _WORD *v46; // rsi
  unsigned __int16 v47; // cx
  int v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // r11d
  int v52; // ecx
  int v53; // eax
  int v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  int v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+3Ch] [rbp-C4h]
  int v58; // [rsp+40h] [rbp-C0h]
  char SrcCh[4]; // [rsp+44h] [rbp-BCh] BYREF
  wchar_t v60[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v61[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int16 *v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  int v65; // [rsp+68h] [rbp-98h]
  int v66; // [rsp+6Ch] [rbp-94h]
  int v67; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v68; // [rsp+78h] [rbp-88h]
  wchar_t *v69; // [rsp+80h] [rbp-80h]
  wchar_t DstCh[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v71; // [rsp+100h] [rbp+0h] BYREF
  char v72; // [rsp+28Fh] [rbp+18Fh] BYREF

  v62 = a4;
  v64 = a1;
  v4 = a4;
  v65 = 0;
  v5 = a2;
  v56 = 0;
  v6 = 0;
  v57 = 0;
  v7 = 0;
  v54 = 0;
  v8 = 0;
  v63 = 0;
  v9 = 0;
  v58 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v55 = 0;
    LODWORD(v12) = 0;
    v66 = 0;
    if ( v10 )
    {
      v13 = v69;
      do
      {
        v68 = ++v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = _lookuptable[v10 - 32] & 0xF;
        v15 = _lookuptable[8 * v14 + v66] >> 4;
        v66 = v15;
        if ( !v15 )
          goto LABEL_171;
        v16 = v15 - 1;
        if ( !v16 )
        {
          v8 = -1;
          v63 = 0;
          v57 = -1;
          v7 = 0;
          v56 = 0;
          v9 = 0;
          v54 = 0;
          v6 = 0;
          v58 = 0;
          goto LABEL_138;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          switch ( v10 )
          {
            case ' ':
              v6 |= 2u;
              break;
            case '#':
              v6 |= 0x80u;
              break;
            case '+':
              v6 |= 1u;
              break;
            case '-':
              v6 |= 4u;
              break;
            case '0':
              v6 |= 8u;
              break;
          }
          goto LABEL_138;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( v10 == 42 )
          {
            v51 = *(_DWORD *)v4;
            v62 = v4 + 4;
            v52 = v51;
            if ( v51 < 0 )
              v6 |= 4u;
            v53 = v51;
            v7 = -v51;
            if ( v53 >= 0 )
              v7 = v52;
          }
          else
          {
            v7 = v10 + 2 * (5 * v7 - 24);
          }
          v56 = v7;
          goto LABEL_138;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          v8 = 0;
          v57 = 0;
          goto LABEL_138;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( v10 == 42 )
          {
            v8 = *(_DWORD *)v4;
            v62 = v4 + 4;
            v57 = v8;
            if ( v8 < 0 )
            {
              v8 = -1;
              v57 = -1;
            }
          }
          else
          {
            v8 = v10 + 2 * (5 * v8 - 24);
            v57 = v8;
          }
          goto LABEL_138;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( v10 != 73 )
          {
            if ( v10 == 104 )
            {
              v6 |= 0x20u;
              goto LABEL_138;
            }
            if ( v10 != 106 )
            {
              if ( v10 == 108 )
              {
                v47 = *v5;
                if ( *v5 == 108 )
                  ++v5;
                v48 = 4096;
                if ( v47 != 108 )
                  v48 = 16;
                v6 |= v48;
                goto LABEL_138;
              }
              if ( v10 != 116 )
              {
                if ( v10 == 119 )
                {
                  v6 |= 0x800u;
                  goto LABEL_138;
                }
                if ( v10 != 122 )
                  goto LABEL_138;
              }
            }
          }
          v6 |= 0x8000u;
          if ( v10 == 73 )
          {
            if ( *v5 == 54 && v5[1] == 52 )
            {
              v5 += 2;
              goto LABEL_138;
            }
            if ( *v5 == 51 && v5[1] == 50 )
            {
              v5 += 2;
              v6 &= ~0x8000u;
              goto LABEL_138;
            }
          }
          else if ( v10 == 106 )
          {
            goto LABEL_138;
          }
          v49 = *v5;
          LOWORD(v49) = v49 - 88;
          if ( (unsigned __int16)v49 <= 0x20u )
          {
            v50 = 0x120821001LL;
            if ( _bittest64(&v50, v49) )
              goto LABEL_138;
          }
          v66 = 0;
LABEL_171:
          v58 = 1;
          write_char_0(v10, v64, &v55);
          v11 = v55;
          goto LABEL_136;
        }
        if ( v21 == 1 )
        {
          if ( v10 <= 0x69u )
          {
            if ( v10 != 105 )
            {
              switch ( v10 )
              {
                case 'C':
                  if ( (v6 & 0x830) == 0 )
                    v6 |= 0x20u;
                  break;
                case 'S':
                  if ( (v6 & 0x830) == 0 )
                    v6 |= 0x20u;
                  goto LABEL_44;
                case 'X':
                  goto LABEL_75;
                case 'Z':
                  v24 = *(unsigned __int16 **)v4;
                  v62 = v4 + 4;
                  if ( v24 && (v13 = (wchar_t *)*((_QWORD *)v24 + 1)) != 0LL )
                  {
                    v25 = *v24;
                    if ( v24[1] < (unsigned __int16)v25 )
                      goto LABEL_195;
                    LODWORD(v12) = *v24;
                    if ( (v6 & 0x800) != 0 )
                    {
                      if ( (v25 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                        goto LABEL_195;
                      LODWORD(v12) = v25 >> 1;
                      v58 = 1;
                    }
                    else
                    {
                      v58 = 0;
                    }
                  }
                  else
                  {
                    v12 = -1LL;
                    v13 = (wchar_t *)"(null)";
                    do
                      ++v12;
                    while ( aNull[v12] );
                  }
                  goto LABEL_106;
                case 'c':
                  break;
                case 'd':
                  goto LABEL_25;
                default:
                  goto LABEL_106;
              }
              v28 = *v4;
              v58 = 1;
              v62 = v4 + 4;
              v60[0] = v28;
              if ( (v6 & 0x20) != 0 )
              {
                SrcCh[0] = v28;
                SrcCh[1] = 0;
                v29 = mbtowc(DstCh, SrcCh, _mb_cur_max);
                v9 = v54;
                if ( v29 < 0 )
                  v63 = 1;
              }
              else
              {
                DstCh[0] = v28;
              }
              v13 = DstCh;
              LODWORD(v12) = 1;
              goto LABEL_106;
            }
LABEL_25:
            v6 |= 0x40u;
            goto LABEL_26;
          }
          if ( v10 != 110 )
          {
            if ( v10 == 111 )
            {
              v22 = 8LL;
              if ( (v6 & 0x80u) != 0 )
                v6 |= 0x200u;
              goto LABEL_27;
            }
            if ( v10 != 112 )
            {
              if ( v10 != 115 )
              {
                if ( v10 != 117 )
                {
                  if ( v10 == 120 )
                  {
                    v30 = 39;
                    goto LABEL_76;
                  }
LABEL_106:
                  if ( v63 )
                    goto LABEL_137;
                  if ( (v6 & 0x40) != 0 )
                  {
                    if ( (v6 & 0x100) != 0 )
                    {
                      v37 = 45;
                      goto LABEL_112;
                    }
                    if ( (v6 & 1) != 0 )
                    {
                      v37 = 43;
LABEL_112:
                      v61[0] = v37;
LABEL_113:
                      v38 = 1;
                      v54 = 1;
LABEL_117:
                      v39 = v56 - v12 - v38;
                      if ( (v6 & 0xC) == 0 )
                        write_multi_char_0(32LL, v39, v64, &v55);
                      write_string_0(v61, v38, v64, &v55);
                      v40 = v64;
                      if ( (v6 & 0xC) == 8 )
                        write_multi_char_0(48LL, v39, v64, &v55);
                      if ( !v58 && (int)v12 > 0 )
                      {
                        v41 = (const char *)v13;
                        v42 = v12;
                        while ( 1 )
                        {
                          --v42;
                          v43 = mbtowc(v60, v41, _mb_cur_max);
                          v44 = v43;
                          if ( v43 == 2 )
                          {
                            --v42;
                          }
                          else if ( v43 <= 0 )
                          {
                            v5 = v68;
                            v11 = -1;
                            v40 = v64;
                            v55 = -1;
                            goto LABEL_132;
                          }
                          write_char_0(v60[0], v64, &v55);
                          v41 += v44;
                          if ( v42 <= 0 )
                          {
                            v5 = v68;
                            v40 = v64;
                            goto LABEL_131;
                          }
                        }
                      }
                      write_string_0(v13, (unsigned int)v12, v40, &v55);
LABEL_131:
                      v11 = v55;
LABEL_132:
                      if ( v11 >= 0 && (v6 & 4) != 0 )
                      {
                        write_multi_char_0(32LL, v39, v40, &v55);
                        v11 = v55;
                      }
                      v8 = v57;
LABEL_136:
                      v9 = v54;
LABEL_137:
                      v7 = v56;
                      goto LABEL_138;
                    }
                    if ( (v6 & 2) != 0 )
                    {
                      v61[0] = 32;
                      goto LABEL_113;
                    }
                  }
                  v38 = v54;
                  goto LABEL_117;
                }
LABEL_26:
                v22 = 10LL;
LABEL_27:
                v62 = v4 + 4;
                v69 = v4 + 4;
                if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
                {
                  v23 = *(_QWORD *)v4;
                  if ( (v6 & 0x40) != 0 )
                    goto LABEL_87;
LABEL_90:
                  v32 = (unsigned int)v23;
                  if ( (v6 & 0x9000) != 0 )
                    v32 = v23;
                  if ( v8 >= 0 )
                  {
                    v6 &= ~8u;
                    if ( v8 > 512 )
                      v8 = 512;
                  }
                  else
                  {
                    v8 = 1;
                  }
                  v33 = v65;
                  v54 = v32 != 0 ? v9 : 0;
                  v67 = v54;
                  for ( i = (wchar_t *)&v72; ; i = (wchar_t *)((char *)i - 1) )
                  {
                    v35 = v8--;
                    if ( v35 <= 0 && !v32 )
                      break;
                    v36 = v32 % v22 + 48;
                    v32 /= v22;
                    if ( v36 > 57 )
                      LOBYTE(v36) = v33 + v36;
                    *(_BYTE *)i = v36;
                  }
                  v9 = v67;
                  v13 = (wchar_t *)((char *)i + 1);
                  LODWORD(v12) = (unsigned int)&v71 + 399 - (_DWORD)i;
                  v57 = v8;
                  if ( (v6 & 0x200) != 0 )
                  {
                    if ( !(_DWORD)v12 || (v62 = v69, v54 = v67, *(_BYTE *)v13 != 48) )
                    {
                      v13 = i;
                      v62 = v69;
                      LODWORD(v12) = v12 + 1;
                      v54 = v67;
                      *(_BYTE *)i = 48;
                    }
                  }
                  goto LABEL_106;
                }
                if ( (v6 & 0x20) != 0 )
                {
                  if ( (v6 & 0x40) == 0 )
                  {
                    v23 = *v4;
                    goto LABEL_90;
                  }
                  v23 = (__int16)*v4;
                }
                else
                {
                  if ( (v6 & 0x40) == 0 )
                  {
                    v23 = *(unsigned int *)v4;
                    goto LABEL_90;
                  }
                  v23 = *(int *)v4;
                }
LABEL_87:
                if ( v23 < 0 )
                {
                  v23 = -v23;
                  v6 |= 0x100u;
                }
                goto LABEL_90;
              }
LABEL_44:
              v13 = *(wchar_t **)v4;
              v26 = v8;
              if ( v8 == -1 )
                v26 = 0x7FFFFFFF;
              LODWORD(v12) = 0;
              v62 = v4 + 4;
              if ( (v6 & 0x20) != 0 )
              {
                v27 = (const char *)v13;
                if ( !v13 )
                {
                  v13 = (wchar_t *)"(null)";
                  v27 = "(null)";
                }
                if ( v26 > 0 )
                {
                  do
                  {
                    if ( !*v27 )
                      break;
                    ++v27;
                    LODWORD(v12) = v12 + 1;
                  }
                  while ( (int)v12 < v26 );
                }
              }
              else
              {
                v58 = 1;
                v31 = L"(null)";
                if ( v13 )
                  v31 = v13;
                v13 = (wchar_t *)v31;
                while ( v26 )
                {
                  --v26;
                  if ( !*v31 )
                    break;
                  ++v31;
                }
                LODWORD(v12) = v31 - v13;
              }
              goto LABEL_106;
            }
            v8 = 16;
            v6 |= 0x8000u;
LABEL_75:
            v30 = 7;
LABEL_76:
            v65 = v30;
            if ( (v6 & 0x80u) != 0 )
            {
              v61[0] = 48;
              v61[1] = v30 + 81;
              v9 = 2;
            }
            v22 = 16LL;
            goto LABEL_27;
          }
          v62 = v4 + 4;
          v46 = *(_WORD **)v4;
          if ( !get_printf_count_output() )
            goto LABEL_195;
          if ( (v6 & 0x20) != 0 )
            *v46 = v11;
          else
            *(_DWORD *)v46 = v11;
          v9 = v54;
          v7 = v56;
          v63 = 1;
        }
LABEL_138:
        v10 = *v5;
        v4 = v62;
      }
      while ( *v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_195:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
