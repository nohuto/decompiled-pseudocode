/*
 * XREFs of RtlpxVirtualUnwind @ 0x180039210
 * Callers:
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x180036958 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     RtlVirtualUnwind @ 0x180039050 (RtlVirtualUnwind.c)
 *     RtlVirtualUnwind2 @ 0x18010F9F0 (RtlVirtualUnwind2.c)
 * Callees:
 *     RtlpUnwindPrologue @ 0x1800398D0 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x1800849C0 (RtlpVirtualPopShadowStack.c)
 *     RtlpSameFunction @ 0x1800852D4 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x18008C570 (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x18010FAE4 (RtlpUnwindEpilogue.c)
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
  char *v12; // rbx
  __int64 v13; // r10
  unsigned int v14; // r14d
  int v15; // r13d
  __int64 v16; // rdi
  unsigned int v17; // esi
  _BYTE *v18; // rdx
  int v19; // r8d
  unsigned __int8 *v20; // rax
  int v21; // r12d
  __int64 v22; // r9
  char **v23; // rcx
  _BYTE *v24; // rdx
  char v25; // cl
  char v26; // cl
  _BYTE *v27; // r8
  char v28; // al
  __int64 result; // rax
  _BYTE *v30; // r9
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  char v34; // r8
  int v35; // eax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 v38; // r9
  _BYTE *v39; // r9
  int v40; // edx
  unsigned __int16 v41; // r8
  __int16 v42; // cx
  unsigned int v43; // esi
  int v44; // r8d
  unsigned int v45; // ecx
  unsigned int j; // r11d
  unsigned int v47; // ecx
  __int64 v48; // r10
  char v49; // al
  __int64 v50; // r8
  _BYTE *v51; // rsi
  char v52; // dl
  _QWORD *v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // r11
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  _DWORD *v59; // rax
  char v60; // di
  _QWORD *v61; // r11
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  char **v65; // rdi
  unsigned int i; // ecx
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  char v70; // al
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  int v73; // [rsp+40h] [rbp-68h]
  int v74; // [rsp+44h] [rbp-64h]
  unsigned int v75; // [rsp+48h] [rbp-60h]
  __int64 v76; // [rsp+60h] [rbp-48h]
  _DWORD *v78; // [rsp+C8h] [rbp+20h] BYREF

  v78 = a4;
  v12 = a3;
  v13 = a2;
  if ( !a4 )
  {
    v64 = a5;
    v65 = *(char ***)(a5 + 152);
    if ( *(_QWORD *)a10
      && ((unsigned __int64)v65 < **(_QWORD **)a10 || (unsigned __int64)v65 > **(_QWORD **)(a10 + 8) - 8LL) )
    {
      return 3221225512LL;
    }
    if ( a3 == *v65 )
      return 3221225727LL;
    *(_QWORD *)(a5 + 248) = *v65;
    *(_QWORD *)(v64 + 152) += 8LL;
    RtlpVirtualPopShadowStack(v64);
    *a8 = v65;
    if ( a6 )
      *a6 = 0;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    return 0LL;
  }
  v14 = 0;
  v76 = 0LL;
  v73 = 0;
  v15 = 0;
  v16 = a2 + a4[2];
  v17 = *(_BYTE *)v16 & 7;
  if ( a6 && !*a6 )
    goto LABEL_49;
  if ( v17 < 2 )
  {
    v18 = (_BYTE *)(a2 + a4[2]);
    v19 = 0;
    v20 = (unsigned __int8 *)(v16 + 2);
    if ( !*(_BYTE *)(v16 + 2) )
    {
      while ( (*v18 & 0x20) != 0 )
      {
        v38 = *v20;
        if ( (v38 & 1) != 0 )
          v38 = (unsigned int)(v38 + 1);
        v39 = &v18[2 * v38];
        if ( (unsigned int)++v19 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v18 = (_BYTE *)(v13 + *((unsigned int *)v39 + 3));
        v20 = v18 + 2;
        if ( v18[2] )
          goto LABEL_5;
      }
LABEL_49:
      v15 = 1;
    }
  }
LABEL_5:
  v21 = a1 & 0x7FFFFFFF;
  v74 = 0;
  if ( (*(_BYTE *)(v16 + 3) & 0xF) != 0 )
  {
    v75 = (_DWORD)v12 - v13 - *a4;
    if ( v75 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
    {
      v74 = 1;
      goto LABEL_47;
    }
    for ( i = 0; ; i = v69 + a11 )
    {
      a11 = i;
      v67 = i;
      if ( i >= *(unsigned __int8 *)(v16 + 2) )
        break;
      v68 = *(unsigned __int16 *)(v16 + 2LL * i + 4);
      if ( (BYTE1(v68) & 0xF) == 3 )
        break;
      v69 = RtlpUnwindOpSlots(v68, v67);
    }
    v13 = a2;
    if ( v75 >= *(unsigned __int8 *)(v16 + 2 * v67 + 4) )
      v74 = 1;
  }
  if ( !v74 )
  {
    v22 = a5;
    v23 = *(char ***)(a5 + 152);
    goto LABEL_8;
  }
LABEL_47:
  v22 = a5;
  v23 = (char **)(*(_QWORD *)(a5 + 8LL * (*(_BYTE *)(v16 + 3) & 0xF) + 120) - (*(_BYTE *)(v16 + 3) & 0xF0));
LABEL_8:
  *a8 = v23;
  if ( v15 )
    goto LABEL_28;
  if ( v17 >= 2 )
  {
    v40 = *(unsigned __int8 *)(v16 + 2);
    if ( !(_BYTE)v40 )
      goto LABEL_28;
    v41 = *(_WORD *)(v16 + 4);
    v42 = HIBYTE(v41);
    if ( (HIBYTE(v41) & 0xF) != 6 )
      goto LABEL_28;
    v43 = (unsigned __int8)v41;
    v44 = (_DWORD)v12 - v13;
    if ( (v42 & 0x10) == 0 || (v45 = a4[1] - v43, v44 - v45 >= v43) )
    {
      for ( j = 1; ; ++j )
      {
        if ( j >= *(unsigned __int8 *)(v16 + 2) )
          goto LABEL_28;
        v47 = *(unsigned __int16 *)(v16 + 2LL * j + 4);
        if ( (BYTE1(v47) & 0xF) != 6 )
          goto LABEL_28;
        v40 = (unsigned __int8)v47 + (v47 >> 12 << 8);
        if ( !v40 )
          goto LABEL_28;
        v45 = a4[1] - v40;
        if ( v44 - v45 < v43 )
          break;
      }
    }
    RtlpUnwindEpilogue(v13, v40, v44 - v45, (_DWORD)a4, v22, a10);
    if ( a6 )
      *a6 = 0;
    v73 = 1;
LABEL_30:
    if ( a9 )
      *a9 = v76;
    if ( v73 )
    {
      if ( v74 )
        *a8 = (char **)(*(_QWORD *)(a5 + 152) - 8LL);
    }
    return 0LL;
  }
  v24 = v12;
  v25 = *v12;
  if ( *v12 == 72 )
  {
    if ( v12[1] == -125 && v12[2] == -60 )
    {
      v24 = v12 + 4;
      goto LABEL_15;
    }
    if ( v12[1] == -127 && v12[2] == -60 )
      goto LABEL_108;
  }
  if ( (v25 & 0xFE) == 0x48 && v12[1] == -115 )
  {
    v33 = v12[2] & 7 | (8 * (v25 & 1));
    v14 = v33;
    if ( v33 )
    {
      if ( v33 == (*(_BYTE *)(v16 + 3) & 0xF) )
      {
        v34 = v12[2] & 0xF8;
        if ( v34 == 96 )
        {
          v24 = v12 + 4;
          goto LABEL_15;
        }
        if ( v34 != -96 )
          goto LABEL_15;
LABEL_108:
        v24 = v12 + 7;
        goto LABEL_15;
      }
    }
  }
  while ( 1 )
  {
LABEL_15:
    v26 = *v24;
    if ( (*v24 & 0xF8) == 0x58 )
    {
      v54 = 1LL;
      goto LABEL_90;
    }
    v27 = v24 + 1;
    if ( (v26 & 0xF0) != 0x40 || (*v27 & 0xF8) != 0x58 )
      break;
    v54 = 2LL;
LABEL_90:
    v24 += v54;
  }
  v28 = *v24;
  if ( v26 == -14 )
    v28 = *v27;
  else
    v27 = v24;
  if ( (unsigned __int8)(v28 + 62) <= 1u || v28 == -13 && v27[1] == 0xC3 )
  {
LABEL_77:
    v73 = 1;
    goto LABEL_78;
  }
  if ( ((v28 + 23) & 0xFD) != 0 )
  {
    if ( v28 == -1 && v27[1] == 37 )
      goto LABEL_77;
    if ( (v28 & 0xF8) == 0x48 && v27[1] == 0xFF && (v27[2] & 0x38) == 0x20 )
      v73 = 1;
  }
  else
  {
    if ( v28 == -21 )
      v35 = (char)v27[1] + 2;
    else
      v35 = *(_DWORD *)(v27 + 1) + 5;
    v36 = (unsigned __int64)&v27[v35 - v13];
    v37 = *a4;
    if ( v36 < v37 || v36 >= a4[1] )
    {
      v59 = (_DWORD *)RtlpSameFunction(a4, v13, &v27[v35]);
      if ( !v59 || v36 == *v59 )
      {
        v22 = a5;
        goto LABEL_77;
      }
      LODWORD(v13) = a2;
    }
    else if ( v36 == v37 && (*(_BYTE *)v16 & 0x20) == 0 )
    {
      v73 = 1;
    }
  }
  v22 = a5;
  if ( !v73 )
  {
LABEL_28:
    result = RtlpUnwindPrologue(v13, (_DWORD)v12, (unsigned int)*a8, (_DWORD)a4, v22, (__int64)a6, (__int64)&v78, a10);
    if ( (int)result < 0 )
      return result;
    if ( v21 )
    {
      v30 = (_BYTE *)(a2 + (unsigned int)v78[2]);
      if ( (int)v12 - (int)a2 - *v78 >= (unsigned int)(unsigned __int8)v30[1]
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
    goto LABEL_30;
  }
LABEL_78:
  v48 = v22 + 120;
  if ( (*v12 & 0xF8) == 0x48 )
  {
    v49 = v12[1];
    switch ( v49 )
    {
      case -125:
        *(_QWORD *)(v22 + 152) += v12[3];
        v12 += 4;
        break;
      case -127:
        *(_QWORD *)(v22 + 152) += (((unsigned __int8)v12[4] | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8) | (unsigned __int8)v12[3];
        goto LABEL_111;
      case -115:
        v70 = v12[2] & 0xF8;
        if ( v70 == 96 )
        {
          v71 = *(_QWORD *)(v48 + 8LL * v14);
          *(_QWORD *)(v22 + 152) = v71;
          *(_QWORD *)(v22 + 152) = v71 + v12[3];
          v12 += 4;
        }
        else if ( v70 == -96 )
        {
          *(_QWORD *)(v22 + 152) = *(_QWORD *)(v48 + 8LL * v14)
                                 + ((unsigned __int8)v12[3] | (((unsigned __int8)v12[4] | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8));
LABEL_111:
          v12 += 7;
        }
        break;
    }
  }
  v50 = a10;
  v51 = a6;
  while ( 2 )
  {
    v52 = *v12;
    LOBYTE(a11) = v52;
    if ( (v52 & 0xF8) == 0x58 )
    {
      v55 = *(_QWORD **)(v22 + 152);
      if ( *(_QWORD *)v50 )
      {
        if ( (unsigned __int64)v55 < **(_QWORD **)v50 )
          return 3221225512LL;
        if ( (unsigned __int64)v55 > **(_QWORD **)(v50 + 8) - 8LL )
          return 3221225512LL;
      }
      v56 = v52 & 7;
      *(_QWORD *)(v48 + 8 * v56) = *v55;
      v57 = *(_QWORD *)(v50 + 16);
      if ( v57 )
        *(_QWORD *)(v57 + 8 * v56 + 128) = v55;
      v58 = 1LL;
LABEL_95:
      *(_QWORD *)(v22 + 152) += 8LL;
      v12 += v58;
      continue;
    }
    break;
  }
  if ( (v52 & 0xF0) == 0x40 )
  {
    v60 = v12[1];
    LOBYTE(v78) = v60;
    if ( (v60 & 0xF8) == 0x58 )
    {
      v61 = *(_QWORD **)(v22 + 152);
      if ( *(_QWORD *)v50 )
      {
        if ( (unsigned __int64)v61 < **(_QWORD **)v50 )
          return 3221225512LL;
        if ( (unsigned __int64)v61 > **(_QWORD **)(v50 + 8) - 8LL )
          return 3221225512LL;
      }
      v62 = v60 & 7 | (8LL * (v52 & 1));
      *(_QWORD *)(v48 + 8 * v62) = *v61;
      v63 = *(_QWORD *)(v50 + 16);
      if ( v63 )
        *(_QWORD *)(v63 + 8 * v62 + 128) = v61;
      v58 = 2LL;
      goto LABEL_95;
    }
  }
  if ( !*(_QWORD *)v50 )
  {
LABEL_85:
    v53 = *(_QWORD **)(v22 + 152);
    *(_QWORD *)(v22 + 248) = *v53;
    *(_QWORD *)(v22 + 152) = v53 + 1;
    RtlpVirtualPopShadowStack(v22);
    if ( v51 )
      *v51 = 0;
    goto LABEL_30;
  }
  v72 = *(_QWORD *)(v22 + 152);
  if ( v72 < **(_QWORD **)v50 )
    return 3221225512LL;
  if ( v72 <= **(_QWORD **)(v50 + 8) - 8LL )
    goto LABEL_85;
  return 3221225512LL;
}
