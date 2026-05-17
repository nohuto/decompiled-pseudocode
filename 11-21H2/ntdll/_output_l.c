/*
 * XREFs of _output_l @ 0x18009A340
 * Callers:
 *     _snprintf @ 0x180094B20 (_snprintf.c)
 *     _vsprintf_l @ 0x18009531C (_vsprintf_l.c)
 *     _vsnprintf_l @ 0x18009551C (_vsnprintf_l.c)
 *     sprintf @ 0x180098360 (sprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     write_char @ 0x18009AB8C (write_char.c)
 *     write_multi_char @ 0x18009ABDC (write_multi_char.c)
 *     write_string @ 0x18009AC34 (write_string.c)
 *     _get_printf_count_output @ 0x18009DB58 (_get_printf_count_output.c)
 *     wctomb_s @ 0x18009DC28 (wctomb_s.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, int *a4)
{
  char *v5; // r12
  __int64 v6; // r10
  int v7; // edi
  int v8; // r8d
  int v9; // esi
  int v10; // r14d
  int v11; // r11d
  int v12; // r15d
  char v13; // r9
  wchar_t *v14; // rbx
  int v15; // ecx
  char *v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  unsigned __int16 *v26; // rdx
  const wchar_t *v27; // rax
  int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  char *v31; // rbx
  char v32; // r14
  int v33; // eax
  unsigned __int64 v34; // rdx
  char v35; // al
  int v36; // eax
  unsigned int v37; // r15d
  unsigned int v38; // r14d
  __int64 v39; // rcx
  __int64 v40; // r15
  int v41; // esi
  wchar_t *v42; // r15
  wchar_t v43; // r9
  __int64 v44; // rcx
  wchar_t *v45; // rsi
  char v46; // cl
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // r8d
  int v51; // eax
  int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v55[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v56; // [rsp+3Ch] [rbp-C4h]
  int v57; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+44h] [rbp-BCh]
  int SizeConverted; // [rsp+48h] [rbp-B8h] BYREF
  int v60; // [rsp+4Ch] [rbp-B4h]
  __int64 v61; // [rsp+50h] [rbp-B0h]
  int v62; // [rsp+58h] [rbp-A8h]
  int v63; // [rsp+5Ch] [rbp-A4h]
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  char *v65; // [rsp+68h] [rbp-98h]
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h] BYREF
  char v68; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v69[8]; // [rsp+270h] [rbp+170h] BYREF

  v61 = a1;
  v5 = a2;
  v62 = 0;
  v6 = a1;
  v58 = 0;
  v7 = 0;
  v57 = 0;
  v8 = 0;
  v53 = 0;
  v9 = 0;
  v56 = 0;
  v10 = 0;
  v60 = 0;
  v11 = 0;
  if ( a1 && a2 )
  {
    v12 = 0;
    v54 = 0;
    SizeConverted = 0;
    v63 = 0;
    v13 = *a2;
    if ( *a2 )
    {
      v14 = (wchar_t *)v65;
      do
      {
        ++v5;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v13 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v13 - 32] & 0xF;
        v16 = _lookuptable;
        v17 = _lookuptable[8 * v15 + v63] >> 4;
        v63 = v17;
        if ( !v17 )
        {
          v49 = 0LL;
          goto LABEL_195;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v9 = -1;
          v56 = 0;
          v57 = -1;
          v11 = 0;
          v8 = 0;
          v58 = 0;
          v10 = 0;
          v53 = 0;
          v7 = 0;
          v60 = 0;
          goto LABEL_198;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          switch ( v13 )
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
          goto LABEL_198;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( v13 == 42 )
          {
            v50 = *a4;
            a4 += 2;
            if ( v50 < 0 )
              v7 |= 4u;
            v51 = v50;
            v8 = -v50;
            if ( v51 >= 0 )
              v8 = *(a4 - 2);
          }
          else
          {
            v8 = v13 + 2 * (5 * v8 - 24);
          }
          v58 = v8;
          goto LABEL_198;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v9 = 0;
          v57 = 0;
          goto LABEL_198;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = (unsigned int)(v22 - 1);
          if ( (_DWORD)v23 )
          {
            if ( (_DWORD)v23 == 1 )
            {
              if ( v13 <= 105 )
              {
                if ( v13 == 105 )
                  goto LABEL_25;
                if ( v13 == 67 )
                {
                  if ( (v7 & 0x830) == 0 )
                    v7 |= 0x800u;
                  goto LABEL_51;
                }
                if ( v13 != 83 )
                {
                  if ( v13 != 88 )
                  {
                    if ( v13 == 90 )
                    {
                      v26 = *(unsigned __int16 **)a4;
                      a4 += 2;
                      if ( v26 && (v14 = (wchar_t *)*((_QWORD *)v26 + 1)) != 0LL )
                      {
                        if ( v26[1] < *v26 )
                          goto LABEL_200;
                        v23 = *v26;
                        if ( (v7 & 0x800) != 0 )
                        {
                          if ( (*v26 & 1) != 0 || ((unsigned __int8)v14 & 1) != 0 )
                            goto LABEL_200;
                          v60 = 1;
                          v23 = (unsigned int)v23 >> 1;
                        }
                        else
                        {
                          v60 = 0;
                        }
                      }
                      else
                      {
                        v23 = -1LL;
                        v14 = (wchar_t *)"(null)";
                        do
                          ++v23;
                        while ( aNull[v23] );
                      }
                      SizeConverted = v23;
                      goto LABEL_111;
                    }
                    if ( v13 != 99 )
                    {
                      if ( v13 == 100 )
                      {
LABEL_25:
                        v7 |= 0x40u;
                        goto LABEL_26;
                      }
LABEL_111:
                      if ( v11 )
                        goto LABEL_197;
                      if ( (v7 & 0x40) == 0 )
                        goto LABEL_120;
                      if ( (v7 & 0x100) != 0 )
                      {
                        v55[0] = 45;
                        goto LABEL_117;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v55[0] = 43;
                        goto LABEL_117;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v55[0] = 32;
LABEL_117:
                        v37 = 1;
                        v53 = 1;
                      }
                      else
                      {
LABEL_120:
                        v37 = v53;
                      }
                      v38 = v58 - SizeConverted - v37;
                      if ( (v7 & 0xC) == 0 )
                      {
                        LOBYTE(v23) = 32;
                        write_multi_char(v23, v38, v61, &v54);
                      }
                      write_string(v55, v37, v61, &v54);
                      v40 = v61;
                      if ( (v7 & 0xC) == 8 )
                      {
                        LOBYTE(v39) = 48;
                        write_multi_char(v39, v38, v61, &v54);
                      }
                      v41 = SizeConverted;
                      if ( v60 && SizeConverted > 0 )
                      {
                        v42 = v14;
                        while ( 1 )
                        {
                          v43 = *v42++;
                          --v41;
                          if ( wctomb_s(&v64, v69, 6uLL, v43) || !v64 )
                            break;
                          write_string(v69, (unsigned int)v64, v61, &v54);
                          if ( !v41 )
                            goto LABEL_134;
                        }
                        v12 = -1;
                        v54 = -1;
                      }
                      else
                      {
                        write_string(v14, (unsigned int)SizeConverted, v40, &v54);
LABEL_134:
                        v12 = v54;
                      }
                      if ( v12 >= 0 && (v7 & 4) != 0 )
                      {
                        LOBYTE(v44) = 32;
                        write_multi_char(v44, v38, v61, &v54);
                        v12 = v54;
                      }
                      v9 = v57;
                      v10 = v53;
                      goto LABEL_196;
                    }
LABEL_51:
                    a4 += 2;
                    if ( (v7 & 0x810) != 0 )
                    {
                      if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4)) )
                      {
                        v11 = 1;
                        v56 = 1;
                      }
                      else
                      {
                        v11 = v56;
                      }
                    }
                    else
                    {
                      MbCh[0] = *((_BYTE *)a4 - 8);
                      SizeConverted = 1;
                    }
                    v14 = (wchar_t *)MbCh;
                    goto LABEL_111;
                  }
LABEL_77:
                  v28 = 7;
LABEL_78:
                  v62 = v28;
                  if ( (v7 & 0x80u) != 0 )
                  {
                    v55[0] = 48;
                    v55[1] = v28 + 81;
                    v10 = 2;
                  }
                  v24 = 16LL;
                  goto LABEL_27;
                }
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x800u;
LABEL_43:
                v14 = *(wchar_t **)a4;
                v23 = (unsigned int)v9;
                if ( v9 == -1 )
                  v23 = 0x7FFFFFFFLL;
                a4 += 2;
                if ( (v7 & 0x810) != 0 )
                {
                  v27 = v14;
                  if ( !v14 )
                  {
                    v14 = L"(null)";
                    v27 = L"(null)";
                  }
                  v60 = 1;
                  while ( (_DWORD)v23 )
                  {
                    v23 = (unsigned int)(v23 - 1);
                    if ( !*v27 )
                      break;
                    ++v27;
                  }
                  v29 = v27 - v14;
                }
                else
                {
                  v29 = (__int64)"(null)";
                  if ( v14 )
                    v29 = (__int64)v14;
                  v14 = (wchar_t *)v29;
                  while ( (_DWORD)v23 )
                  {
                    v23 = (unsigned int)(v23 - 1);
                    if ( !*(_BYTE *)v29 )
                      break;
                    ++v29;
                  }
                  LODWORD(v29) = v29 - (_DWORD)v14;
                }
                SizeConverted = v29;
                goto LABEL_111;
              }
              switch ( v13 )
              {
                case 'n':
                  v45 = *(wchar_t **)a4;
                  a4 += 2;
                  if ( !get_printf_count_output() )
                    goto LABEL_200;
                  if ( (v7 & 0x20) != 0 )
                    *v45 = v12;
                  else
                    *(_DWORD *)v45 = v12;
                  v9 = v57;
                  v11 = 1;
                  v56 = 1;
                  goto LABEL_197;
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
                  goto LABEL_43;
              }
              if ( v13 != 117 )
              {
                if ( v13 != 120 )
                  goto LABEL_111;
                v28 = 39;
                goto LABEL_78;
              }
LABEL_26:
              v24 = 10LL;
LABEL_27:
              a4 += 2;
              if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
              {
                v25 = *((_QWORD *)a4 - 1);
                goto LABEL_87;
              }
              if ( (v7 & 0x20) != 0 )
              {
                if ( (v7 & 0x40) != 0 )
                {
                  v25 = *((__int16 *)a4 - 4);
                  goto LABEL_91;
                }
                v25 = *((unsigned __int16 *)a4 - 4);
LABEL_87:
                if ( (v7 & 0x40) != 0 )
                {
LABEL_91:
                  if ( v25 < 0 )
                  {
                    v25 = -v25;
                    v7 |= 0x100u;
                  }
                }
              }
              else
              {
                if ( (v7 & 0x40) != 0 )
                {
                  v25 = *(a4 - 2);
                  goto LABEL_91;
                }
                v25 = (unsigned int)*(a4 - 2);
              }
              v30 = (unsigned int)v25;
              if ( (v7 & 0x9000) != 0 )
                v30 = v25;
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
              v31 = &v68;
              v23 = v10 & (unsigned int)-(v30 != 0);
              v32 = v62;
              v53 = v23;
              while ( 1 )
              {
                v33 = v9--;
                if ( v33 <= 0 && !v30 )
                  break;
                v34 = v30 % v24;
                v30 /= v24;
                v35 = v34 + 48;
                if ( (int)v34 + 48 > 57 )
                  v35 += v32;
                *v31-- = v35;
              }
              v57 = v9;
              v36 = (unsigned int)&v67 + 367 - (_DWORD)v31;
              v14 = (wchar_t *)(v31 + 1);
              SizeConverted = v36;
              v10 = v23;
              if ( (v7 & 0x200) != 0 )
              {
                if ( !v36 || (v53 = v23, *(_BYTE *)v14 != 48) )
                {
                  v14 = (wchar_t *)((char *)v14 - 1);
                  v53 = v23;
                  SizeConverted = v36 + 1;
                  v10 = v23;
                  *(_BYTE *)v14 = 48;
                }
              }
              v11 = v56;
              goto LABEL_111;
            }
          }
          else
          {
            switch ( v13 )
            {
              case 'I':
                goto LABEL_151;
              case 'h':
                v7 |= 0x20u;
                break;
              case 'j':
                goto LABEL_151;
              case 'l':
                v46 = *v5;
                if ( *v5 == 108 )
                  ++v5;
                v47 = 4096;
                if ( v46 != 108 )
                  v47 = 16;
                v7 |= v47;
                break;
              case 't':
                goto LABEL_151;
              case 'w':
                v7 |= 0x800u;
                break;
              case 'z':
LABEL_151:
                v7 |= 0x8000u;
                if ( v13 == 73 )
                {
                  if ( *v5 == 54 )
                  {
                    if ( v5[1] != 52 )
                      goto LABEL_166;
                    v5 += 2;
                  }
                  else
                  {
                    if ( *v5 != 51 || v5[1] != 50 )
                    {
LABEL_166:
                      LOBYTE(v16) = *v5 - 88;
                      if ( (unsigned __int8)v16 <= 0x20u )
                      {
                        v48 = 0x120821001LL;
                        if ( _bittest64(&v48, (unsigned __int64)v16) )
                          break;
                      }
                      v49 = 0LL;
                      v63 = 0;
LABEL_195:
                      v60 = 0;
                      LOBYTE(v49) = v13;
                      write_char(v49, v6, &v54);
                      v12 = v54;
LABEL_196:
                      v11 = v56;
LABEL_197:
                      v8 = v58;
                      v6 = v61;
                      break;
                    }
                    v5 += 2;
                    v7 &= ~0x8000u;
                  }
                }
                else if ( v13 != 106 )
                {
                  goto LABEL_166;
                }
                break;
            }
          }
        }
        else
        {
          if ( v13 != 42 )
          {
            v9 = v13 + 2 * (5 * v9 - 24);
            goto LABEL_173;
          }
          v9 = *a4;
          a4 += 2;
          v57 = v9;
          if ( v9 < 0 )
          {
            v9 = -1;
LABEL_173:
            v57 = v9;
          }
        }
LABEL_198:
        v13 = *v5;
      }
      while ( *v5 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_200:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
