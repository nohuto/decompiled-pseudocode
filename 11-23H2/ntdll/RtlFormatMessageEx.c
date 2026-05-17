/*
 * XREFs of RtlFormatMessageEx @ 0x180053BC0
 * Callers:
 *     RtlFormatMessage @ 0x18008EC20 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x180054298 (RtlStringCchPrintfExW.c)
 *     RtlStringCopyWorkerW @ 0x180054438 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        unsigned __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        __int16 *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  char v11; // r12
  unsigned int v12; // r9d
  unsigned __int64 v13; // r8
  int v14; // r13d
  unsigned int v15; // r15d
  __int16 *v16; // rbx
  __int16 *v17; // rsi
  unsigned __int16 *v18; // r14
  __int16 v19; // ax
  _DWORD *v20; // rdx
  int v22; // ecx
  __int16 *v23; // rdx
  int v24; // r12d
  unsigned __int16 v25; // ax
  int v26; // r15d
  __int64 v27; // r12
  unsigned int v28; // r10d
  int v29; // r8d
  unsigned __int16 *v30; // r8
  char v31; // dl
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int16 v35; // ax
  __int64 *v36; // r15
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rax
  unsigned __int16 *v41; // r11
  __int64 v42; // r9
  __int64 v43; // r8
  int v44; // eax
  unsigned __int16 *v45; // r14
  unsigned __int16 v46; // cx
  char *v47; // rax
  __int64 *v48; // rcx
  unsigned int v49; // eax
  __int64 *v50; // rcx
  unsigned int v51; // ecx
  __int64 v52; // rsi
  __int64 v53; // rax
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
  __int64 *v69; // rcx
  __int16 *v70; // rdx
  __int16 *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbx
  _WORD *v74; // rsi
  _WORD *v75; // rbx
  __int64 v76; // [rsp+38h] [rbp-D0h]
  unsigned int v79; // [rsp+5Ch] [rbp-ACh]
  int v80; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v81; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v82; // [rsp+70h] [rbp-98h]
  __int64 *v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-60h]
  __int16 *v89; // [rsp+B0h] [rbp-58h]
  unsigned __int16 *v90; // [rsp+B8h] [rbp-50h]
  __int64 v91; // [rsp+C0h] [rbp-48h]
  _QWORD v92[200]; // [rsp+C8h] [rbp-40h]
  unsigned __int16 v93; // [rsp+708h] [rbp+600h] BYREF
  _WORD v94[30]; // [rsp+70Ah] [rbp+602h] BYREF
  char v95; // [rsp+746h] [rbp+63Eh] BYREF

  v10 = a10;
  v11 = a3;
  v12 = a2;
  v91 = a9;
  v13 = (unsigned __int64)a7;
  v14 = a8 >> 1;
  v90 = a1;
  v84 = a6;
  v88 = a10;
  v79 = 0;
  if ( a10 && (*(_DWORD *)a10 & 1) != 0 )
  {
    v15 = *(_DWORD *)(a10 + 4);
    *(_DWORD *)a10 &= ~1u;
    v17 = 0LL;
    v80 = v15;
    v18 = &a1[*(_QWORD *)(a10 + 8)];
    v82 = v18;
    v16 = &a7[*(_QWORD *)(a10 + 16)];
    v53 = *(_QWORD *)(a10 + 24);
    if ( v53 != -1 )
      v17 = &a7[v53];
    v14 -= *(_DWORD *)(a10 + 16);
    if ( !a5 && a6 )
      *a6 = *(_QWORD *)(a10 + 32);
    if ( (*(_DWORD *)a10 & 2) != 0 )
    {
      v81 = v18;
      *(_DWORD *)a10 &= ~2u;
      goto LABEL_150;
    }
  }
  else
  {
    v15 = 0;
    v16 = a7;
    v17 = 0LL;
    v80 = 0;
    v18 = a1;
    v82 = a1;
    if ( !a5 && a6 && a10 )
      *(_QWORD *)(a10 + 32) = *a6;
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
            return 3221225485LL;
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
              if ( (v15 & 7) != 0 )
                v34 = (v15 + 7) & 0xFFFFFFF8;
              else
                v34 = v15 + 8;
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
              return 3221225485LL;
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
            v47 = (char *)v94;
            while ( v46 )
            {
              if ( v47 >= &v95 )
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
              v47 = (char *)v30;
              v46 = *v45;
              if ( *v45 == 33 )
                goto LABEL_79;
            }
            return 3221225485LL;
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
        if ( !a3 )
        {
          v36 = v84;
          if ( !v84 || v28 + (unsigned int)v27 >= 0xC8 )
            return 3221225485LL;
          if ( !a4 )
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
              if ( a5 )
              {
                v40 = *v36++;
              }
              else
              {
                v48 = (__int64 *)*v36;
                *v36 += 8LL;
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
          v41 = (unsigned __int16 *)v92[v27];
          v42 = 0LL;
          v43 = 0LL;
          v81 = v41;
          if ( v28 )
          {
            if ( a5 )
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
              v50 = (__int64 *)*v36;
              *v36 += 8LL;
              v42 = *v50;
              v51 = v79;
            }
            if ( v28 > 1 )
            {
              v68 = v51;
              v79 = v51 + 1;
              if ( a5 )
              {
                v43 = *v36;
                v84 = v36 + 1;
              }
              else
              {
                v69 = (__int64 *)*v36;
                *v36 += 8LL;
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
        v13 = (unsigned __int64)a7;
        if ( v32 < 0 )
          goto LABEL_95;
        v33 = (v85 - (__int64)v16) >> 1;
        v14 -= v33;
        if ( v14 < 0 )
          goto LABEL_95;
        v23 = v89;
        v12 = a2;
        v11 = a3;
        v16 += (int)v33;
LABEL_36:
        if ( v23 )
        {
          v15 = v16 - v23 + v80;
          goto LABEL_14;
        }
LABEL_67:
        v17 = 0LL;
        v15 = 0;
LABEL_14:
        v80 = v15;
        v82 = v18;
        if ( v12 - 1 <= 0xFFFFFFFD && v15 >= v12 )
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
            if ( (unsigned __int64)v17 > v13 )
            {
              do
              {
                v71 = v17 - 1;
                if ( *(v17 - 1) != 32 && *v71 != 9 )
                  break;
                --v17;
              }
              while ( (unsigned __int64)v71 > v13 );
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
            v15 = v73;
            v80 = v73;
            memmove(v17 + 2, v70, 2 * v73);
            v12 = a2;
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
                *(_DWORD *)v10 |= 2u;
LABEL_96:
                *(_DWORD *)(v10 + 4) = v80;
                *(_QWORD *)(v10 + 8) = v82 - v90;
                *(_QWORD *)(v10 + 16) = (__int64)((__int64)v16 - v13) >> 1;
                if ( v17 )
                  v52 = (__int64)((__int64)v17 - v13) >> 1;
                else
                  v52 = -1LL;
                *(_DWORD *)v10 |= 1u;
                *(_QWORD *)(v10 + 24) = v52;
              }
              return 2147483653LL;
            }
            v15 = 0;
            *v16 = 13;
            v75 = v16 + 1;
            v80 = 0;
            *v75 = 10;
          }
          v13 = (unsigned __int64)a7;
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
          ++v15;
          goto LABEL_14;
        }
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_95;
        v15 = 0;
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
    return 2147483653LL;
  }
  v20 = (_DWORD *)v91;
  *v16 = 0;
  if ( v20 )
    *v20 = 2 * ((__int64)((__int64)v16 - v13 + 2) >> 1);
  return 0LL;
}
