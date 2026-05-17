/*
 * XREFs of RtlFormatMessageEx @ 0x180003870
 * Callers:
 *     RtlFormatMessage @ 0x1800934D0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x180003FA4 (RtlStringCchPrintfExW.c)
 *     RtlStringCopyWorkerW @ 0x180004144 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
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
        _DWORD *a9,
        __int64 a10)
{
  __int64 v10; // rdi
  unsigned int v11; // r13d
  __int64 *v12; // r11
  char v13; // r12
  int v15; // r9d
  unsigned __int64 v16; // r8
  unsigned int v17; // r14d
  __int16 *v18; // rbx
  __int16 *v19; // rsi
  unsigned __int16 *v20; // r15
  __int16 v21; // ax
  __int64 result; // rax
  int v23; // ecx
  __int16 *v24; // rdx
  int v25; // r12d
  unsigned __int16 v26; // ax
  int v27; // r14d
  __int64 v28; // r12
  unsigned int v29; // r13d
  int v30; // r8d
  unsigned __int16 *v31; // r10
  char v32; // r8
  int v33; // eax
  __int64 v34; // rax
  bool v35; // sf
  unsigned int v36; // r14d
  __int16 v37; // ax
  unsigned int v38; // r14d
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned __int16 *v41; // r10
  __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // eax
  unsigned __int16 *v45; // r15
  unsigned __int16 v46; // cx
  char *v47; // rdx
  __int64 v48; // rsi
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // ecx
  __int64 v52; // rax
  int v53; // ecx
  int v54; // eax
  char *v55; // rcx
  unsigned int v56; // eax
  int v57; // edx
  __int64 v58; // rdx
  signed __int64 v59; // r8
  __int16 v60; // ax
  unsigned int v61; // eax
  int v62; // edx
  signed __int64 v63; // r8
  __int16 v64; // ax
  char *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // r14d
  __int16 *v69; // rdx
  __int16 *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  _WORD *v73; // rsi
  _WORD *v74; // rbx
  __int64 v75; // [rsp+38h] [rbp-D0h]
  int v76; // [rsp+58h] [rbp-B0h]
  unsigned int v79; // [rsp+60h] [rbp-A8h]
  int v80; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v81; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v82; // [rsp+78h] [rbp-90h]
  __int64 *v83; // [rsp+80h] [rbp-88h]
  unsigned int v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v86; // [rsp+A0h] [rbp-68h]
  __int64 v87; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-58h]
  __int16 *v89; // [rsp+B8h] [rbp-50h]
  unsigned __int16 *v90; // [rsp+C0h] [rbp-48h]
  _DWORD *v91; // [rsp+C8h] [rbp-40h]
  _QWORD v92[200]; // [rsp+D8h] [rbp-30h]
  unsigned __int16 v93; // [rsp+718h] [rbp+610h] BYREF
  _WORD v94[30]; // [rsp+71Ah] [rbp+612h] BYREF
  char v95; // [rsp+756h] [rbp+64Eh] BYREF

  v10 = a10;
  v11 = a2;
  v12 = a6;
  v13 = a3;
  v86 = a2;
  v15 = a8 >> 1;
  v91 = a9;
  v16 = (unsigned __int64)a7;
  v90 = a1;
  v83 = a6;
  v88 = a10;
  v79 = 0;
  v76 = a8 >> 1;
  if ( a10 && (*(_DWORD *)a10 & 1) != 0 )
  {
    v50 = *(_QWORD *)(a10 + 8);
    v51 = *(_DWORD *)a10 & 0xFFFFFFFE;
    v17 = *(_DWORD *)(a10 + 4);
    v19 = 0LL;
    *(_DWORD *)a10 = v51;
    v80 = v17;
    v20 = &a1[v50];
    v82 = v20;
    v18 = &a7[*(_QWORD *)(a10 + 16)];
    v52 = *(_QWORD *)(a10 + 24);
    if ( v52 != -1 )
      v19 = &a7[v52];
    v15 -= *(_DWORD *)(a10 + 16);
    v76 = v15;
    if ( !a5 && a6 )
    {
      *a6 = *(_QWORD *)(a10 + 32);
      v51 = *(_DWORD *)a10;
    }
    if ( (v51 & 2) != 0 )
    {
      *(_DWORD *)a10 = v51 & 0xFFFFFFFD;
      v81 = v20;
      goto LABEL_150;
    }
  }
  else
  {
    v17 = 0;
    v18 = a7;
    v19 = 0LL;
    v80 = 0;
    v20 = a1;
    v82 = a1;
    if ( !a5 && a6 && a10 )
      *(_QWORD *)(a10 + 32) = *a6;
  }
  v81 = v82;
  while ( 1 )
  {
    v21 = *v20;
    if ( !*v20 )
      break;
    ++v20;
    switch ( v21 )
    {
      case 37:
        v23 = *v20;
        v24 = v18;
        v89 = v18;
        if ( (unsigned __int16)(v23 - 49) > 8u )
        {
          if ( (_WORD)v23 == 48 )
            goto LABEL_16;
          if ( !(_WORD)v23 )
            return 3221225485LL;
          switch ( v23 )
          {
            case 'r':
              v76 = --v15;
              if ( v15 < 0 )
                goto LABEL_87;
              *v18++ = 13;
              goto LABEL_66;
            case 'n':
              v15 -= 2;
              v76 = v15;
              if ( v15 < 0 )
                goto LABEL_87;
              *(_DWORD *)v18 = 655373;
              v18 += 2;
LABEL_66:
              ++v20;
              goto LABEL_67;
            case 't':
              v76 = --v15;
              if ( v15 < 0 )
                goto LABEL_87;
              if ( (v17 & 7) != 0 )
                v36 = (v17 + 7) & 0xFFFFFFF8;
              else
                v36 = v17 + 8;
              v80 = v36;
              v37 = 9;
              goto LABEL_47;
            case 'b':
              v76 = --v15;
              if ( v15 < 0 )
                goto LABEL_87;
              v37 = 32;
LABEL_47:
              v19 = v18;
              *v18 = v37;
LABEL_48:
              ++v18;
              break;
            default:
              if ( !v13 )
              {
                v76 = --v15;
                if ( v15 < 0 )
                  goto LABEL_87;
                *v18 = v23;
                goto LABEL_48;
              }
              v15 -= 2;
              v76 = v15;
              if ( v15 < 0 )
                goto LABEL_87;
              *v18 = 37;
              v18[1] = *v20;
              v18 += 2;
              break;
          }
          ++v20;
          goto LABEL_36;
        }
        ++v20;
        v25 = v23 - 48;
        v26 = *v20;
        if ( *v20 >= 0x30u && v26 <= 0x39u )
        {
          v44 = *v20++;
          v25 = v44 + 2 * (5 * v25 - 24);
          v26 = *v20;
          if ( *v20 >= 0x30u && v26 <= 0x39u )
          {
            v54 = *v20++;
            v25 = v54 + 2 * (5 * v25 - 24);
            v26 = *v20;
            if ( *v20 >= 0x30u && v26 <= 0x39u )
              return 3221225485LL;
          }
        }
        v27 = v25;
        v28 = (unsigned int)(v25 - 1);
        v84 = 0;
        v29 = 0;
        if ( v26 == 33 )
        {
          v45 = v20 + 1;
          v31 = v94;
          v81 = v94;
          v93 = 37;
          v32 = 0;
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
                v49 = v29++;
                v84 = v29;
                if ( v49 > 1 )
                  break;
              }
              ++v45;
              *v31 = v46;
              v31 = (unsigned __int16 *)(v47 + 2);
              v81 = (unsigned __int16 *)(v47 + 2);
              v47 += 2;
              v46 = *v45;
              if ( *v45 == 33 )
                goto LABEL_80;
            }
            return 3221225485LL;
          }
LABEL_80:
          v20 = v45 + 1;
          *v31 = 0;
        }
        else
        {
          v87 = 0LL;
          v30 = RtlStringCopyWorkerW(&v93, 0LL, &v87, L"%s");
          if ( (int)(v30 + 0x80000000) < 0 || v30 == -2147483643 )
          {
            v31 = &v94[v87 - 1];
            v81 = v31;
          }
          else
          {
            v31 = v81;
          }
          v15 = v76;
          v32 = 1;
          v12 = v83;
        }
        if ( !a3 )
        {
          if ( !v12 || (unsigned int)v28 + v29 >= 0xC8 )
            return 3221225485LL;
          if ( !a4 )
            goto LABEL_53;
          v55 = (char *)(v31 - 1);
          if ( *(v31 - 1) == 99 )
          {
            v56 = *(v31 - 2);
            LOWORD(v56) = v56 - 104;
            if ( (unsigned __int16)v56 > 0xFu || (v57 = 32785, !_bittest(&v57, v56)) )
            {
              v58 = 3LL;
              v59 = (char *)L"hc" - v55;
              do
              {
                if ( v58 == -2147483643 )
                  break;
                v60 = *(_WORD *)&v55[v59];
                if ( !v60 )
                  break;
                *(_WORD *)v55 = v60;
                v55 += 2;
                --v58;
              }
              while ( v58 );
              goto LABEL_131;
            }
          }
          else
          {
            switch ( *(_WORD *)v55 )
            {
              case 's':
                v61 = *(v31 - 2);
                LOWORD(v61) = v61 - 104;
                if ( (unsigned __int16)v61 > 0xFu || (v62 = 32785, !_bittest(&v62, v61)) )
                {
                  v58 = 3LL;
                  v63 = (char *)L"hs" - v55;
                  do
                  {
                    if ( v58 == -2147483643 )
                      break;
                    v64 = *(_WORD *)&v55[v63];
                    if ( !v64 )
                      break;
                    *(_WORD *)v55 = v64;
                    v55 += 2;
                    --v58;
                  }
                  while ( v58 );
LABEL_131:
                  v65 = v55 - 2;
                  if ( v58 )
                    v65 = v55;
                  *(_WORD *)v65 = 0;
                }
                break;
              case 'S':
                *(_WORD *)v55 = 115;
                break;
              case 'C':
                *(_WORD *)v55 = 99;
                break;
            }
          }
LABEL_53:
          v38 = v79;
          if ( (unsigned int)v28 >= v79 )
          {
            do
            {
              v39 = v38 + 1;
              if ( a5 )
              {
                v40 = *v12++;
              }
              else
              {
                *v12 += 8LL;
                v40 = *(_QWORD *)(*v12 - 8);
              }
              v92[v38++] = v40;
            }
            while ( v39 <= (unsigned int)v28 );
            v10 = v88;
            v29 = v84;
            v15 = v76;
            v83 = v12;
            v79 = v39;
          }
          v41 = (unsigned __int16 *)v92[v28];
          v81 = v41;
          v42 = 0LL;
          v43 = 0LL;
          if ( v29 )
          {
            if ( a5 )
            {
              v42 = *v12;
              v66 = v38++;
              ++v12;
              v79 = v38;
              v83 = v12;
              v92[v66] = v42;
            }
            else
            {
              *v12 += 8LL;
              v42 = *(_QWORD *)(*v12 - 8);
            }
            if ( v29 > 1 )
            {
              v67 = v38;
              v68 = v38 + 1;
              v79 = v68;
              if ( a5 )
              {
                v43 = *v12;
                v83 = v12 + 1;
              }
              else
              {
                v79 = v68;
                *v12 += 8LL;
                v43 = *(_QWORD *)(*v12 - 8);
              }
              v92[v67] = v43;
            }
          }
          v33 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v85, 0, 0, (__int64)&v93, v41, v42, v43);
          goto LABEL_33;
        }
        if ( v32 == 1 )
          goto LABEL_32;
        v53 = v93 - 37;
        if ( v93 == 37 )
        {
          v53 = v94[0] - 115;
          if ( v94[0] == 115 )
            v53 = v94[1];
        }
        if ( !v53 )
        {
LABEL_32:
          LODWORD(v75) = v27;
          v33 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v85, 0, 0, (__int64)L"%%%u", v75);
        }
        else
        {
          LODWORD(v75) = v27;
          v33 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v85, 0, 0, (__int64)L"%%%u!%s!", v75, v94);
        }
LABEL_33:
        v16 = (unsigned __int64)a7;
        if ( v33 < 0 )
          goto LABEL_87;
        v34 = (v85 - (__int64)v18) >> 1;
        v35 = v76 - (int)v34 < 0;
        v15 = v76 - v34;
        v76 -= v34;
        if ( v35 )
          goto LABEL_87;
        v12 = v83;
        v24 = v89;
        v11 = v86;
        v13 = a3;
        v18 += (int)v34;
LABEL_36:
        if ( v24 )
        {
          v17 = v18 - v24 + v80;
          goto LABEL_14;
        }
LABEL_67:
        v19 = 0LL;
        v17 = 0;
LABEL_14:
        v80 = v17;
        v82 = v20;
        if ( v11 - 1 <= 0xFFFFFFFD && v17 >= v11 )
        {
LABEL_150:
          if ( v19 )
          {
            v69 = v19;
            do
            {
              if ( *v69 != 32 && *v69 != 9 )
                break;
              ++v69;
            }
            while ( v69 != v18 );
            v10 = v88;
            if ( (unsigned __int64)v19 > v16 )
            {
              do
              {
                v70 = v19 - 1;
                if ( *(v19 - 1) != 32 && *v70 != 9 )
                  break;
                --v19;
              }
              while ( (unsigned __int64)v70 > v16 );
            }
            v71 = v69 - v19;
            if ( (_DWORD)v71 == 1 )
            {
              v76 = v15 - 1;
              if ( v15 - 1 < 0 )
                goto LABEL_161;
            }
            else if ( (unsigned int)v71 > 2 )
            {
              v76 = v71 + v15 - 2;
            }
            v72 = v18 - v69;
            v17 = v72;
            v80 = v72;
            memmove(v19 + 2, v69, 2 * v72);
            v15 = v76;
            *v19 = 13;
            v73 = v19 + 1;
            *v73 = 10;
            v74 = &v73[(unsigned int)v72];
          }
          else
          {
            v15 -= 2;
            v76 = v15;
            if ( v15 < 0 )
            {
LABEL_161:
              if ( v10 )
              {
                *(_DWORD *)v10 |= 2u;
LABEL_88:
                *(_DWORD *)(v10 + 4) = v80;
                *(_QWORD *)(v10 + 8) = v82 - v90;
                *(_QWORD *)(v10 + 16) = (__int64)((__int64)v18 - v16) >> 1;
                if ( v19 )
                  v48 = (__int64)((__int64)v19 - v16) >> 1;
                else
                  v48 = -1LL;
                *(_DWORD *)v10 |= 1u;
                *(_QWORD *)(v10 + 24) = v48;
              }
              return 2147483653LL;
            }
            v17 = 0;
            *v18 = 13;
            v74 = v18 + 1;
            v80 = 0;
            *v74 = 10;
          }
          v12 = v83;
          v19 = 0LL;
          v16 = (unsigned __int64)a7;
          v18 = v74 + 1;
        }
        break;
      case 13:
        if ( *v20 != 10 )
          goto LABEL_22;
LABEL_21:
        ++v20;
        goto LABEL_22;
      case 10:
        if ( *v20 == 13 )
          goto LABEL_21;
LABEL_22:
        if ( v11 )
        {
          v19 = v18;
          v21 = 32;
LABEL_10:
          v76 = --v15;
          if ( v15 < 0 )
            goto LABEL_87;
          *v18 = v21;
          if ( v21 == 32 )
            v19 = v18;
          ++v18;
          ++v17;
          goto LABEL_14;
        }
        v15 -= 2;
        v76 = v15;
        if ( v15 < 0 )
          goto LABEL_87;
        v17 = 0;
        *(_DWORD *)v18 = 655373;
        v80 = 0;
        v18 += 2;
        v19 = 0LL;
        v82 = v20;
        break;
      default:
        goto LABEL_10;
    }
  }
LABEL_16:
  if ( v15 < 1 )
  {
LABEL_87:
    if ( v10 )
      goto LABEL_88;
    return 2147483653LL;
  }
  *v18 = 0;
  result = 0LL;
  if ( v91 )
    *v91 = 2 * ((__int64)((__int64)v18 - v16 + 2) >> 1);
  return result;
}
