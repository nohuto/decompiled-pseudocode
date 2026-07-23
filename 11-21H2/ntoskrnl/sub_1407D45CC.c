/*
 * XREFs of sub_1407D45CC @ 0x1407D45CC
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_140354748 @ 0x140354748 (sub_140354748.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407D45CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r9
  unsigned int *v10; // rdx
  signed int v11; // ebx
  unsigned int v13; // edx
  unsigned int *v14; // rcx
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int *v19; // rax
  unsigned int n; // r8d
  __int64 v21; // r10
  unsigned int *v22; // rdx
  unsigned int ii; // edx
  __int64 v24; // rax
  unsigned int *v25; // r8
  PVOID v26; // r12
  unsigned int *v27; // rcx
  unsigned int v28; // r8d
  unsigned int *v29; // rax
  size_t v30; // r14
  void *v31; // rax
  int v32; // r15d
  unsigned int v33; // r13d
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // r8d
  unsigned int v38; // eax
  _DWORD *v39; // rax
  int v40; // r15d
  __int64 v41; // r11
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdx
  unsigned int jj; // ecx
  unsigned int v45; // eax
  PVOID v46; // r11
  __int64 v47; // r8
  _DWORD *v48; // rdx
  unsigned int kk; // ecx
  unsigned int v50; // eax
  __int64 v51; // r8
  _DWORD *v52; // rdx
  unsigned int mm; // ecx
  unsigned int v54; // eax
  __int64 v55; // r8
  _DWORD *v56; // rdx
  unsigned int nn; // ecx
  unsigned int v58; // eax
  __int64 v59; // r8
  _DWORD *v60; // rdx
  unsigned int i1; // ecx
  unsigned int v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // r14d
  void *Pool2; // rax
  unsigned int v71; // r9d
  _DWORD *v72; // rax
  unsigned int k; // edx
  __int64 v74; // r10
  _DWORD *v75; // r8
  _DWORD *v76; // r13
  _DWORD *v77; // rax
  unsigned int m; // edx
  __int64 v79; // r10
  _DWORD *v80; // r8
  _WORD *v81; // rbx
  unsigned __int64 v82; // rcx
  char *v83; // r11
  unsigned int v84; // eax
  PVOID P; // [rsp+78h] [rbp+7h] BYREF
  PVOID Src; // [rsp+80h] [rbp+Fh]
  __int64 v87; // [rsp+88h] [rbp+17h]

  v4 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = v4;
  for ( i = 0; i < 3; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  v13 = *v7;
  v14 = v7 + 1;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( v13 )
    v15 = v14;
  if ( v13 != 8 )
    return (unsigned int)-1073741789;
  v87 = *(_QWORD *)v15;
  P = 0LL;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v17 = *v4;
    v18 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  v82 = *v4;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v82 )
    return (unsigned int)-1073741762;
  v81 = v4 + 1;
  if ( (v82 & 1) != 0
    || v81[(v82 >> 1) - 1]
    || (int)sub_140354748(v81, v82, &P) < 0
    || (char *)P + 2 != v83
    || 2 * (unsigned int)((unsigned __int64)P >> 1) == -2 )
  {
    return (unsigned int)-1073741762;
  }
  v69 = 2 * ((unsigned __int64)P >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(256LL, v69, 542329939LL);
  P = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v81, v69);
  v27 = *(unsigned int **)(a1 + 8);
  if ( !v27 )
    goto LABEL_151;
  v71 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 5u )
    goto LABEL_151;
  v72 = *(_DWORD **)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v74 = (unsigned int)*v72;
    v75 = v72 + 1;
    if ( v72 + 1 < v72 )
      goto LABEL_33;
    v72 = (_DWORD *)((char *)v75 + v74);
    if ( (_DWORD *)((char *)v75 + v74) < v75 )
    {
      v26 = P;
      goto LABEL_53;
    }
  }
  if ( v72 + 1 < v72 )
  {
LABEL_33:
    v11 = -1073741675;
    goto LABEL_34;
  }
  v76 = 0LL;
  if ( *v72 )
    v76 = v72 + 1;
  if ( v71 <= 6 )
    goto LABEL_151;
  v77 = *(_DWORD **)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v79 = (unsigned int)*v77;
    v80 = v77 + 1;
    if ( v77 + 1 < v77 )
      goto LABEL_33;
    v77 = (_DWORD *)((char *)v80 + v79);
    if ( (_DWORD *)((char *)v80 + v79) < v80 )
      goto LABEL_33;
  }
  if ( v77 + 1 < v77 )
    goto LABEL_33;
  if ( *v77 != 4 )
  {
LABEL_152:
    v11 = -1073741789;
    goto LABEL_34;
  }
  if ( v71 <= 7 )
    goto LABEL_151;
  v19 = *(unsigned int **)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v21 = *v19;
    v22 = v19 + 1;
    if ( v19 + 1 < v19 )
      goto LABEL_33;
    v19 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      goto LABEL_33;
  }
  if ( v19 + 1 < v19 )
    goto LABEL_33;
  if ( v71 <= 8 )
  {
LABEL_151:
    v11 = -1073741811;
    goto LABEL_34;
  }
  for ( ii = 0; ii < 8; ++ii )
  {
    v24 = *v27;
    v25 = v27 + 1;
    if ( v27 + 1 < v27 )
      goto LABEL_33;
    v27 = (unsigned int *)((char *)v25 + v24);
    if ( (unsigned int *)((char *)v25 + v24) < v25 )
      goto LABEL_33;
  }
  v28 = *v27;
  if ( v27 + 1 < v27 )
    goto LABEL_33;
  v29 = 0LL;
  if ( v28 )
    v29 = v27 + 1;
  if ( v28 != 4 )
    goto LABEL_152;
  v30 = *v29;
  if ( !(_DWORD)v30 )
  {
LABEL_44:
    v26 = P;
    if ( qword_140D3B3B8 )
      v32 = sub_14042A5E0(P, v76);
    else
      v32 = -1073741637;
    v33 = v30 + 4;
    if ( (unsigned int)v30 < 0xFFFFFFFC
      && v33 < 0xFFFFFFEC
      && (int)v30 + 32 >= (unsigned int)(v30 + 24)
      && (int)v30 + 40 >= (unsigned int)(v30 + 32) )
    {
      v34 = v30 + 48;
      if ( (int)v30 + 48 >= (unsigned int)(v30 + 40) && v34 < 0xFFFFFFF8 )
      {
        v35 = (v30 + 63) & 0xFFFFFFF8;
        if ( v35 >= (int)v30 + 56 )
        {
          v36 = v35 + 8;
          if ( v35 + 8 >= v35 )
          {
            v37 = *(_DWORD *)(a2 + 16);
            v38 = v35 + 12;
            if ( v36 >= 0xFFFFFFFC
              || (v63 = v36 + 8, v38 + 4 < v38)
              || (v64 = v63 + v37, v63 + v37 < v63)
              || v64 + 4 < v64 )
            {
              v11 = -1073741675;
            }
            else
            {
              v11 = v64 + 4 + *(_DWORD *)(a2 + 32) < v64 + 4 ? 0xC0000095 : 0;
            }
            if ( v11 < 0 )
              goto LABEL_7;
            v11 = 0;
            if ( a4 )
            {
              *(_DWORD *)(a4 + 4) = v34;
              if ( (_DWORD)v30 == -48 )
              {
                v11 = -1073741762;
                goto LABEL_7;
              }
              v39 = (_DWORD *)ExAllocatePool2(256LL, v34, 542329939LL);
              if ( !v39 )
              {
                v11 = -1073741801;
                goto LABEL_7;
              }
              *(_QWORD *)(a4 + 8) = v39;
              *(_DWORD *)a4 = 0;
              v40 = v32 | 0x10000000;
              v41 = v87;
              if ( v39 + 1 < v39 )
                goto LABEL_6;
              if ( v39 + 2 > (_DWORD *)((char *)v39 + *(unsigned int *)(a4 + 4)) )
                goto LABEL_106;
              *v39 = 4;
              v39[1] = v40;
              v42 = *(_QWORD *)(a4 + 8);
              ++*(_DWORD *)a4;
              if ( v42 )
              {
                v43 = v42;
                for ( jj = 0; jj < *(_DWORD *)a4; v43 += v45 )
                {
                  v45 = *(_DWORD *)v43 + 4;
                  if ( *(_DWORD *)v43 >= 0xFFFFFFFC || v43 + v45 < v43 )
                    goto LABEL_6;
                  ++jj;
                }
                if ( v43 + 4 < v43 )
                  goto LABEL_6;
                if ( v43 + 12 > v42 + *(unsigned int *)(a4 + 4) )
                  goto LABEL_106;
                *(_DWORD *)v43 = 8;
                *(_QWORD *)(v43 + 4) = v41;
              }
              else
              {
                v65 = *(_DWORD *)(a4 + 4);
                if ( v65 + 12 < v65 )
                  goto LABEL_111;
                *(_DWORD *)(a4 + 4) = v65 + 12;
              }
              ++*(_DWORD *)a4;
              v46 = Src;
              if ( Src )
              {
                if ( (_DWORD)v30 )
                  goto LABEL_74;
              }
              else if ( !(_DWORD)v30 )
              {
LABEL_74:
                v47 = *(_QWORD *)(a4 + 8);
                if ( v47 )
                {
                  v48 = *(_DWORD **)(a4 + 8);
                  for ( kk = 0; kk < *(_DWORD *)a4; v48 = (_DWORD *)((char *)v48 + v50) )
                  {
                    v50 = *v48 + 4;
                    if ( *v48 >= 0xFFFFFFFC || (_DWORD *)((char *)v48 + v50) < v48 )
                      goto LABEL_6;
                    ++kk;
                  }
                  if ( v48 + 1 < v48 )
                    goto LABEL_6;
                  if ( (unsigned __int64)v48 + v30 + 4 > v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_106;
                  *v48 = v30;
                  if ( v46 )
                    memmove(v48 + 1, v46, v30);
                }
                else
                {
                  v84 = *(_DWORD *)(a4 + 4);
                  if ( v84 + v33 < v84 )
                    goto LABEL_111;
                  *(_DWORD *)(a4 + 4) = v84 + v33;
                }
                ++*(_DWORD *)a4;
                v51 = *(_QWORD *)(a4 + 8);
                if ( v51 )
                {
                  v52 = *(_DWORD **)(a4 + 8);
                  for ( mm = 0; mm < *(_DWORD *)a4; v52 = (_DWORD *)((char *)v52 + v54) )
                  {
                    v54 = *v52 + 4;
                    if ( *v52 >= 0xFFFFFFFC || (_DWORD *)((char *)v52 + v54) < v52 )
                      goto LABEL_6;
                    ++mm;
                  }
                  if ( v52 + 1 < v52 )
                    goto LABEL_6;
                  if ( (unsigned __int64)(v52 + 2) > v51 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_106;
                  *v52 = 4;
                  v52[1] = 0;
                }
                else
                {
                  v66 = *(_DWORD *)(a4 + 4);
                  if ( v66 + 8 < v66 )
                    goto LABEL_111;
                  *(_DWORD *)(a4 + 4) = v66 + 8;
                }
                ++*(_DWORD *)a4;
                v55 = *(_QWORD *)(a4 + 8);
                if ( !v55 )
                {
                  v67 = *(_DWORD *)(a4 + 4);
                  if ( v67 + 8 < v67 )
                    goto LABEL_111;
                  *(_DWORD *)(a4 + 4) = v67 + 8;
                  goto LABEL_99;
                }
                v56 = *(_DWORD **)(a4 + 8);
                for ( nn = 0; nn < *(_DWORD *)a4; v56 = (_DWORD *)((char *)v56 + v58) )
                {
                  v58 = *v56 + 4;
                  if ( *v56 >= 0xFFFFFFFC || (_DWORD *)((char *)v56 + v58) < v56 )
                    goto LABEL_6;
                  ++nn;
                }
                if ( v56 + 1 < v56 )
                  goto LABEL_6;
                if ( (unsigned __int64)(v56 + 2) <= v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v56 = 4;
                  v56[1] = 0;
LABEL_99:
                  ++*(_DWORD *)a4;
                  v59 = *(_QWORD *)(a4 + 8);
                  if ( v59 )
                  {
                    v60 = *(_DWORD **)(a4 + 8);
                    for ( i1 = 0; i1 < *(_DWORD *)a4; v60 = (_DWORD *)((char *)v60 + v62) )
                    {
                      v62 = *v60 + 4;
                      if ( *v60 >= 0xFFFFFFFC || (_DWORD *)((char *)v60 + v62) < v60 )
                        goto LABEL_6;
                      ++i1;
                    }
                    if ( v60 + 1 >= v60 )
                    {
                      if ( (unsigned __int64)(v60 + 2) > v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_106;
                      *v60 = 4;
                      v60[1] = 0;
LABEL_120:
                      ++*(_DWORD *)a4;
                      goto LABEL_7;
                    }
LABEL_6:
                    v11 = -1073741675;
                    goto LABEL_7;
                  }
                  v68 = *(_DWORD *)(a4 + 4);
                  if ( v68 + 8 >= v68 )
                  {
                    *(_DWORD *)(a4 + 4) = v68 + 8;
                    goto LABEL_120;
                  }
LABEL_111:
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_6;
                }
LABEL_106:
                v11 = -1073741789;
                goto LABEL_7;
              }
            }
            v11 = -1073741811;
            goto LABEL_7;
          }
        }
      }
    }
LABEL_53:
    v11 = -1073741675;
    goto LABEL_7;
  }
  v31 = (void *)ExAllocatePool2(256LL, (unsigned int)v30, 542329939LL);
  Src = v31;
  if ( v31 )
  {
    memset(v31, 0, (unsigned int)v30);
    goto LABEL_44;
  }
  v11 = -1073741801;
LABEL_34:
  v26 = P;
LABEL_7:
  ExFreePoolWithTag(v26, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v11;
}
