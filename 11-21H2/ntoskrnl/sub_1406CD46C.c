/*
 * XREFs of sub_1406CD46C @ 0x1406CD46C
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_140354748 @ 0x140354748 (sub_140354748.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406CD46C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v7; // rdi
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // ebx
  unsigned int v15; // r8d
  unsigned int *v16; // rdx
  unsigned int *v17; // rax
  unsigned int *v18; // rax
  unsigned int j; // edx
  __int64 v20; // r9
  unsigned int *v21; // r8
  unsigned int v22; // r8d
  unsigned int *v23; // rdx
  unsigned int *v24; // rax
  unsigned int v25; // r12d
  unsigned int k; // edx
  __int64 v27; // rax
  unsigned int *v28; // r8
  unsigned int v29; // r15d
  void *v30; // rax
  void *v31; // rbp
  _DWORD *v32; // rcx
  unsigned int *v33; // rax
  unsigned int n; // r8d
  __int64 v35; // r10
  unsigned int *v36; // rdx
  unsigned int ii; // edx
  __int64 v38; // rax
  _DWORD *v39; // r8
  PVOID v40; // rbp
  int v41; // ebx
  _DWORD *v42; // rax
  int v43; // ebx
  unsigned int v44; // r8d
  __int64 v45; // r9
  __int64 v46; // r11
  unsigned __int64 v47; // rdx
  unsigned int jj; // ecx
  unsigned int v49; // eax
  unsigned int kk; // ecx
  unsigned __int64 v51; // rdx
  __int64 v52; // r8
  unsigned int v53; // eax
  unsigned int v54; // ebp
  void *Pool2; // rax
  unsigned int *v56; // rax
  unsigned int m; // ecx
  __int64 v58; // r8
  unsigned int *v59; // rdx
  unsigned int v60; // eax
  _WORD *v61; // rbx
  _WORD *v62; // rbx
  unsigned __int64 v63; // rdx
  int v64; // eax
  char *v65; // r11
  unsigned __int64 v66; // rcx
  __int64 v67; // r11
  unsigned int v68; // eax
  PVOID P; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v70; // [rsp+48h] [rbp-50h] BYREF
  __int64 v71; // [rsp+50h] [rbp-48h]
  __int128 v72; // [rsp+58h] [rbp-40h]

  v7 = 0LL;
  v72 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v8;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  v15 = *v9;
  v16 = v9 + 1;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v17 = 0LL;
  if ( v15 )
    v17 = v16;
  if ( v15 != 8 )
    return (unsigned int)-1073741789;
  v71 = *(_QWORD *)v17;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v18 = v8;
  for ( j = 0; j < 4; ++j )
  {
    v20 = *v18;
    v21 = v18 + 1;
    if ( v18 + 1 < v18 )
      return (unsigned int)-1073741675;
    v18 = (unsigned int *)((char *)v21 + v20);
    if ( (unsigned int *)((char *)v21 + v20) < v21 )
      return (unsigned int)-1073741675;
  }
  v22 = *v18;
  v23 = v18 + 1;
  if ( v18 + 1 < v18 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( v22 )
    v24 = v23;
  if ( v22 != 4 )
    return (unsigned int)-1073741789;
  v25 = *v24;
  P = 0LL;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; k < 5; ++k )
  {
    v27 = *v8;
    v28 = v8 + 1;
    if ( v8 + 1 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  v63 = *v8;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v63 )
    return (unsigned int)-1073741762;
  v61 = v8 + 1;
  if ( (v63 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v61[(v63 >> 1) - 1] )
    return (unsigned int)-1073741762;
  v64 = sub_140354748((_WORD *)v8 + 2, v63, &P);
  if ( v64 < 0 || (char *)P + 2 != v65 || 2 * (unsigned int)((unsigned __int64)P >> 1) == -2 )
    return (unsigned int)-1073741762;
  v54 = 2 * ((unsigned __int64)P >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(256LL, v54, 542329939LL);
  P = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v61, v54);
  v56 = *(unsigned int **)(a1 + 8);
  v70 = 0LL;
  if ( !v56 || *(_DWORD *)a1 <= 6u )
    goto LABEL_81;
  for ( m = 0; m < 6; ++m )
  {
    v58 = *v56;
    v59 = v56 + 1;
    if ( v56 + 1 < v56 )
      goto LABEL_45;
    v56 = (unsigned int *)((char *)v59 + v58);
    if ( (unsigned int *)((char *)v59 + v58) < v59 )
    {
      v40 = P;
      goto LABEL_8;
    }
  }
  v66 = *v56;
  if ( v56 + 1 < v56 )
    goto LABEL_45;
  if ( !(_DWORD)v66
    || (v62 = v56 + 1, (v66 & 1) != 0)
    || *((_WORD *)v56 + (v66 >> 1) + 1)
    || (int)sub_140354748(v62, v66, &v70) < 0
    || v70 + 2 != v67
    || 2 * (unsigned int)(v70 >> 1) == -2 )
  {
    v13 = -1073741762;
    goto LABEL_46;
  }
  v29 = 2 * (v70 >> 1) + 2;
  v30 = (void *)ExAllocatePool2(256LL, v29, 542329939LL);
  v31 = v30;
  if ( !v30 )
  {
    v13 = -1073741801;
    goto LABEL_46;
  }
  memmove(v30, v62, v29);
  v7 = v31;
  v32 = *(_DWORD **)(a1 + 8);
  if ( !v32 || *(_DWORD *)a1 <= 7u )
    goto LABEL_81;
  v33 = *(unsigned int **)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v35 = *v33;
    v36 = v33 + 1;
    if ( v33 + 1 < v33 )
      goto LABEL_45;
    v33 = (unsigned int *)((char *)v36 + v35);
    if ( (unsigned int *)((char *)v36 + v35) < v36 )
      goto LABEL_45;
  }
  if ( v33 + 1 < v33 )
  {
LABEL_45:
    v13 = -1073741675;
LABEL_46:
    v40 = P;
    goto LABEL_9;
  }
  if ( *(_DWORD *)a1 <= 8u )
  {
LABEL_81:
    v13 = -1073741811;
    goto LABEL_46;
  }
  for ( ii = 0; ii < 8; ++ii )
  {
    v38 = (unsigned int)*v32;
    v39 = v32 + 1;
    if ( v32 + 1 < v32 )
      goto LABEL_45;
    v32 = (_DWORD *)((char *)v39 + v38);
    if ( (_DWORD *)((char *)v39 + v38) < v39 )
      goto LABEL_45;
  }
  if ( v32 + 1 < v32 )
    goto LABEL_45;
  if ( *v32 != 4 )
  {
    v13 = -1073741789;
    goto LABEL_46;
  }
  v40 = P;
  if ( qword_140D3B3A8 )
    v41 = sub_14042A5E0(v25, P);
  else
    v41 = -1073700223;
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC0
    || *(_DWORD *)(a2 + 16) + 68 < (unsigned int)(*(_DWORD *)(a2 + 16) + 64)
    || *(_DWORD *)(a2 + 16) + 68 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 68) )
  {
LABEL_8:
    v13 = -1073741675;
    goto LABEL_9;
  }
  *(_DWORD *)(a4 + 4) = 40;
  v42 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 542329939LL);
  if ( !v42 )
  {
    v13 = -1073741801;
    goto LABEL_9;
  }
  *(_QWORD *)(a4 + 8) = v42;
  *(_DWORD *)a4 = 0;
  v43 = v41 | 0x10000000;
  if ( v42 + 1 < v42 )
    goto LABEL_8;
  if ( v42 + 2 > (_DWORD *)((char *)v42 + *(unsigned int *)(a4 + 4)) )
    goto LABEL_116;
  *v42 = 4;
  v42[1] = v43;
  v44 = ++*(_DWORD *)a4;
  v45 = *(_QWORD *)(a4 + 8);
  if ( v45 )
  {
    v46 = v71;
    v47 = *(_QWORD *)(a4 + 8);
    for ( jj = 0; jj < v44; v47 += v49 )
    {
      v49 = *(_DWORD *)v47 + 4;
      if ( *(_DWORD *)v47 >= 0xFFFFFFFC || v47 + v49 < v47 )
        goto LABEL_8;
      ++jj;
    }
    if ( v47 + 4 < v47 )
      goto LABEL_8;
    if ( v47 + 12 > v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
LABEL_116:
      v13 = -1073741789;
      goto LABEL_9;
    }
    *(_DWORD *)v47 = 8;
    *(_QWORD *)(v47 + 4) = v46;
    ++*(_DWORD *)a4;
  }
  else
  {
    v60 = *(_DWORD *)(a4 + 4);
    if ( v60 + 12 < v60 )
      goto LABEL_90;
    *(_DWORD *)(a4 + 4) = v60 + 12;
    *(_DWORD *)a4 = v44 + 1;
  }
  v52 = *(_QWORD *)(a4 + 8);
  if ( v52 )
  {
    v51 = *(_QWORD *)(a4 + 8);
    for ( kk = 0; kk < *(_DWORD *)a4; v51 += v53 )
    {
      v53 = *(_DWORD *)v51 + 4;
      if ( *(_DWORD *)v51 >= 0xFFFFFFFC || v51 + v53 < v51 )
        goto LABEL_8;
      ++kk;
    }
    if ( v51 + 4 < v51 )
      goto LABEL_8;
    v13 = 0;
    if ( v51 + 20 <= v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v51 = 16;
      *(_OWORD *)(v51 + 4) = v72;
      ++*(_DWORD *)a4;
      goto LABEL_9;
    }
    goto LABEL_116;
  }
  v68 = *(_DWORD *)(a4 + 4);
  if ( v68 + 20 < v68 )
  {
LABEL_90:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_8;
  }
  ++*(_DWORD *)a4;
  v13 = 0;
  *(_DWORD *)(a4 + 4) = v68 + 20;
LABEL_9:
  ExFreePoolWithTag(v40, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v13;
}
