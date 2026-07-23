/*
 * XREFs of sub_1407D38A8 @ 0x1407D38A8
 * Callers:
 *     sub_140206200 @ 0x140206200 (sub_140206200.c)
 * Callees:
 *     sub_140354360 @ 0x140354360 (sub_140354360.c)
 *     sub_140354968 @ 0x140354968 (sub_140354968.c)
 *     sub_140675C38 @ 0x140675C38 (sub_140675C38.c)
 *     sub_1407D4430 @ 0x1407D4430 (sub_1407D4430.c)
 */

__int64 __fastcall sub_1407D38A8(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        int a8,
        signed __int16 *a9,
        unsigned __int64 *a10,
        __int64 *a11,
        int a12,
        _WORD *a13)
{
  __int64 v14; // r11
  unsigned int v16; // ebx
  unsigned int v17; // edx
  _QWORD *v18; // r8
  int v19; // r10d
  int v20; // ecx
  unsigned __int64 v21; // rdi
  unsigned int *v22; // r14
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rdx
  unsigned int *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int *v29; // r8
  unsigned int *v30; // r9
  char v31; // al
  int v32; // ecx
  __int64 result; // rax
  __int64 v34; // rax
  bool v35; // zf
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r10d
  __int64 v40; // r9
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r11
  __int64 v44; // r10
  unsigned __int64 v45; // r15
  __int64 v46; // r9
  unsigned __int64 *v47; // r11
  __int64 v48; // r10
  unsigned __int64 v49; // rax
  __int64 *v50; // r10
  __int64 v51; // r11
  __int64 v52; // r9
  __int64 v53; // r8
  __int16 v54; // ax
  unsigned int v55; // r10d
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // r10
  __int64 v65; // r10
  unsigned int v66; // r9d
  unsigned __int64 v67; // r11
  __int64 v68; // r11
  int v69; // r9d
  unsigned __int64 v70; // r15
  int v71; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v72; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v73; // [rsp+50h] [rbp-C8h]
  int v74; // [rsp+54h] [rbp-C4h]
  int v75; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v76; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v77; // [rsp+68h] [rbp-B0h]
  __int16 v78; // [rsp+70h] [rbp-A8h]
  int v79; // [rsp+74h] [rbp-A4h]
  int v80; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v81; // [rsp+80h] [rbp-98h]
  __int64 v82; // [rsp+88h] [rbp-90h]
  __int64 v83; // [rsp+90h] [rbp-88h]
  __int64 v84; // [rsp+98h] [rbp-80h]
  unsigned int *v85; // [rsp+A0h] [rbp-78h]
  unsigned int *v86; // [rsp+A8h] [rbp-70h]
  __int16 v87; // [rsp+B0h] [rbp-68h]
  __int64 v88; // [rsp+B8h] [rbp-60h]
  unsigned int *v89; // [rsp+C0h] [rbp-58h]
  int v90; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-48h]
  _QWORD *v92; // [rsp+D8h] [rbp-40h]
  char v93; // [rsp+128h] [rbp+10h]
  char v95; // [rsp+138h] [rbp+20h]
  unsigned int v96; // [rsp+138h] [rbp+20h]
  signed __int16 v97; // [rsp+148h] [rbp+30h]
  unsigned int v98; // [rsp+148h] [rbp+30h]

  v14 = a3;
  v16 = 0;
  v75 = 0;
  v97 = 0;
  LOWORD(v17) = 0;
  v79 = 0;
  v72 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v18 = a7;
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  v19 = a12;
  v74 = a12;
  if ( (a12 & 0x8000) != 0 )
    return 3221225485LL;
  v93 = (a12 & 0x1000) != 0;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( (a12 & 0x8800) == 0x8800 || !a1 )
    return 3221225485LL;
  v20 = a8;
  v80 = a8;
  v21 = a4;
  v22 = 0LL;
  v81 = 0LL;
  if ( a13 )
    *a13 = 0;
LABEL_12:
  if ( !v21 )
    goto LABEL_54;
  v23 = v20;
  v24 = v20 - 1;
  v80 = v24;
  v90 = v24;
  if ( !v23 )
    goto LABEL_54;
  v82 = *v18;
  v84 = v82;
  if ( !v24 && a8 == 3 )
  {
    v81 = v21;
    v91 = v21;
    if ( !a9 )
      return (unsigned int)-1073741811;
    v97 = *a9;
    v87 = *a9;
    v79 = 0;
    v78 = 0;
    if ( (~(_BYTE)v19 & 4) != 0 )
    {
      v82 = (unsigned __int16)a9[2];
      v84 = v82;
    }
  }
  if ( (a12 & 0x1000) != 0 && ((int)sub_140354360(v21, 24LL, &v72) < 0 || v21 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    return (unsigned int)-1073741701;
  v25 = *(unsigned __int16 *)(v21 + 12);
  v73 = v25;
  if ( (_DWORD)v25 && (a12 & 0x1000) != 0 )
  {
    v83 = 8 * v25;
    if ( (int)sub_140354360(v21, (unsigned int)(8 * v25) + 16LL, &v72) < 0
      || v52 + v21 + 16 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      return (unsigned int)-1073741701;
    }
    v25 = v73;
  }
  v26 = (unsigned int *)(v21 + 16);
  v83 = v21 + 16;
  v86 = (unsigned int *)(v21 + 16);
  v27 = v25;
  if ( (v82 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v25 )
    {
      if ( (a12 & 0x1000) != 0 )
      {
        if ( (int)sub_140354360((unsigned __int64)v26, v25, &v72) < 0 )
          return (unsigned int)-1073741701;
        LODWORD(v25) = v73;
      }
      v26 += 2 * (unsigned int)v25;
      v83 = (__int64)v26;
      v86 = v26;
    }
    v25 = *(unsigned __int16 *)(v21 + 14);
    v73 = v25;
    v27 = v25;
    if ( (a12 & 0x1000) != 0 )
    {
      v88 = 8LL * (unsigned int)v25;
      if ( (int)sub_140354360((unsigned __int64)v26, (unsigned int)(8 * v25), &v72) < 0 )
        return (unsigned int)-1073741701;
      v25 = v27;
      v73 = v27;
      if ( v28 + v83 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
      v19 = v74;
      v26 = (unsigned int *)v83;
    }
  }
  if ( !v27 )
  {
    v77 = 0LL;
LABEL_104:
    switch ( a8 - v80 )
    {
      case 1:
        return (unsigned int)-1073741686;
      case 2:
        return (unsigned int)-1073741685;
      case 3:
        return (unsigned int)-1073741308;
    }
    return (unsigned int)-1073741811;
  }
LABEL_26:
  if ( v81 && (v19 & 0x20) != 0 )
  {
    v21 = 0LL;
    v77 = 0LL;
    v38 = v26[1];
    if ( (a12 & 0x1000) != 0 )
    {
      if ( (int)sub_140354360(a4, (unsigned int)v38, &v72) < 0 )
        return (unsigned int)-1073741701;
      v22 = (unsigned int *)v72;
      v76 = v72;
      v26 = (unsigned int *)v83;
    }
    else
    {
      v22 = (unsigned int *)(v38 + a4);
      v76 = v38 + a4;
    }
    v17 = *v26;
    v84 = *v26;
LABEL_54:
    v39 = v19 & 2;
    if ( v22 && !v39 )
    {
      if ( (a12 & 0x1000) != 0
        && ((unsigned __int64)v22 <= a4 || (unsigned __int64)(v22 + 4) > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
      {
        goto LABEL_151;
      }
      v40 = (__int64)a13;
      if ( a13 )
        *a13 = v17;
      v41 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1 & 1) != 0 )
      {
        v53 = a5;
        v54 = *(_WORD *)(a5 + 24);
        if ( v54 == 267 )
        {
          v55 = *(_DWORD *)(a5 + 136);
        }
        else if ( v54 == 523 )
        {
          v55 = *(_DWORD *)(a5 + 152);
        }
        else
        {
          v55 = 0;
        }
        if ( !v55 )
        {
          v76 = 0LL;
          return (unsigned int)-1073741687;
        }
        v56 = v55;
        if ( (a12 & 0x1000) != 0 )
        {
          if ( (int)sub_140354360(a1 & 0xFFFFFFFFFFFFFFFCuLL, v55, &v72) < 0
            || (int)sub_140354968(v72, a4, (__int64 *)&v72) < 0 )
          {
            return (unsigned int)-1073741701;
          }
          v53 = a5;
        }
        v42 = v41 + v56 - a4;
        v57 = sub_140675C38(a1 & 0xFFFFFFFFFFFFFFFCuLL, v14, v53, v40, v55, v93);
        if ( !v57 )
          goto LABEL_151;
        if ( *v22 > *(_DWORD *)(v57 + 8) )
        {
          v98 = *(_DWORD *)(v57 + 12);
          v60 = sub_140675C38(a1 & 0xFFFFFFFFFFFFFFFCuLL, a3, v58, v59, *v22, v93);
          if ( !v60 )
            goto LABEL_151;
          v96 = *(_DWORD *)(v60 + 12);
          v63 = sub_140675C38(a1 & 0xFFFFFFFFFFFFFFFCuLL, a3, v61, v62, v96, v93);
          v64 = v63;
          if ( v63 )
          {
            if ( (a12 & 0x1000) != 0 )
            {
              if ( (int)sub_140354360(
                          a1 & 0xFFFFFFFFFFFFFFFCuLL,
                          v96 - (unsigned __int64)*(unsigned int *)(v63 + 12),
                          &v72) < 0
                || (int)sub_140354360(v72, *(unsigned int *)(v65 + 20), &v72) < 0 )
              {
                return (unsigned int)-1073741701;
              }
            }
            else
            {
              v66 = v96;
            }
            v67 = v41 + *(unsigned int *)(v64 + 20) - (unsigned __int64)*(unsigned int *)(v64 + 12) + v66;
          }
          else
          {
            v67 = 0LL;
          }
          if ( (a12 & 0x1000) != 0
            && ((int)sub_140354968(*(unsigned int *)(v64 + 12), v98, (__int64 *)&v72) < 0
             || (int)sub_140354968(v72, v68 - a4, (__int64 *)&v72) < 0) )
          {
            return (unsigned int)-1073741701;
          }
          v42 += a4 + *(unsigned int *)(v64 + 12) - (unsigned __int64)v98 - v67;
        }
      }
      else
      {
        v42 = 0LL;
      }
      if ( (a12 & 0x1000) == 0 )
      {
        v44 = 0LL;
        v46 = v22[1];
        v45 = a3;
LABEL_70:
        v47 = a10;
        if ( a10 )
        {
          if ( (a12 & 0x1000) != 0 )
          {
            if ( (int)sub_140354360(v41, v44, &v72) < 0 || v72 < v41 || v72 > v45 + (v41 & 0xFFFFFFFFFFFFFFFCuLL) )
              return (unsigned int)-1073741701;
            v49 = v48 + v41;
          }
          else
          {
            v49 = v41 + *v22 - v42;
          }
          *v47 = v49;
        }
        v50 = a11;
        if ( a11 )
        {
          if ( (a12 & 0x1000) != 0 && v47 && ((int)sub_140354360(*v47, v46, &v72) < 0 || v51 + v46 > v41 + v45) )
            return (unsigned int)-1073741701;
          *v50 = v46;
        }
        return v16;
      }
      if ( (int)sub_140354968(*v22, v42, (__int64 *)&v72) < 0 )
        return (unsigned int)-1073741701;
      v44 = v72;
      if ( v72 >= a4 - a1 )
      {
        v45 = a3;
        if ( v72 <= a3 )
        {
          if ( (_DWORD)v43 )
          {
            v46 = (unsigned int)v43;
            if ( v43 <= a3 && v72 + v43 <= a3 )
              goto LABEL_70;
          }
        }
      }
LABEL_151:
      v76 = 0LL;
      return (unsigned int)-1073741701;
    }
    if ( v21 && v39 )
    {
      if ( (a12 & 0x1000) != 0 )
      {
        if ( (int)sub_140354360(v21, 24LL, &v72) < 0 || (v70 = a1 & 0xFFFFFFFFFFFFFFFCuLL, v21 + 24 > v70 + v14) )
        {
          v77 = 0LL;
          return (unsigned int)-1073741701;
        }
      }
      else
      {
        v70 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a10 )
      {
        if ( (a12 & 0x1000) != 0 && (v21 < v70 || v21 > v70 + v14) )
          return (unsigned int)-1073741701;
        *a10 = v21;
      }
      return v16;
    }
    goto LABEL_104;
  }
LABEL_27:
  v21 = 0LL;
  v77 = 0LL;
  v29 = v26;
  v86 = v26;
  v30 = &v26[2 * (unsigned int)v25 - 2];
  v89 = v30;
  v31 = v25;
  while ( 1 )
  {
    if ( v29 > v30 )
      goto LABEL_40;
    v32 = (int)v25 >> 1;
    LODWORD(v88) = (int)v25 >> 1;
    if ( !((int)v25 >> 1) )
    {
      if ( !(_DWORD)v25 )
        goto LABEL_40;
      result = sub_1407D4430(a1, v25, v14, v82, a4, v29, v19, &v75, v71);
      v71 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v75 )
      {
        v34 = v86[1];
        if ( (int)v34 >= 0 )
          goto LABEL_97;
LABEL_34:
        if ( (a12 & 0x1000) != 0 )
        {
          if ( v81 || (int)sub_140354360(a4, v34 & 0x7FFFFFFF, &v72) < 0 )
            return (unsigned int)-1073741701;
          v21 = v72;
        }
        else
        {
          v21 = a4 + (v34 & 0xFFFFFFFF7FFFFFFFuLL);
        }
        v77 = v21;
      }
LABEL_39:
      v14 = a3;
LABEL_40:
      v19 = v74;
      if ( !v81 || v22 )
        goto LABEL_41;
      if ( (v74 & 4) != 0 )
      {
        LOWORD(v17) = v82;
        goto LABEL_54;
      }
      HIWORD(v69) = HIWORD(v79);
      LOWORD(v69) = v79 + 1;
      v79 = v69;
      v78 = v69;
      if ( (unsigned __int16)v69 >= v97 )
      {
        if ( *((_BYTE *)a9 + 516) )
        {
LABEL_41:
          v18 = a7 + 1;
          a7 = v18;
          v92 = v18;
          LOWORD(v17) = v82;
          v20 = v80;
          goto LABEL_12;
        }
        v19 = v74 | 0x20;
        v74 |= 0x20u;
        v25 = v73;
        v26 = (unsigned int *)v83;
        goto LABEL_26;
      }
      v82 = (unsigned __int16)a9[4 * (unsigned __int16)v69 + 2];
      v84 = v82;
      v25 = v73;
      v26 = (unsigned int *)v83;
      goto LABEL_27;
    }
    v85 = v29;
    v36 = v31 & 1;
    v35 = v36 == 0;
    v95 = v36;
    LODWORD(v37) = v32 - 1;
    LODWORD(v84) = v32 - 1;
    if ( v35 )
      v37 = (int)v37;
    else
      v37 = v32;
    v85 = &v29[2 * v37];
    result = sub_1407D4430(a1, v25, v14, v82, a4, v85, v19, &v75, v71);
    v71 = result;
    if ( (int)result < 0 )
      return result;
    if ( !v75 )
      break;
    if ( v75 < 0 )
    {
      v30 = v85 - 2;
      v89 = v85 - 2;
      if ( v95 )
      {
        v31 = v88;
        v25 = (unsigned int)v88;
      }
      else
      {
        v31 = v84;
        v25 = (unsigned int)v84;
      }
      v29 = v86;
    }
    else
    {
      v29 = v85 + 2;
      v86 = v85 + 2;
      v31 = v88;
      v25 = (unsigned int)v88;
      v30 = v89;
    }
    v14 = a3;
    v19 = v74;
  }
  v34 = v85[1];
  if ( (int)v34 < 0 )
    goto LABEL_34;
  v21 = 0LL;
  v77 = 0LL;
LABEL_97:
  if ( (a12 & 0x1000) == 0 )
  {
    v22 = (unsigned int *)(v34 + a4);
LABEL_101:
    v76 = (unsigned __int64)v22;
    goto LABEL_39;
  }
  if ( v81 && (int)sub_140354360(a4, v34, &v72) >= 0 )
  {
    v22 = (unsigned int *)v72;
    goto LABEL_101;
  }
  return (unsigned int)-1073741701;
}
