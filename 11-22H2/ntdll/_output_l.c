/*
 * XREFs of _output_l @ 0x180095420
 * Callers:
 *     _snprintf @ 0x18008FAE0 (_snprintf.c)
 *     _vsprintf_l @ 0x1800902EC (_vsprintf_l.c)
 *     _vsnprintf_l @ 0x1800904EC (_vsnprintf_l.c)
 *     sprintf @ 0x180093360 (sprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     write_char @ 0x180095C8C (write_char.c)
 *     write_multi_char @ 0x180095CDC (write_multi_char.c)
 *     write_string @ 0x180095D34 (write_string.c)
 *     _get_printf_count_output @ 0x180098C98 (_get_printf_count_output.c)
 *     wctomb_s @ 0x180098D68 (wctomb_s.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, wchar_t *a4)
{
  wchar_t *v4; // r14
  char *v5; // r12
  __int64 v6; // r11
  int v7; // edi
  int v8; // esi
  int v9; // r13d
  int v10; // r10d
  int v11; // r15d
  char v12; // r9
  char *v13; // rbx
  wchar_t *v14; // r8
  int v15; // ecx
  char *v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 i; // rcx
  unsigned __int64 v24; // r11
  wchar_t *v25; // r14
  __int64 v26; // rax
  unsigned __int16 *v27; // rdx
  const wchar_t *v28; // rax
  errno_t v29; // eax
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // r9
  char v33; // si
  int v34; // eax
  int v35; // r8d
  int v36; // eax
  bool v37; // zf
  unsigned int v38; // r15d
  unsigned int v39; // r14d
  __int64 v40; // rcx
  __int64 v41; // r15
  int v42; // esi
  wchar_t *v43; // r15
  wchar_t v44; // r9
  __int64 v45; // rcx
  _WORD *v46; // rsi
  char v47; // cl
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // esi
  int v52; // ecx
  int v53; // eax
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v57[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v58; // [rsp+3Ch] [rbp-C4h]
  int SizeConverted; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+44h] [rbp-BCh]
  __int64 v61; // [rsp+48h] [rbp-B8h]
  wchar_t *v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+5Ch] [rbp-A4h]
  int v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch]
  int v67; // [rsp+68h] [rbp-98h] BYREF
  char *v68; // [rsp+70h] [rbp-90h]
  char MbCh[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h] BYREF
  char v71; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v72[8]; // [rsp+280h] [rbp+180h] BYREF

  v4 = a4;
  v62 = a4;
  v61 = a1;
  v64 = 0;
  v5 = a2;
  v58 = 0;
  v6 = a1;
  v55 = 0;
  v7 = 0;
  v63 = 0;
  v8 = 0;
  v60 = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 && a2 )
  {
    v11 = 0;
    v56 = 0;
    SizeConverted = 0;
    v65 = 0;
    v12 = *a2;
    if ( *a2 )
    {
      v13 = v68;
      do
      {
        ++v5;
        v14 = v4;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int8)(v12 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v12 - 32] & 0xF;
        v16 = _lookuptable;
        v17 = _lookuptable[8 * v15 + v65] >> 4;
        v65 = v17;
        if ( !v17 )
        {
          v50 = 0LL;
          goto LABEL_193;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v63 = 0;
          v8 = 0;
          v58 = 0;
          v10 = 0;
          v55 = 0;
          v7 = 0;
          v9 = -1;
          v60 = 0;
          goto LABEL_196;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          switch ( v12 )
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
          goto LABEL_196;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( v12 == 42 )
          {
            v51 = *(_DWORD *)v4;
            v62 = v4 + 4;
            v52 = v51;
            if ( v51 < 0 )
              v7 |= 4u;
            v53 = v51;
            v8 = -v51;
            if ( v53 >= 0 )
              v8 = v52;
          }
          else
          {
            v8 = v12 + 2 * (5 * v8 - 24);
          }
          v58 = v8;
          goto LABEL_196;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v9 = 0;
          goto LABEL_196;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          if ( v12 == 42 )
          {
            v9 = *(_DWORD *)v4;
            v62 = v4 + 4;
            if ( v9 < 0 )
              v9 = -1;
          }
          else
          {
            v9 = v12 + 2 * (5 * v9 - 24);
          }
          goto LABEL_196;
        }
        i = (unsigned int)(v22 - 1);
        if ( (_DWORD)i )
        {
          if ( (_DWORD)i == 1 )
          {
            if ( v12 <= 105 )
            {
              if ( v12 == 105 )
                goto LABEL_25;
              if ( v12 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x800u;
                goto LABEL_52;
              }
              if ( v12 != 83 )
              {
                if ( v12 != 88 )
                {
                  if ( v12 == 90 )
                  {
                    v27 = *(unsigned __int16 **)v4;
                    v62 = v4 + 4;
                    if ( v27 && (v13 = (char *)*((_QWORD *)v27 + 1)) != 0LL )
                    {
                      if ( v27[1] < *v27 )
                        goto LABEL_198;
                      i = *v27;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (*v27 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                          goto LABEL_198;
                        v60 = 1;
                        i = (unsigned int)i >> 1;
                      }
                      else
                      {
                        v60 = 0;
                      }
                    }
                    else
                    {
                      i = -1LL;
                      v13 = "(null)";
                      do
                        ++i;
                      while ( aNull[i] );
                    }
                    SizeConverted = i;
                    goto LABEL_110;
                  }
                  if ( v12 != 99 )
                  {
                    if ( v12 == 100 )
                    {
LABEL_25:
                      v7 |= 0x40u;
                      goto LABEL_26;
                    }
LABEL_110:
                    if ( v63 )
                      goto LABEL_195;
                    if ( (v7 & 0x40) == 0 )
                      goto LABEL_119;
                    if ( (v7 & 0x100) != 0 )
                    {
                      v57[0] = 45;
                      goto LABEL_116;
                    }
                    if ( (v7 & 1) != 0 )
                    {
                      v57[0] = 43;
                      goto LABEL_116;
                    }
                    if ( (v7 & 2) != 0 )
                    {
                      v57[0] = 32;
LABEL_116:
                      v38 = 1;
                      v55 = 1;
                    }
                    else
                    {
LABEL_119:
                      v38 = v55;
                    }
                    v39 = v8 - SizeConverted - v38;
                    if ( (v7 & 0xC) == 0 )
                    {
                      LOBYTE(i) = 32;
                      write_multi_char(i, v39, v61, &v56);
                    }
                    write_string(v57, v38, v61, &v56);
                    v41 = v61;
                    if ( (v7 & 0xC) == 8 )
                    {
                      LOBYTE(v40) = 48;
                      write_multi_char(v40, v39, v61, &v56);
                    }
                    v42 = SizeConverted;
                    if ( v60 && SizeConverted > 0 )
                    {
                      v43 = (wchar_t *)v13;
                      while ( 1 )
                      {
                        v44 = *v43++;
                        --v42;
                        if ( wctomb_s(&v67, v72, 6uLL, v44) || !v67 )
                          break;
                        write_string(v72, (unsigned int)v67, v61, &v56);
                        if ( !v42 )
                          goto LABEL_133;
                      }
                      v11 = -1;
                      v56 = -1;
                    }
                    else
                    {
                      write_string(v13, (unsigned int)SizeConverted, v41, &v56);
LABEL_133:
                      v11 = v56;
                    }
                    if ( v11 >= 0 && (v7 & 4) != 0 )
                    {
                      LOBYTE(v45) = 32;
                      write_multi_char(v45, v39, v61, &v56);
                      v11 = v56;
                    }
LABEL_137:
                    v8 = v58;
                    goto LABEL_194;
                  }
LABEL_52:
                  v62 = v4 + 4;
                  if ( (v7 & 0x810) != 0 )
                  {
                    v29 = wctomb_s(&SizeConverted, MbCh, 0x200uLL, *v4);
                    v10 = v55;
                    if ( v29 )
                      v63 = 1;
                  }
                  else
                  {
                    MbCh[0] = *(_BYTE *)v4;
                    SizeConverted = 1;
                  }
                  v13 = MbCh;
                  goto LABEL_110;
                }
LABEL_77:
                v30 = 7;
LABEL_78:
                v64 = v30;
                if ( (v7 & 0x80u) != 0 )
                {
                  v57[0] = 48;
                  v57[1] = v30 + 81;
                  v10 = 2;
                }
                v24 = 16LL;
                goto LABEL_27;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x800u;
LABEL_44:
              v13 = *(char **)v4;
              i = (unsigned int)v9;
              if ( v9 == -1 )
                i = 0x7FFFFFFFLL;
              v62 = v4 + 4;
              if ( (v7 & 0x810) != 0 )
              {
                v28 = (const wchar_t *)v13;
                if ( !v13 )
                {
                  v13 = (char *)L"(null)";
                  v28 = L"(null)";
                }
                v60 = 1;
                while ( (_DWORD)i )
                {
                  i = (unsigned int)(i - 1);
                  if ( !*v28 )
                    break;
                  ++v28;
                }
                v31 = ((char *)v28 - v13) >> 1;
              }
              else
              {
                v31 = (__int64)"(null)";
                if ( v13 )
                  v31 = (__int64)v13;
                v13 = (char *)v31;
                while ( (_DWORD)i )
                {
                  i = (unsigned int)(i - 1);
                  if ( !*(_BYTE *)v31 )
                    break;
                  ++v31;
                }
                LODWORD(v31) = v31 - (_DWORD)v13;
              }
              SizeConverted = v31;
              goto LABEL_110;
            }
            switch ( v12 )
            {
              case 'n':
                v46 = *(_WORD **)v4;
                v62 = v4 + 4;
                if ( !get_printf_count_output() )
                  goto LABEL_198;
                if ( (v7 & 0x20) != 0 )
                  *v46 = v11;
                else
                  *(_DWORD *)v46 = v11;
                v63 = 1;
                goto LABEL_137;
              case 'o':
                v24 = 8LL;
                if ( (v7 & 0x80u) != 0 )
                  v7 |= 0x200u;
                goto LABEL_27;
              case 'p':
                v9 = 16;
                v7 |= 0x8000u;
                goto LABEL_77;
              case 's':
                goto LABEL_44;
            }
            if ( v12 != 117 )
            {
              if ( v12 != 120 )
                goto LABEL_110;
              v30 = 39;
              goto LABEL_78;
            }
LABEL_26:
            v24 = 10LL;
LABEL_27:
            v25 = v4 + 4;
            v62 = v25;
            if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
            {
              v26 = *(_QWORD *)v14;
              if ( (v7 & 0x40) != 0 )
                goto LABEL_89;
LABEL_92:
              v32 = (unsigned int)v26;
              if ( (v7 & 0x9000) != 0 )
                v32 = v26;
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
              v33 = v64;
              v55 = v32 != 0 ? v10 : 0;
              v66 = v55;
              for ( i = (__int64)&v71; ; --i )
              {
                v34 = v9--;
                if ( v34 <= 0 && !v32 )
                  break;
                v35 = v32 % v24 + 48;
                v32 /= v24;
                if ( v35 > 57 )
                  LOBYTE(v35) = v33 + v35;
                *(_BYTE *)i = v35;
              }
              v10 = v66;
              v36 = (unsigned int)&v70 + 383 - i;
              v13 = (char *)(i + 1);
              SizeConverted = v36;
              if ( (v7 & 0x200) != 0 )
              {
                if ( !v36 || (v37 = *v13 == 48, v62 = v25, v55 = v66, !v37) )
                {
                  v13 = (char *)i;
                  v62 = v25;
                  v55 = v66;
                  SizeConverted = v36 + 1;
                  *(_BYTE *)i = 48;
                }
                v8 = v58;
              }
              else
              {
                v8 = v58;
              }
              goto LABEL_110;
            }
            if ( (v7 & 0x20) != 0 )
            {
              if ( (v7 & 0x40) == 0 )
              {
                v26 = *v14;
                goto LABEL_92;
              }
              v26 = (__int16)*v14;
            }
            else
            {
              if ( (v7 & 0x40) == 0 )
              {
                v26 = *(unsigned int *)v14;
                goto LABEL_92;
              }
              v26 = *(int *)v14;
            }
LABEL_89:
            if ( v26 < 0 )
            {
              v26 = -v26;
              v7 |= 0x100u;
            }
            goto LABEL_92;
          }
        }
        else
        {
          switch ( v12 )
          {
            case 'I':
              goto LABEL_150;
            case 'h':
              v7 |= 0x20u;
              break;
            case 'j':
              goto LABEL_150;
            case 'l':
              v47 = *v5;
              if ( *v5 == 108 )
                ++v5;
              v48 = 4096;
              if ( v47 != 108 )
                v48 = 16;
              v7 |= v48;
              break;
            case 't':
              goto LABEL_150;
            case 'w':
              v7 |= 0x800u;
              break;
            case 'z':
LABEL_150:
              v7 |= 0x8000u;
              if ( v12 == 73 )
              {
                if ( *v5 == 54 && v5[1] == 52 )
                {
                  v5 += 2;
                }
                else
                {
                  if ( *v5 != 51 || v5[1] != 50 )
                  {
LABEL_165:
                    LOBYTE(v16) = *v5 - 88;
                    if ( (unsigned __int8)v16 <= 0x20u )
                    {
                      v49 = 0x120821001LL;
                      if ( _bittest64(&v49, (unsigned __int64)v16) )
                        break;
                    }
                    v50 = 0LL;
                    v65 = 0;
LABEL_193:
                    v60 = 0;
                    LOBYTE(v50) = v12;
                    write_char(v50, v6, &v56);
                    v11 = v56;
LABEL_194:
                    v10 = v55;
LABEL_195:
                    v6 = v61;
                    break;
                  }
                  v5 += 2;
                  v7 &= ~0x8000u;
                }
              }
              else if ( v12 != 106 )
              {
                goto LABEL_165;
              }
              break;
          }
        }
LABEL_196:
        v12 = *v5;
        v4 = v62;
      }
      while ( *v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_198:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
