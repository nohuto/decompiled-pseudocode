/*
 * XREFs of RtlFormatMessageEx @ 0x1409B9B48
 * Callers:
 *     PiGetDeviceRegProperty @ 0x140793418 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140954DC8 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x1409B9AF0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14022B740 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x14034E1C0 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  va_list *v10; // r11
  unsigned int v11; // r12d
  BOOLEAN v12; // r14
  unsigned int v13; // esi
  ULONG v15; // r9d
  PWSTR v16; // r8
  PWSTR v17; // rbx
  signed int v18; // r15d
  BOOLEAN v19; // r10
  PWSTR v20; // r13
  WCHAR v21; // ax
  PWSTR v22; // rcx
  int v23; // ecx
  PWSTR v24; // rdx
  unsigned int v25; // r14d
  unsigned int v26; // edx
  WCHAR v27; // ax
  unsigned int v28; // edx
  unsigned int v29; // esi
  __int64 v30; // r14
  va_list v31; // r9
  NTSTRSAFE_PWSTR v32; // rdx
  PWSTR v33; // rdi
  char v34; // r8
  WCHAR v35; // cx
  NTSTRSAFE_PWSTR v36; // rax
  unsigned int v37; // eax
  int v38; // ecx
  NTSTATUS v39; // eax
  char *v40; // rcx
  __int16 v41; // ax
  unsigned int v42; // eax
  int v43; // edx
  __int64 v44; // rdx
  signed __int64 v45; // r8
  __int16 v46; // ax
  unsigned int v47; // eax
  int v48; // edx
  signed __int64 v49; // r8
  __int16 v50; // ax
  char *v51; // rax
  unsigned int v52; // esi
  unsigned int v53; // r8d
  __int64 v54; // rax
  _QWORD *v55; // rcx
  wchar_t *v56; // r10
  va_list v57; // r8
  __int64 v58; // rax
  va_list *v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // esi
  va_list *v62; // rcx
  __int64 v63; // rax
  __int16 v64; // ax
  PWSTR v65; // rdx
  PWSTR v66; // rcx
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rbx
  _WORD *v70; // r13
  _WORD *v71; // rbx
  PULONG v73; // rdx
  __int64 v74; // [rsp+38h] [rbp-D0h]
  unsigned int v77; // [rsp+5Ch] [rbp-ACh]
  unsigned int v78; // [rsp+60h] [rbp-A8h]
  va_list *v79; // [rsp+68h] [rbp-A0h]
  unsigned int v80; // [rsp+70h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v83; // [rsp+80h] [rbp-88h] BYREF
  int v84; // [rsp+88h] [rbp-80h]
  int v85; // [rsp+8Ch] [rbp-7Ch]
  int v86; // [rsp+90h] [rbp-78h]
  PWSTR v87; // [rsp+98h] [rbp-70h]
  __int64 v88; // [rsp+A0h] [rbp-68h]
  PWSTR v89; // [rsp+A8h] [rbp-60h]
  PULONG v90; // [rsp+B0h] [rbp-58h]
  _QWORD v91[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v93[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  wchar_t v94[9]; // [rsp+736h] [rbp+62Eh] BYREF

  v10 = Arguments;
  v11 = 0;
  v12 = IgnoreInserts;
  v13 = 0;
  v15 = MaximumWidth;
  v16 = Buffer;
  v90 = ReturnLength;
  v17 = Buffer;
  v79 = Arguments;
  v87 = Buffer;
  ppszDestEnd = 0LL;
  v83 = 0LL;
  v77 = 0;
  v18 = Length >> 1;
  v78 = 0;
  v84 = 37;
  v88 = 8LL;
  v85 = 10;
  v86 = 32;
LABEL_2:
  v19 = ArgumentsAreAnArray;
LABEL_3:
  v20 = 0LL;
  while ( 1 )
  {
    v21 = *MessageFormat;
    v22 = v17;
    if ( !*MessageFormat )
      break;
    ++MessageFormat;
    if ( v21 != (_WORD)v84 )
    {
      if ( v21 == 13 )
      {
        if ( *MessageFormat != 10 )
          goto LABEL_111;
      }
      else
      {
        if ( v21 != (_WORD)v85 )
        {
LABEL_113:
          if ( --v18 < 0 )
            return -2147483643;
          *v17 = v21;
          ++v13;
          ++v17;
          if ( v21 != (_WORD)v86 )
            v22 = v20;
          v20 = v22;
          goto LABEL_117;
        }
        if ( *MessageFormat != 13 )
        {
LABEL_111:
          if ( !v15 )
          {
            v18 -= 2;
            if ( v18 < 0 )
              return -2147483643;
            v13 = 0;
            *(_DWORD *)v17 = 655373;
            v78 = 0;
            v17 += 2;
            goto LABEL_3;
          }
          v20 = v17;
          v21 = 32;
          goto LABEL_113;
        }
      }
      ++MessageFormat;
      goto LABEL_111;
    }
    v23 = *MessageFormat;
    v24 = v17;
    v89 = v17;
    if ( (unsigned __int16)(v23 - 49) > (unsigned __int16)v88 )
    {
      if ( (_WORD)v23 == 48 )
        break;
      if ( !(_WORD)v23 )
        return -1073741811;
      switch ( v23 )
      {
        case 'r':
          if ( --v18 < 0 )
            return -2147483643;
          *v17++ = 13;
          ++MessageFormat;
LABEL_103:
          v20 = 0LL;
          v13 = 0;
          goto LABEL_117;
        case 'n':
          v18 -= 2;
          if ( v18 < 0 )
            return -2147483643;
          *(_DWORD *)v17 = 655373;
          v17 += 2;
          ++MessageFormat;
          goto LABEL_103;
        case 't':
          if ( --v18 < 0 )
            return -2147483643;
          if ( (v13 & 7) != 0 )
            v13 = (v13 + 7) & 0xFFFFFFF8;
          else
            v13 += 8;
          v64 = 9;
          goto LABEL_91;
        case 'b':
          if ( --v18 < 0 )
            return -2147483643;
          v64 = 32;
LABEL_91:
          v20 = v17;
          *v17 = v64;
LABEL_100:
          ++v17;
          break;
        default:
          if ( !v12 )
          {
            if ( --v18 < 0 )
              return -2147483643;
            *v17 = v23;
            goto LABEL_100;
          }
          v18 -= 2;
          if ( v18 < 0 )
            return -2147483643;
          *v17 = 37;
          v17[1] = *MessageFormat;
          v17 += 2;
          break;
      }
      ++MessageFormat;
      goto LABEL_102;
    }
    ++MessageFormat;
    v25 = v23 - 48;
    v26 = *MessageFormat;
    v27 = v26;
    if ( (unsigned __int16)v26 >= 0x30u && v26 <= 0x39 )
    {
      ++MessageFormat;
      v25 = v26 + 2 * (5 * v25 - 24);
      v28 = *MessageFormat;
      v27 = v28;
      if ( (unsigned __int16)v28 >= 0x30u && v28 <= 0x39 )
      {
        ++MessageFormat;
        v25 = v28 + 2 * (5 * v25 - 24);
        v27 = *MessageFormat;
        if ( *MessageFormat >= 0x30u && *MessageFormat <= 0x39u )
          return -1073741811;
      }
    }
    v29 = v25;
    v80 = 0;
    v30 = v25 - 1;
    if ( v27 == 33 )
    {
      v31 = 0LL;
      v32 = v93;
      v33 = MessageFormat + 1;
      ppszDestEnd = v93;
      v34 = 0;
      pszDest = 37;
      v35 = *v33;
      if ( *v33 != 33 )
      {
        v36 = v93;
        while ( v35 )
        {
          if ( v36 >= v94 )
            break;
          if ( v35 == 42 )
          {
            v37 = v11++;
            v80 = v11;
            if ( v37 > 1 )
              break;
          }
          ++v33;
          *v32++ = v35;
          v31 = 0LL;
          ppszDestEnd = v32;
          v36 = v32;
          v35 = *v33;
          if ( *v33 == 33 )
            goto LABEL_21;
        }
        return -1073741811;
      }
LABEL_21:
      MessageFormat = v33 + 1;
      *v32 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v32 = ppszDestEnd;
      v34 = 1;
      v10 = v79;
      v31 = 0LL;
      v19 = ArgumentsAreAnArray;
    }
    if ( !IgnoreInserts )
    {
      if ( !v10 || v11 + (unsigned int)v30 >= 0xC8 )
        return -1073741811;
      if ( ArgumentsAreAnsi )
      {
        v40 = (char *)(v32 - 1);
        v41 = *(v32 - 1);
        switch ( v41 )
        {
          case 'c':
            v42 = *(v32 - 2);
            LOWORD(v42) = v42 - 104;
            if ( (unsigned __int16)v42 > 0xFu || (v43 = 32785, !_bittest(&v43, v42)) )
            {
              v44 = 3LL;
              v45 = (char *)L"hc" - v40;
              do
              {
                if ( v44 == -2147483643 )
                  break;
                v46 = *(_WORD *)&v40[v45];
                if ( !v46 )
                  break;
                *(_WORD *)v40 = v46;
                v40 += 2;
                --v44;
              }
              while ( v44 );
              goto LABEL_51;
            }
            break;
          case 's':
            v47 = *(v32 - 2);
            LOWORD(v47) = v47 - 104;
            if ( (unsigned __int16)v47 > 0xFu || (v48 = 32785, !_bittest(&v48, v47)) )
            {
              v44 = 3LL;
              v49 = (char *)L"hs" - v40;
              do
              {
                if ( v44 == -2147483643 )
                  break;
                v50 = *(_WORD *)&v40[v49];
                if ( !v50 )
                  break;
                *(_WORD *)v40 = v50;
                v40 += 2;
                --v44;
              }
              while ( v44 );
LABEL_51:
              v51 = v40 - 2;
              if ( v44 )
                v51 = v40;
              *(_WORD *)v51 = 0;
            }
            break;
          case 'S':
            *(_WORD *)v40 = 115;
            break;
          case 'C':
            *(_WORD *)v40 = 99;
            break;
        }
      }
      v52 = v77;
      if ( (unsigned int)v30 >= v77 )
      {
        do
        {
          v53 = v52 + 1;
          if ( v19 )
          {
            v54 = (__int64)*v10++;
          }
          else
          {
            v55 = *v10;
            *v10 += 8;
            v54 = *v55;
          }
          v91[v52++] = v54;
        }
        while ( v53 <= (unsigned int)v30 );
        v11 = v80;
        v79 = v10;
        v77 = v53;
      }
      v56 = (wchar_t *)v91[v30];
      ppszDestEnd = v56;
      v57 = 0LL;
      if ( !v11 )
        goto LABEL_72;
      if ( ArgumentsAreAnArray )
      {
        v31 = *v10;
        v58 = v52++;
        v77 = v52;
        v91[v58] = *v10++;
        v79 = v10;
      }
      else
      {
        v59 = (va_list *)*v10;
        *v10 += 8;
        v31 = *v59;
      }
      if ( v11 > 1 )
      {
        v60 = v52;
        v11 = 0;
        v61 = v52 + 1;
        v77 = v61;
        if ( ArgumentsAreAnArray )
        {
          v57 = *v10;
          v79 = v10 + 1;
          v91[v60] = *v10;
        }
        else
        {
          v62 = (va_list *)*v10;
          v77 = v61;
          *v10 += 8;
          v57 = *v62;
          v91[v60] = *v62;
        }
      }
      else
      {
LABEL_72:
        v11 = 0;
      }
      v39 = RtlStringCchPrintfExW(v17, v18, &v83, 0LL, 0, &pszDest, v56, v31, v57);
      goto LABEL_74;
    }
    if ( v34 == 1 )
    {
      v11 = 0;
    }
    else
    {
      v38 = pszDest - 37;
      if ( pszDest == 37 && (v38 = v93[0] - 115, v93[0] == 115) )
      {
        v11 = 0;
        v38 = v93[1];
      }
      else
      {
        v11 = 0;
      }
      if ( v38 )
      {
        LODWORD(v74) = v29;
        v39 = RtlStringCchPrintfExW(v17, v18, &v83, 0LL, 0, L"%%%u!%s!", v74, v93);
        goto LABEL_74;
      }
    }
    LODWORD(v74) = v29;
    v39 = RtlStringCchPrintfExW(v17, v18, &v83, 0LL, 0, L"%%%u", v74);
LABEL_74:
    if ( v39 < 0 )
      return -2147483643;
    v63 = v83 - v17;
    v18 -= v63;
    if ( v18 < 0 )
      return -2147483643;
    v13 = v78;
    v24 = v89;
    v10 = v79;
    v16 = v87;
    v15 = MaximumWidth;
    v19 = ArgumentsAreAnArray;
    v12 = IgnoreInserts;
    v17 += (int)v63;
LABEL_102:
    if ( !v24 )
      goto LABEL_103;
    v13 += v17 - v24;
LABEL_117:
    v78 = v13;
    if ( v15 - 1 <= 0xFFFFFFFD && v13 >= v15 )
    {
      if ( v20 )
      {
        v65 = v20;
        do
        {
          if ( *v65 != 32 && *v65 != 9 )
            break;
          ++v65;
        }
        while ( v65 != v17 );
        v11 = 0;
        if ( v20 > v16 )
        {
          do
          {
            v66 = v20 - 1;
            v67 = *(v20 - 1);
            if ( v67 != 32 && v67 != 9 )
              break;
            --v20;
          }
          while ( v66 > v16 );
        }
        v68 = v65 - v20;
        if ( (_DWORD)v68 == 1 )
        {
          if ( --v18 >= 0 )
            goto LABEL_133;
          return -2147483643;
        }
        if ( (unsigned int)v68 > 2 )
          v18 = v68 + v18 - 2;
LABEL_133:
        v69 = v17 - v65;
        v13 = v69;
        v78 = v69;
        memmove(v20 + 2, v65, 2 * v69);
        v15 = MaximumWidth;
        *v20 = 13;
        v70 = v20 + 1;
        *v70 = 10;
        v71 = &v70[(unsigned int)v69];
      }
      else
      {
        v18 -= 2;
        if ( v18 < 0 )
          return -2147483643;
        *v17 = 13;
        v71 = v17 + 1;
        v13 = 0;
        v78 = 0;
        *v71 = 10;
      }
      v10 = v79;
      v17 = v71 + 1;
      v16 = v87;
      goto LABEL_2;
    }
  }
  if ( v18 < 1 )
    return -2147483643;
  v73 = v90;
  *v17 = 0;
  if ( v73 )
    *v73 = 2 * (((char *)v17 - (char *)v16 + 2) >> 1);
  return 0;
}
