/*
 * XREFs of RtlFormatMessageEx @ 0x180053D20
 * Callers:
 *     RtlFormatMessage @ 0x18008E420 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1800543F8 (RtlStringCchPrintfExW.c)
 *     RtlStringCopyWorkerW @ 0x180054598 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
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
  PPARSE_MESSAGE_CONTEXT v10; // rdi
  BOOLEAN v11; // r12
  ULONG v12; // r9d
  PWSTR v13; // r8
  signed int v14; // r13d
  ULONG cwSavColumn; // r15d
  PWSTR v16; // rbx
  WCHAR *v17; // rsi
  PWSTR v18; // r14
  __int16 v19; // ax
  PULONG v20; // rdx
  int v22; // ecx
  PWSTR v23; // rdx
  int v24; // r12d
  WCHAR v25; // ax
  int v26; // r15d
  __int64 v27; // r12
  unsigned int v28; // r10d
  int v29; // r8d
  WCHAR *v30; // r8
  char v31; // dl
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int16 v35; // ax
  va_list *v36; // r15
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rax
  WCHAR *v41; // r11
  va_list v42; // r9
  va_list v43; // r8
  int v44; // eax
  WCHAR *v45; // r14
  WCHAR v46; // cx
  WCHAR *v47; // rax
  _QWORD *v48; // rcx
  unsigned int v49; // eax
  va_list *v50; // rcx
  unsigned int v51; // ecx
  __int64 v52; // rsi
  SIZE_T iwDstSpace; // rax
  int v54; // ecx
  int v55; // eax
  char *v56; // rcx
  unsigned int v57; // eax
  int v58; // edx
  __int64 v59; // rdx
  char *v60; // r8
  __int16 v61; // ax
  unsigned int v62; // eax
  int v63; // edx
  char *v64; // r8
  __int16 v65; // ax
  char *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  va_list *v69; // rcx
  WCHAR *v70; // rdx
  PWSTR v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbx
  _WORD *v74; // rsi
  _WORD *v75; // rbx
  __int64 v76; // [rsp+38h] [rbp-D0h]
  unsigned int v79; // [rsp+5Ch] [rbp-ACh]
  ULONG v80; // [rsp+60h] [rbp-A8h]
  PWSTR v81; // [rsp+68h] [rbp-A0h]
  PWSTR v82; // [rsp+70h] [rbp-98h]
  va_list *v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h] BYREF
  PPARSE_MESSAGE_CONTEXT v88; // [rsp+A8h] [rbp-60h]
  PWSTR v89; // [rsp+B0h] [rbp-58h]
  PWSTR v90; // [rsp+B8h] [rbp-50h]
  PULONG v91; // [rsp+C0h] [rbp-48h]
  _QWORD v92[200]; // [rsp+C8h] [rbp-40h]
  unsigned __int16 v93; // [rsp+708h] [rbp+600h] BYREF
  _WORD v94[30]; // [rsp+70Ah] [rbp+602h] BYREF
  WCHAR v95[9]; // [rsp+746h] [rbp+63Eh] BYREF

  v10 = ParseContext;
  v11 = IgnoreInserts;
  v12 = MaximumWidth;
  v91 = ReturnLength;
  v13 = Buffer;
  v14 = Length >> 1;
  v90 = MessageFormat;
  v84 = Arguments;
  v88 = ParseContext;
  v79 = 0;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    cwSavColumn = ParseContext->cwSavColumn;
    ParseContext->fFlags &= ~1u;
    v17 = 0LL;
    v80 = cwSavColumn;
    v18 = &MessageFormat[ParseContext->iwSrc];
    v82 = v18;
    v16 = &Buffer[ParseContext->iwDst];
    iwDstSpace = ParseContext->iwDstSpace;
    if ( iwDstSpace != -1LL )
      v17 = &Buffer[iwDstSpace];
    v14 -= LODWORD(ParseContext->iwDst);
    if ( !ArgumentsAreAnArray && Arguments )
      *Arguments = ParseContext->lpvArgStart;
    if ( (ParseContext->fFlags & 2) != 0 )
    {
      v81 = v18;
      ParseContext->fFlags &= ~2u;
      goto LABEL_150;
    }
  }
  else
  {
    cwSavColumn = 0;
    v16 = Buffer;
    v17 = 0LL;
    v80 = 0;
    v18 = MessageFormat;
    v82 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  v81 = v82;
  while ( 1 )
  {
    v19 = *v18;
    if ( !*v18 )
      break;
    ++v18;
    switch ( v19 )
    {
      case 37:
        v22 = *v18;
        v23 = v16;
        v89 = v16;
        if ( (unsigned __int16)(v22 - 49) > 8u )
        {
          if ( (_WORD)v22 == 48 )
            goto LABEL_16;
          if ( !(_WORD)v22 )
            return -1073741811;
          switch ( v22 )
          {
            case 'r':
              if ( --v14 < 0 )
                goto LABEL_95;
              *v16++ = 13;
              goto LABEL_66;
            case 'n':
              v14 -= 2;
              if ( v14 < 0 )
                goto LABEL_95;
              *(_DWORD *)v16 = 655373;
              v16 += 2;
LABEL_66:
              ++v18;
              goto LABEL_67;
            case 't':
              if ( --v14 < 0 )
                goto LABEL_95;
              if ( (cwSavColumn & 7) != 0 )
                v34 = (cwSavColumn + 7) & 0xFFFFFFF8;
              else
                v34 = cwSavColumn + 8;
              v80 = v34;
              v35 = 9;
              goto LABEL_47;
            case 'b':
              if ( --v14 < 0 )
                goto LABEL_95;
              v35 = 32;
LABEL_47:
              v17 = v16;
              *v16 = v35;
LABEL_48:
              ++v16;
              break;
            default:
              if ( !v11 )
              {
                if ( --v14 < 0 )
                  goto LABEL_95;
                *v16 = v22;
                goto LABEL_48;
              }
              v14 -= 2;
              if ( v14 < 0 )
                goto LABEL_95;
              *v16 = 37;
              v16[1] = *v18;
              v16 += 2;
              break;
          }
          ++v18;
          goto LABEL_36;
        }
        ++v18;
        v24 = v22 - 48;
        v25 = *v18;
        if ( *v18 >= 0x30u && v25 <= 0x39u )
        {
          v44 = *v18++;
          v24 = v44 + 2 * (5 * v24 - 24);
          v25 = *v18;
          if ( *v18 >= 0x30u && v25 <= 0x39u )
          {
            v55 = *v18++;
            v24 = v55 + 2 * (5 * v24 - 24);
            v25 = *v18;
            if ( *v18 >= 0x30u && v25 <= 0x39u )
              return -1073741811;
          }
        }
        v26 = v24;
        v86 = 0;
        v27 = (unsigned int)(v24 - 1);
        v28 = 0;
        if ( v25 == 33 )
        {
          v45 = v18 + 1;
          v30 = v94;
          v81 = v94;
          v93 = 37;
          v31 = 0;
          v46 = *v45;
          if ( *v45 != 33 )
          {
            v47 = v94;
            while ( v46 )
            {
              if ( v47 >= v95 )
                break;
              if ( v46 == 42 )
              {
                v49 = v28++;
                if ( v49 > 1 )
                  break;
              }
              ++v45;
              *v30++ = v46;
              v81 = v30;
              v47 = v30;
              v46 = *v45;
              if ( *v45 == 33 )
                goto LABEL_79;
            }
            return -1073741811;
          }
LABEL_79:
          v18 = v45 + 1;
          *v30 = 0;
        }
        else
        {
          v87 = 0LL;
          v29 = RtlStringCopyWorkerW(&v93, 48LL, &v87, L"%s");
          if ( (int)(v29 + 0x80000000) < 0 || v29 == -2147483643 )
          {
            v30 = &v94[v87 - 1];
            v81 = v30;
          }
          else
          {
            v30 = v81;
          }
          v28 = v86;
          v31 = 1;
        }
        if ( !IgnoreInserts )
        {
          v36 = v84;
          if ( !v84 || v28 + (unsigned int)v27 >= 0xC8 )
            return -1073741811;
          if ( !ArgumentsAreAnsi )
            goto LABEL_57;
          v56 = (char *)(v30 - 1);
          if ( *(v30 - 1) == 99 )
          {
            v57 = *(v30 - 2);
            LOWORD(v57) = v57 - 104;
            if ( (unsigned __int16)v57 > 0xFu || (v58 = 32785, !_bittest(&v58, v57)) )
            {
              v59 = 3LL;
              v60 = (char *)("h\x00c" - v56);
              do
              {
                if ( v59 == -2147483643 )
                  break;
                v61 = *(_WORD *)&v56[(_QWORD)v60];
                if ( !v61 )
                  break;
                *(_WORD *)v56 = v61;
                v56 += 2;
                --v59;
              }
              while ( v59 );
              goto LABEL_131;
            }
          }
          else
          {
            switch ( *(_WORD *)v56 )
            {
              case 's':
                v62 = *(v30 - 2);
                LOWORD(v62) = v62 - 104;
                if ( (unsigned __int16)v62 > 0xFu || (v63 = 32785, !_bittest(&v63, v62)) )
                {
                  v59 = 3LL;
                  v64 = (char *)((char *)L"hs" - v56);
                  do
                  {
                    if ( v59 == -2147483643 )
                      break;
                    v65 = *(_WORD *)&v64[(_QWORD)v56];
                    if ( !v65 )
                      break;
                    *(_WORD *)v56 = v65;
                    v56 += 2;
                    --v59;
                  }
                  while ( v59 );
LABEL_131:
                  v66 = v56 - 2;
                  if ( v59 )
                    v66 = v56;
                  *(_WORD *)v66 = 0;
                }
                break;
              case 'S':
                *(_WORD *)v56 = 115;
                break;
              case 'C':
                *(_WORD *)v56 = 99;
                break;
            }
          }
LABEL_57:
          v37 = v79;
          if ( (unsigned int)v27 >= v79 )
          {
            do
            {
              v38 = v37;
              v39 = v37 + 1;
              if ( ArgumentsAreAnArray )
              {
                v40 = (__int64)*v36++;
              }
              else
              {
                v48 = *v36;
                *v36 += 8;
                v40 = *v48;
              }
              v92[v38] = v40;
              v37 = v39;
            }
            while ( v39 <= (unsigned int)v27 );
            v10 = v88;
            v84 = v36;
            v79 = v39;
          }
          v41 = (WCHAR *)v92[v27];
          v42 = 0LL;
          v43 = 0LL;
          v81 = v41;
          if ( v28 )
          {
            if ( ArgumentsAreAnArray )
            {
              v42 = *v36;
              v67 = v37;
              v51 = v37 + 1;
              v79 = v51;
              v92[v67] = *v36++;
              v84 = v36;
            }
            else
            {
              v50 = (va_list *)*v36;
              *v36 += 8;
              v42 = *v50;
              v51 = v79;
            }
            if ( v28 > 1 )
            {
              v68 = v51;
              v79 = v51 + 1;
              if ( ArgumentsAreAnArray )
              {
                v43 = *v36;
                v84 = v36 + 1;
              }
              else
              {
                v69 = (va_list *)*v36;
                *v36 += 8;
                v43 = *v69;
              }
              v92[v68] = v43;
            }
          }
          v32 = RtlStringCchPrintfExW((_DWORD)v16, v14, (unsigned int)&v85, 0, 0, (__int64)&v93, v41, v42, v43);
          goto LABEL_33;
        }
        if ( v31 == 1 )
          goto LABEL_32;
        v54 = v93 - 37;
        if ( v93 == 37 )
        {
          v54 = v94[0] - 115;
          if ( v94[0] == 115 )
            v54 = v94[1];
        }
        if ( !v54 )
        {
LABEL_32:
          LODWORD(v76) = v26;
          v32 = RtlStringCchPrintfExW((_DWORD)v16, v14, (unsigned int)&v85, 0, 0, (__int64)L"%%%u", v76);
        }
        else
        {
          LODWORD(v76) = v26;
          v32 = RtlStringCchPrintfExW((_DWORD)v16, v14, (unsigned int)&v85, 0, 0, (__int64)L"%%%u!%s!", v76, v94);
        }
LABEL_33:
        v13 = Buffer;
        if ( v32 < 0 )
          goto LABEL_95;
        v33 = (v85 - (__int64)v16) >> 1;
        v14 -= v33;
        if ( v14 < 0 )
          goto LABEL_95;
        v23 = v89;
        v12 = MaximumWidth;
        v11 = IgnoreInserts;
        v16 += (int)v33;
LABEL_36:
        if ( v23 )
        {
          cwSavColumn = v16 - v23 + v80;
          goto LABEL_14;
        }
LABEL_67:
        v17 = 0LL;
        cwSavColumn = 0;
LABEL_14:
        v80 = cwSavColumn;
        v82 = v18;
        if ( v12 - 1 <= 0xFFFFFFFD && cwSavColumn >= v12 )
        {
LABEL_150:
          if ( v17 )
          {
            v70 = v17;
            do
            {
              if ( *v70 != 32 && *v70 != 9 )
                break;
              ++v70;
            }
            while ( v70 != v16 );
            v10 = v88;
            if ( v17 > v13 )
            {
              do
              {
                v71 = v17 - 1;
                if ( *(v17 - 1) != 32 && *v71 != 9 )
                  break;
                --v17;
              }
              while ( v71 > v13 );
            }
            v72 = v70 - v17;
            if ( (_DWORD)v72 == 1 )
            {
              if ( --v14 < 0 )
                goto LABEL_161;
            }
            else if ( (unsigned int)v72 > 2 )
            {
              v14 = v72 + v14 - 2;
            }
            v73 = v16 - v70;
            cwSavColumn = v73;
            v80 = v73;
            memmove(v17 + 2, v70, 2 * v73);
            v12 = MaximumWidth;
            *v17 = 13;
            v74 = v17 + 1;
            *v74 = 10;
            v75 = &v74[(unsigned int)v73];
          }
          else
          {
            v14 -= 2;
            if ( v14 < 0 )
            {
LABEL_161:
              if ( v10 )
              {
                v10->fFlags |= 2u;
LABEL_96:
                v10->cwSavColumn = v80;
                v10->iwSrc = v82 - v90;
                v10->iwDst = v16 - v13;
                if ( v17 )
                  v52 = v17 - v13;
                else
                  v52 = -1LL;
                v10->fFlags |= 1u;
                v10->iwDstSpace = v52;
              }
              return -2147483643;
            }
            cwSavColumn = 0;
            *v16 = 13;
            v75 = v16 + 1;
            v80 = 0;
            *v75 = 10;
          }
          v13 = Buffer;
          v17 = 0LL;
          v16 = v75 + 1;
        }
        break;
      case 13:
        if ( *v18 != 10 )
          goto LABEL_22;
LABEL_21:
        ++v18;
        goto LABEL_22;
      case 10:
        if ( *v18 == 13 )
          goto LABEL_21;
LABEL_22:
        if ( v12 )
        {
          v17 = v16;
          v19 = 32;
LABEL_10:
          if ( --v14 < 0 )
            goto LABEL_95;
          *v16 = v19;
          if ( v19 == 32 )
            v17 = v16;
          ++v16;
          ++cwSavColumn;
          goto LABEL_14;
        }
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_95;
        cwSavColumn = 0;
        *(_DWORD *)v16 = 655373;
        v80 = 0;
        v16 += 2;
        v17 = 0LL;
        v82 = v18;
        break;
      default:
        goto LABEL_10;
    }
  }
LABEL_16:
  if ( v14 < 1 )
  {
LABEL_95:
    if ( v10 )
      goto LABEL_96;
    return -2147483643;
  }
  v20 = v91;
  *v16 = 0;
  if ( v20 )
    *v20 = 2 * (((char *)v16 - (char *)v13 + 2) >> 1);
  return 0;
}
