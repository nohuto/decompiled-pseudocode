/*
 * XREFs of RtlpxVirtualUnwind @ 0x180020E30
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E1EC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E680 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x18001FF80 (RtlUnwindEx.c)
 *     RtlVirtualUnwind @ 0x180020C40 (RtlVirtualUnwind.c)
 *     RtlVirtualUnwind2 @ 0x180111010 (RtlVirtualUnwind2.c)
 * Callees:
 *     RtlpUnwindPrologue @ 0x1800214D0 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x18007CF7C (RtlpVirtualPopShadowStack.c)
 *     RtlpSameFunction @ 0x18007E0DC (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x1800896AC (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x180111104 (RtlpUnwindEpilogue.c)
 */

__int64 __fastcall RtlpxVirtualUnwind(
        int a1,
        __int64 a2,
        char *a3,
        unsigned int *a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        char ***a8,
        _QWORD *a9,
        __int64 a10,
        unsigned int a11)
{
  __int64 v13; // r10
  __int64 v14; // rax
  unsigned int v15; // r14d
  int v16; // r13d
  __int64 v17; // rsi
  unsigned int v18; // edi
  _BYTE *v19; // rdx
  int v20; // r8d
  int v21; // r12d
  char **v22; // rcx
  char *v23; // rdx
  char v24; // cl
  char v25; // al
  char *v26; // r8
  _BYTE *v27; // r8
  __int64 v28; // rsi
  __int64 result; // rax
  _BYTE *v30; // r9
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  char v34; // r8
  char *v35; // rdx
  int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  unsigned int v39; // r8d
  __int16 v40; // dx
  unsigned int v41; // edi
  int v42; // r11d
  int v43; // edx
  unsigned int j; // r9d
  unsigned int v45; // edx
  int v46; // ecx
  __int64 v47; // r11
  char v48; // al
  __int64 v49; // r9
  _BYTE *v50; // r14
  char v51; // dl
  _QWORD *v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // r10
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  _DWORD *v58; // rax
  char v59; // r10
  _QWORD *v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rdx
  char **v65; // rdi
  __int64 v66; // r8
  unsigned int i; // ecx
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  char v71; // al
  __int64 v72; // rcx
  int v73; // [rsp+40h] [rbp-78h]
  int v74; // [rsp+44h] [rbp-74h]
  unsigned int v75; // [rsp+48h] [rbp-70h]
  __int64 v76; // [rsp+68h] [rbp-50h]
  _QWORD **v77; // [rsp+70h] [rbp-48h]
  _DWORD *v79; // [rsp+D8h] [rbp+20h] BYREF

  v79 = a4;
  v13 = a2;
  v14 = a5;
  if ( !a4 )
  {
    v64 = (_QWORD *)(a5 + 152);
    v79 = (_DWORD *)(a5 + 152);
    v65 = *(char ***)(a5 + 152);
    if ( *(_QWORD *)a10
      && ((unsigned __int64)v65 < **(_QWORD **)a10 || (unsigned __int64)v65 > **(_QWORD **)(a10 + 8) - 8LL) )
    {
      return 3221225512LL;
    }
    v66 = a5;
    if ( a3 == *v65 )
      return 3221225727LL;
    *(_QWORD *)(a5 + 248) = *v65;
    *v64 += 8LL;
    RtlpVirtualPopShadowStack(v66);
    *a8 = v65;
    if ( a6 )
      *a6 = 0;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    return 0LL;
  }
  v15 = 0;
  v76 = 0LL;
  v73 = 0;
  v16 = 0;
  v17 = a2 + a4[2];
  v18 = *(_BYTE *)v17 & 7;
  if ( !a6 || *a6 )
  {
    if ( v18 < 2 )
    {
      v19 = (_BYTE *)(a2 + a4[2]);
      v20 = 0;
      if ( !*(_BYTE *)(v17 + 2) )
      {
        do
        {
          if ( (*v19 & 0x20) == 0 )
          {
            v14 = a5;
            goto LABEL_45;
          }
          v63 = (unsigned __int8)v19[2];
          if ( (v63 & 1) != 0 )
            v63 = (unsigned int)(v63 + 1);
          if ( (unsigned int)++v20 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v19 = (_BYTE *)(v13 + *(unsigned int *)&v19[2 * v63 + 12]);
        }
        while ( !v19[2] );
        v14 = a5;
      }
    }
  }
  else
  {
LABEL_45:
    v16 = 1;
  }
  v21 = a1 & 0x7FFFFFFF;
  v74 = 0;
  if ( (*(_BYTE *)(v17 + 3) & 0xF) != 0 )
  {
    v75 = (_DWORD)a3 - v13 - *a4;
    if ( v75 >= *(unsigned __int8 *)(v17 + 1) || (*(_BYTE *)v17 & 0x20) != 0 )
    {
      v74 = 1;
      goto LABEL_48;
    }
    for ( i = 0; ; i = v70 + a11 )
    {
      a11 = i;
      v68 = i;
      if ( i >= *(unsigned __int8 *)(v17 + 2) )
        break;
      v69 = *(unsigned __int16 *)(v17 + 2LL * i + 4);
      if ( (BYTE1(v69) & 0xF) == 3 )
        break;
      v70 = RtlpUnwindOpSlots(v69, v68);
    }
    v13 = a2;
    v14 = a5;
    if ( v75 >= *(unsigned __int8 *)(v17 + 2 * v68 + 4) )
      v74 = 1;
  }
  if ( !v74 )
  {
    v22 = *(char ***)(v14 + 152);
    goto LABEL_8;
  }
LABEL_48:
  v22 = (char **)(*(_QWORD *)(a5 + 8LL * (*(_BYTE *)(v17 + 3) & 0xF) + 120) - (*(_BYTE *)(v17 + 3) & 0xF0));
LABEL_8:
  *a8 = v22;
  if ( v16 )
    goto LABEL_27;
  if ( v18 >= 2 )
  {
    v39 = *(unsigned __int8 *)(v17 + 2);
    if ( !(_BYTE)v39 )
      goto LABEL_27;
    v40 = *(_WORD *)(v17 + 4);
    if ( (HIBYTE(v40) & 0xF) != 6 )
      goto LABEL_27;
    v41 = (unsigned __int8)v40;
    v42 = (_DWORD)a3 - v13;
    if ( (v40 & 0x1000) == 0 || (v43 = a4[1] - (unsigned __int8)v40, v42 - v43 >= v41) )
    {
      for ( j = 1; ; ++j )
      {
        if ( j >= v39 )
          goto LABEL_27;
        v45 = *(unsigned __int16 *)(v17 + 2LL * j + 4);
        if ( (BYTE1(v45) & 0xF) != 6 )
          goto LABEL_27;
        v46 = (unsigned __int8)v45 + (v45 >> 12 << 8);
        if ( !v46 )
          goto LABEL_27;
        v43 = a4[1] - v46;
        if ( v42 - v43 < v41 )
          break;
      }
    }
    v73 = 1;
    v28 = a5;
    RtlpUnwindEpilogue(v13, v43, v42 - v43, (_DWORD)a4, a5, a10);
    if ( a6 )
      *a6 = 0;
LABEL_29:
    if ( a9 )
      *a9 = v76;
    if ( v73 )
    {
      if ( v74 )
        *a8 = (char **)(*(_QWORD *)(v28 + 152) - 8LL);
    }
    return 0LL;
  }
  v23 = a3;
  v24 = *a3;
  if ( *a3 == 72 )
  {
    if ( a3[1] == -125 && a3[2] == -60 )
    {
      v23 = a3 + 4;
      goto LABEL_15;
    }
    if ( a3[1] == -127 && a3[2] == -60 )
      goto LABEL_106;
  }
  if ( (v24 & 0xFE) == 0x48 && a3[1] == -115 )
  {
    v33 = a3[2] & 7 | (8 * (v24 & 1));
    v15 = v33;
    if ( v33 )
    {
      if ( v33 == (*(_BYTE *)(v17 + 3) & 0xF) )
      {
        v34 = a3[2] & 0xF8;
        if ( v34 == 96 )
        {
          v23 = a3 + 4;
          goto LABEL_15;
        }
        if ( v34 != -96 )
          goto LABEL_15;
LABEL_106:
        v23 = a3 + 7;
        goto LABEL_15;
      }
    }
  }
  while ( 1 )
  {
LABEL_15:
    v25 = *v23;
    if ( (*v23 & 0xF8) == 0x58 )
    {
      v53 = 1LL;
      goto LABEL_81;
    }
    v26 = v23 + 1;
    if ( (v25 & 0xF0) != 0x40 || (*v26 & 0xF8) != 0x58 )
      break;
    v53 = 2LL;
LABEL_81:
    v23 += v53;
  }
  if ( v25 == -14 )
  {
    ++v23;
    v25 = *v26;
  }
  if ( (unsigned __int8)(v25 + 62) <= 1u || (v27 = v23 + 1, v25 == -13) && *v27 == 0xC3 )
  {
LABEL_67:
    v73 = 1;
    goto LABEL_68;
  }
  if ( ((v25 + 23) & 0xFD) != 0 )
  {
    if ( v25 == -1 && *v27 == 37 )
      goto LABEL_67;
    if ( (v25 & 0xF8) == 0x48 && *v27 == 0xFF && (v23[2] & 0x38) == 0x20 )
      v73 = 1;
  }
  else
  {
    v35 = &v23[-v13];
    if ( v25 == -21 )
      v36 = (char)*v27 + 2;
    else
      v36 = *(_DWORD *)v27 + 5;
    v37 = (unsigned __int64)&v35[v36];
    v38 = *a4;
    if ( v37 < v38 || v37 >= a4[1] )
    {
      v58 = (_DWORD *)RtlpSameFunction(a4, v13, v37 + v13);
      if ( !v58 || v37 == *v58 )
        goto LABEL_67;
      LODWORD(v13) = a2;
    }
    else if ( v37 == v38 && (*(_BYTE *)v17 & 0x20) == 0 )
    {
      v73 = 1;
    }
  }
  if ( !v73 )
  {
LABEL_27:
    v28 = a5;
    result = RtlpUnwindPrologue(v13, (_DWORD)a3, (unsigned int)*a8, (_DWORD)a4, a5, (__int64)a6, (__int64)&v79, a10);
    if ( (int)result < 0 )
      return result;
    if ( v21 )
    {
      v30 = (_BYTE *)(a2 + (unsigned int)v79[2]);
      if ( (int)a3 - (int)a2 - *v79 >= (unsigned int)(unsigned __int8)v30[1]
        && ((*v30 >> 3) & (unsigned __int8)v21) != 0 )
      {
        v31 = (unsigned __int8)v30[2];
        v32 = v31 + 1;
        if ( (v31 & 1) == 0 )
          v32 = (unsigned __int8)v30[2];
        *a7 = &v30[2 * (v32 + 2) + 4];
        v76 = a2 + *(unsigned int *)&v30[2 * v32 + 4];
      }
    }
    goto LABEL_29;
  }
LABEL_68:
  v28 = a5;
  v47 = a5 + 120;
  if ( (*a3 & 0xF8) == 0x48 )
  {
    v48 = a3[1];
    switch ( v48 )
    {
      case -125:
        *(_QWORD *)(a5 + 152) += a3[3];
        a3 += 4;
        break;
      case -127:
        *(_QWORD *)(a5 + 152) += (((unsigned __int8)a3[4] | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | (unsigned __int8)a3[3];
        goto LABEL_109;
      case -115:
        v71 = a3[2] & 0xF8;
        if ( v71 == 96 )
        {
          v72 = *(_QWORD *)(v47 + 8LL * v15);
          *(_QWORD *)(a5 + 152) = v72;
          *(_QWORD *)(v28 + 152) = v72 + a3[3];
          a3 += 4;
        }
        else if ( v71 == -96 )
        {
          *(_QWORD *)(a5 + 152) = *(_QWORD *)(v47 + 8LL * v15)
                                + ((unsigned __int8)a3[3] | (((unsigned __int8)a3[4] | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
LABEL_109:
          a3 += 7;
        }
        break;
    }
  }
  v77 = (_QWORD **)(v28 + 152);
  v49 = a10;
  v50 = a6;
  while ( 2 )
  {
    v51 = *a3;
    LOBYTE(a11) = v51;
    if ( (v51 & 0xF8) == 0x58 )
    {
      v54 = *v77;
      if ( *(_QWORD *)v49 )
      {
        if ( (unsigned __int64)v54 < **(_QWORD **)v49 )
          return 3221225512LL;
        if ( (unsigned __int64)v54 > **(_QWORD **)(v49 + 8) - 8LL )
          return 3221225512LL;
      }
      v55 = v51 & 7;
      *(_QWORD *)(v47 + 8 * v55) = *v54;
      v56 = *(_QWORD *)(v49 + 16);
      if ( v56 )
        *(_QWORD *)(v56 + 8 * v55 + 128) = v54;
      v57 = 1LL;
LABEL_86:
      ++*v77;
      a3 += v57;
      continue;
    }
    break;
  }
  if ( (v51 & 0xF0) == 0x40 )
  {
    v59 = a3[1];
    LOBYTE(v79) = v59;
    if ( (v59 & 0xF8) == 0x58 )
    {
      v60 = *v77;
      if ( *(_QWORD *)v49 )
      {
        if ( (unsigned __int64)v60 < **(_QWORD **)v49 )
          return 3221225512LL;
        if ( (unsigned __int64)v60 > **(_QWORD **)(v49 + 8) - 8LL )
          return 3221225512LL;
      }
      v61 = v59 & 7 | (8LL * (v51 & 1));
      *(_QWORD *)(v47 + 8 * v61) = *v60;
      v62 = *(_QWORD *)(v49 + 16);
      if ( v62 )
        *(_QWORD *)(v62 + 8 * v61 + 128) = v60;
      v57 = 2LL;
      goto LABEL_86;
    }
  }
  if ( !*(_QWORD *)v49 )
  {
LABEL_75:
    v52 = *v77;
    *(_QWORD *)(v28 + 248) = **v77;
    *v77 = v52 + 1;
    RtlpVirtualPopShadowStack(v28);
    if ( v50 )
      *v50 = 0;
    goto LABEL_29;
  }
  if ( (unsigned __int64)*v77 < **(_QWORD **)v49 )
    return 3221225512LL;
  if ( (unsigned __int64)*v77 <= **(_QWORD **)(v49 + 8) - 8LL )
    goto LABEL_75;
  return 3221225512LL;
}
