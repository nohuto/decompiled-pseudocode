/*
 * XREFs of sub_1409B6A58 @ 0x1409B6A58
 * Callers:
 *     sub_1407741A4 @ 0x1407741A4 (sub_1407741A4.c)
 *     sub_140943248 @ 0x140943248 (sub_140943248.c)
 *     RtlFormatMessage @ 0x1409B6A00 (RtlFormatMessage.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402E04F4 @ 0x1402E04F4 (sub_1402E04F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1409B6A58(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        __int16 *a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 *v9; // r10
  unsigned int v10; // r12d
  char v11; // r15
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  unsigned __int64 v15; // r8
  __int16 *v16; // rbx
  int v17; // esi
  unsigned int v18; // r14d
  __int16 *v19; // r13
  __int16 v20; // ax
  __int16 *v21; // rcx
  int v22; // ecx
  __int16 *v23; // rdx
  unsigned int v24; // r15d
  unsigned int v25; // edx
  __int16 v26; // ax
  unsigned int v27; // edx
  unsigned int v28; // r14d
  __int64 v29; // r15
  _WORD *v30; // rdx
  __int16 *v31; // rdi
  char v32; // r9
  __int16 v33; // cx
  char *v34; // r8
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  char *v38; // rcx
  __int16 v39; // ax
  unsigned int v40; // eax
  int v41; // edx
  __int64 v42; // rdx
  signed __int64 v43; // r8
  __int16 v44; // ax
  unsigned int v45; // eax
  int v46; // edx
  signed __int64 v47; // r8
  __int16 v48; // ax
  char *v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rax
  _WORD *v52; // r9
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // r11d
  __int64 v58; // rax
  __int16 v59; // ax
  __int16 *v60; // rdx
  __int16 *v61; // rcx
  __int16 v62; // ax
  __int64 v63; // rax
  __int64 v64; // rbx
  _WORD *v65; // r13
  _WORD *v66; // rbx
  _DWORD *v68; // rdx
  __int64 v69; // [rsp+38h] [rbp-D0h]
  unsigned int v72; // [rsp+5Ch] [rbp-ACh]
  unsigned int v73; // [rsp+60h] [rbp-A8h]
  __int64 v74; // [rsp+68h] [rbp-A0h]
  unsigned int v75; // [rsp+70h] [rbp-98h]
  _WORD *v77; // [rsp+78h] [rbp-90h] BYREF
  __int64 v78; // [rsp+80h] [rbp-88h] BYREF
  int v79; // [rsp+88h] [rbp-80h]
  int v80; // [rsp+8Ch] [rbp-7Ch]
  int v81; // [rsp+90h] [rbp-78h]
  __int64 v82; // [rsp+98h] [rbp-70h]
  __int64 v83; // [rsp+A0h] [rbp-68h]
  __int16 *v84; // [rsp+A8h] [rbp-60h]
  __int64 v85; // [rsp+B0h] [rbp-58h]
  _QWORD v86[200]; // [rsp+B8h] [rbp-50h]
  WCHAR v87; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v88[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  char v89; // [rsp+736h] [rbp+62Eh] BYREF

  v9 = a6;
  v10 = 0;
  v11 = a3;
  v13 = 0;
  v14 = a2;
  v15 = (unsigned __int64)a7;
  v85 = a9;
  v16 = a7;
  v74 = (__int64)a6;
  v82 = (__int64)a7;
  v77 = 0LL;
  v78 = 0LL;
  v72 = 0;
  v17 = a8 >> 1;
  v79 = 37;
  v83 = 8LL;
  v80 = 10;
  v81 = 32;
LABEL_2:
  v18 = 0;
  v73 = 0;
LABEL_3:
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *a1;
    v21 = v16;
    if ( !*a1 )
      break;
    ++a1;
    if ( v20 != (_WORD)v79 )
    {
      if ( v20 == 13 )
      {
        if ( *a1 != 10 )
          goto LABEL_112;
      }
      else
      {
        if ( v20 != (_WORD)v80 )
        {
LABEL_114:
          if ( --v17 < 0 )
            return 2147483653LL;
          *v16 = v20;
          ++v18;
          ++v16;
          if ( v20 != (_WORD)v81 )
            v21 = v19;
          v19 = v21;
          goto LABEL_118;
        }
        if ( *a1 != 13 )
        {
LABEL_112:
          if ( !v14 )
          {
            v17 -= 2;
            if ( v17 < 0 )
              return 2147483653LL;
            *(_DWORD *)v16 = 655373;
            v16 += 2;
            goto LABEL_2;
          }
          v19 = v16;
          v20 = 32;
          goto LABEL_114;
        }
      }
      ++a1;
      goto LABEL_112;
    }
    v22 = (unsigned __int16)*a1;
    v23 = v16;
    v84 = v16;
    if ( (unsigned __int16)(v22 - 49) > (unsigned __int16)v83 )
    {
      if ( (_WORD)v22 == 48 )
        break;
      if ( !(_WORD)v22 )
        return 3221225485LL;
      switch ( v22 )
      {
        case 'r':
          if ( --v17 < 0 )
            return 2147483653LL;
          *v16++ = 13;
          ++a1;
LABEL_104:
          v19 = 0LL;
          v18 = 0;
          goto LABEL_118;
        case 'n':
          v17 -= 2;
          if ( v17 < 0 )
            return 2147483653LL;
          *(_DWORD *)v16 = 655373;
          v16 += 2;
          ++a1;
          goto LABEL_104;
        case 't':
          if ( --v17 < 0 )
            return 2147483653LL;
          if ( (v18 & 7) != 0 )
            v18 = (v18 + 7) & 0xFFFFFFF8;
          else
            v18 += 8;
          v59 = 9;
          goto LABEL_92;
        case 'b':
          if ( --v17 < 0 )
            return 2147483653LL;
          v59 = 32;
LABEL_92:
          v19 = v16;
          *v16 = v59;
LABEL_101:
          ++v16;
          break;
        default:
          if ( !v11 )
          {
            if ( --v17 < 0 )
              return 2147483653LL;
            *v16 = v22;
            goto LABEL_101;
          }
          v17 -= 2;
          if ( v17 < 0 )
            return 2147483653LL;
          *v16 = 37;
          v16[1] = *a1;
          v16 += 2;
          break;
      }
      ++a1;
      goto LABEL_103;
    }
    ++a1;
    v24 = v22 - 48;
    v25 = (unsigned __int16)*a1;
    v26 = v25;
    if ( (unsigned __int16)v25 >= 0x30u && v25 <= 0x39 )
    {
      ++a1;
      v24 = v25 + 2 * (5 * v24 - 24);
      v27 = (unsigned __int16)*a1;
      v26 = v27;
      if ( (unsigned __int16)v27 >= 0x30u && v27 <= 0x39 )
      {
        ++a1;
        v24 = v27 + 2 * (5 * v24 - 24);
        v26 = *a1;
        if ( (unsigned __int16)*a1 >= 0x30u && (unsigned __int16)*a1 <= 0x39u )
          return 3221225485LL;
      }
    }
    v28 = v24;
    v75 = 0;
    v29 = v24 - 1;
    if ( v26 == 33 )
    {
      v30 = v88;
      v31 = a1 + 1;
      v77 = v88;
      v32 = 0;
      v87 = 37;
      v33 = *v31;
      if ( *v31 != 33 )
      {
        v34 = (char *)v88;
        while ( v33 )
        {
          if ( v34 >= &v89 )
            break;
          if ( v33 == 42 )
          {
            v35 = v10++;
            v75 = v10;
            if ( v35 > 1 )
              break;
          }
          ++v31;
          *v30 = v33;
          v30 = v34 + 2;
          v77 = v34 + 2;
          v34 += 2;
          v33 = *v31;
          if ( *v31 == 33 )
            goto LABEL_21;
        }
        return 3221225485LL;
      }
LABEL_21:
      a1 = v31 + 1;
      *v30 = 0;
    }
    else
    {
      sub_1402E04F4(&v87, 0x40uLL, L"%s", &v77, 0LL, 0);
      v30 = v77;
      v32 = 1;
      v9 = (__int64 *)v74;
      v13 = v72;
    }
    if ( !a3 )
    {
      if ( !v9 || v10 + (unsigned int)v29 >= 0xC8 )
        return 3221225485LL;
      if ( a4 )
      {
        v38 = (char *)(v30 - 1);
        v39 = *(v30 - 1);
        switch ( v39 )
        {
          case 'c':
            v40 = (unsigned __int16)*(v30 - 2);
            LOWORD(v40) = v40 - 104;
            if ( (unsigned __int16)v40 > 0xFu || (v41 = 32785, !_bittest(&v41, v40)) )
            {
              v42 = 3LL;
              v43 = (char *)L"hc" - v38;
              do
              {
                if ( v42 == -2147483643 )
                  break;
                v44 = *(_WORD *)&v38[v43];
                if ( !v44 )
                  break;
                *(_WORD *)v38 = v44;
                v38 += 2;
                --v42;
              }
              while ( v42 );
              goto LABEL_51;
            }
            break;
          case 's':
            v45 = (unsigned __int16)*(v30 - 2);
            LOWORD(v45) = v45 - 104;
            if ( (unsigned __int16)v45 > 0xFu || (v46 = 32785, !_bittest(&v46, v45)) )
            {
              v42 = 3LL;
              v47 = (char *)L"hs" - v38;
              do
              {
                if ( v42 == -2147483643 )
                  break;
                v48 = *(_WORD *)&v38[v47];
                if ( !v48 )
                  break;
                *(_WORD *)v38 = v48;
                v38 += 2;
                --v42;
              }
              while ( v42 );
LABEL_51:
              v49 = v38 - 2;
              if ( v42 )
                v49 = v38;
              *(_WORD *)v49 = 0;
            }
            break;
          case 'S':
            *(_WORD *)v38 = 115;
            break;
          case 'C':
            *(_WORD *)v38 = 99;
            break;
        }
      }
      if ( (unsigned int)v29 >= v13 )
      {
        do
        {
          v50 = v13 + 1;
          if ( a5 )
          {
            v51 = *v9++;
          }
          else
          {
            *v9 += 8LL;
            v51 = *(_QWORD *)(*v9 - 8);
          }
          v86[v13++] = v51;
        }
        while ( v50 <= (unsigned int)v29 );
        v10 = v75;
        v74 = (__int64)v9;
        v72 = v50;
      }
      v52 = (_WORD *)v86[v29];
      v77 = v52;
      v53 = 0LL;
      v54 = 0LL;
      if ( !v10 )
        goto LABEL_73;
      if ( a5 )
      {
        v53 = *v9;
        v55 = v13++;
        v72 = v13;
        v86[v55] = *v9++;
        v74 = (__int64)v9;
      }
      else
      {
        *v9 += 8LL;
        v53 = *(_QWORD *)(*v9 - 8);
      }
      if ( v10 > 1 )
      {
        v56 = v13;
        v10 = 0;
        v57 = v13 + 1;
        v72 = v57;
        if ( a5 )
        {
          v54 = *v9;
          v74 = (__int64)(v9 + 1);
        }
        else
        {
          *v9 += 8LL;
          v72 = v57;
          v54 = *(_QWORD *)(*v9 - 8);
        }
        v86[v56] = v54;
      }
      else
      {
LABEL_73:
        v10 = 0;
      }
      v37 = sub_1402DFBC4(v16, v17, &v78, 0LL, 0, &v87, v52, v53, v54);
      goto LABEL_75;
    }
    if ( v32 == 1 )
    {
      v10 = 0;
    }
    else
    {
      v36 = v87 - 37;
      if ( v87 == 37 && (v36 = v88[0] - 115, v88[0] == 115) )
      {
        v10 = 0;
        v36 = v88[1];
      }
      else
      {
        v10 = 0;
      }
      if ( v36 )
      {
        LODWORD(v69) = v28;
        v37 = sub_1402DFBC4(v16, v17, &v78, 0LL, 0, L"%%%u!%s!", v69, v88);
        goto LABEL_75;
      }
    }
    LODWORD(v69) = v28;
    v37 = sub_1402DFBC4(v16, v17, &v78, 0LL, 0, L"%%%u", v69);
LABEL_75:
    if ( v37 < 0 )
      return 2147483653LL;
    v58 = (v78 - (__int64)v16) >> 1;
    v17 -= v58;
    if ( v17 < 0 )
      return 2147483653LL;
    v18 = v73;
    v9 = (__int64 *)v74;
    v23 = v84;
    v13 = v72;
    v15 = v82;
    v14 = a2;
    v11 = a3;
    v16 += (int)v58;
LABEL_103:
    if ( !v23 )
      goto LABEL_104;
    v18 += v16 - v23;
LABEL_118:
    v73 = v18;
    if ( v14 - 1 <= 0xFFFFFFFD && v18 >= v14 )
    {
      if ( v19 )
      {
        v60 = v19;
        do
        {
          if ( *v60 != 32 && *v60 != 9 )
            break;
          ++v60;
        }
        while ( v60 != v16 );
        v10 = 0;
        if ( (unsigned __int64)v19 > v15 )
        {
          do
          {
            v61 = v19 - 1;
            v62 = *(v19 - 1);
            if ( v62 != 32 && v62 != 9 )
              break;
            --v19;
          }
          while ( (unsigned __int64)v61 > v15 );
        }
        v63 = v60 - v19;
        if ( (_DWORD)v63 == 1 )
        {
          if ( --v17 >= 0 )
            goto LABEL_134;
          return 2147483653LL;
        }
        if ( (unsigned int)v63 > 2 )
          v17 = v63 + v17 - 2;
LABEL_134:
        v64 = v16 - v60;
        v18 = v64;
        v73 = v64;
        memmove(v19 + 2, v60, 2 * v64);
        v14 = a2;
        *v19 = 13;
        v65 = v19 + 1;
        *v65 = 10;
        v66 = &v65[(unsigned int)v64];
      }
      else
      {
        v17 -= 2;
        if ( v17 < 0 )
          return 2147483653LL;
        *v16 = 13;
        v66 = v16 + 1;
        v18 = 0;
        v73 = 0;
        *v66 = 10;
      }
      v9 = (__int64 *)v74;
      v16 = v66 + 1;
      v13 = v72;
      v15 = v82;
      goto LABEL_3;
    }
  }
  if ( v17 < 1 )
    return 2147483653LL;
  v68 = (_DWORD *)v85;
  *v16 = 0;
  if ( v68 )
    *v68 = 2 * ((__int64)((__int64)v16 - v15 + 2) >> 1);
  return 0LL;
}
