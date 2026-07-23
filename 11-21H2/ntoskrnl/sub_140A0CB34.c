/*
 * XREFs of sub_140A0CB34 @ 0x140A0CB34
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

__int64 __fastcall sub_140A0CB34(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r9
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  signed int v14; // ebx
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // r9
  unsigned int *v18; // rdx
  unsigned int v19; // edx
  unsigned int *v20; // rcx
  unsigned int *v21; // rax
  unsigned int k; // ecx
  __int64 v23; // rax
  unsigned int *v24; // rdx
  unsigned __int64 v25; // rcx
  _WORD *v26; // rsi
  char *v27; // r11
  unsigned int v28; // eax
  size_t v29; // rbp
  void *Pool2; // rax
  unsigned int *v31; // rcx
  unsigned int v32; // r9d
  unsigned int *v33; // rax
  unsigned int m; // r8d
  __int64 v35; // r10
  unsigned int *v36; // rdx
  unsigned int *v37; // rax
  unsigned int n; // edx
  __int64 v39; // r10
  unsigned int *v40; // r8
  unsigned int ii; // edx
  __int64 v42; // rax
  unsigned int *v43; // r8
  unsigned int v44; // r8d
  unsigned int *v45; // rax
  size_t v46; // rsi
  void *v47; // rax
  PVOID v48; // r15
  int v49; // ebp
  unsigned int v50; // r14d
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // edx
  int v54; // r8d
  unsigned int v55; // eax
  unsigned int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // rax
  int v59; // ebp
  __int64 v60; // r9
  unsigned int v61; // ecx
  __int64 v62; // r11
  _DWORD *jj; // rdx
  unsigned int v64; // eax
  __int64 v65; // r8
  unsigned int v66; // eax
  unsigned int v67; // ecx
  unsigned __int64 kk; // rdx
  unsigned int v69; // eax
  void *v70; // r11
  __int64 v71; // r8
  unsigned int v72; // eax
  unsigned int v73; // ecx
  _DWORD *mm; // rdx
  unsigned int v75; // eax
  __int64 v76; // r8
  unsigned int v77; // eax
  unsigned int v78; // ecx
  _DWORD *v79; // rdx
  unsigned int v80; // eax
  unsigned int v82; // [rsp+50h] [rbp-58h]
  PVOID P; // [rsp+58h] [rbp-50h] BYREF
  void *Src; // [rsp+60h] [rbp-48h]
  __int64 v85; // [rsp+68h] [rbp-40h]

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
  v11 = *v7;
  v12 = v7 + 1;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( v11 )
    v13 = v12;
  if ( v11 != 8 )
    return (unsigned int)-1073741789;
  v85 = *(_QWORD *)v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v17 = *v15;
    v18 = v15 + 1;
    if ( v15 + 1 < v15 )
      return (unsigned int)-1073741675;
    v15 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  v19 = *v15;
  v20 = v15 + 1;
  if ( v15 + 1 < v15 )
    return (unsigned int)-1073741675;
  v21 = 0LL;
  if ( v19 )
    v21 = v20;
  if ( v19 != 4 )
    return (unsigned int)-1073741789;
  v82 = *v21;
  P = 0LL;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; k < 5; ++k )
  {
    v23 = *v4;
    v24 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v24 + v23);
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  v25 = *v4;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v25 )
    return (unsigned int)-1073741762;
  v26 = v4 + 1;
  if ( (v25 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v26[(v25 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( (int)sub_140354748(v26, *v4, &P) < 0 )
    return (unsigned int)-1073741762;
  if ( (char *)P + 2 != v27 )
    return (unsigned int)-1073741762;
  v28 = 2 * ((unsigned __int64)P >> 1) + 2;
  if ( 2 * (unsigned int)((unsigned __int64)P >> 1) == -2 )
    return (unsigned int)-1073741762;
  v29 = v28;
  Pool2 = (void *)ExAllocatePool2(256LL, v28, 542329939LL);
  P = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v26, v29);
  v31 = *(unsigned int **)(a1 + 8);
  if ( v31 && (v32 = *(_DWORD *)a1, *(_DWORD *)a1 > 6u) )
  {
    v33 = *(unsigned int **)(a1 + 8);
    for ( m = 0; m < 6; ++m )
    {
      v35 = *v33;
      v36 = v33 + 1;
      if ( v33 + 1 < v33 )
        goto LABEL_133;
      v33 = (unsigned int *)((char *)v36 + v35);
      if ( (unsigned int *)((char *)v36 + v35) < v36 )
      {
        v48 = P;
        goto LABEL_132;
      }
    }
    if ( v33 + 1 >= v33 )
    {
      if ( v32 <= 7 )
        goto LABEL_39;
      v37 = *(unsigned int **)(a1 + 8);
      for ( n = 0; n < 7; ++n )
      {
        v39 = *v37;
        v40 = v37 + 1;
        if ( v37 + 1 < v37 )
          goto LABEL_133;
        v37 = (unsigned int *)((char *)v40 + v39);
        if ( (unsigned int *)((char *)v40 + v39) < v40 )
          goto LABEL_133;
      }
      if ( v37 + 1 >= v37 )
      {
        if ( v32 <= 8 )
          goto LABEL_39;
        for ( ii = 0; ii < 8; ++ii )
        {
          v42 = *v31;
          v43 = v31 + 1;
          if ( v31 + 1 < v31 )
            goto LABEL_133;
          v31 = (unsigned int *)((char *)v43 + v42);
          if ( (unsigned int *)((char *)v43 + v42) < v43 )
            goto LABEL_133;
        }
        v44 = *v31;
        if ( v31 + 1 < v31 )
          goto LABEL_133;
        v45 = 0LL;
        if ( v44 )
          v45 = v31 + 1;
        if ( v44 != 4 )
        {
          v14 = -1073741789;
          goto LABEL_134;
        }
        v46 = *v45;
        if ( (_DWORD)v46 )
        {
          v47 = (void *)ExAllocatePool2(256LL, (unsigned int)v46, 542329939LL);
          Src = v47;
          if ( !v47 )
          {
            v14 = -1073741801;
            goto LABEL_134;
          }
          memset(v47, 0, v46);
        }
        v48 = P;
        if ( qword_140D3B3B0 )
          v49 = sub_14042A5E0(v82, P);
        else
          v49 = -1073741637;
        v50 = v46 + 4;
        if ( (unsigned int)v46 >= 0xFFFFFFFC )
          goto LABEL_132;
        if ( v50 >= 0xFFFFFFEC )
          goto LABEL_132;
        v51 = v46 + 32;
        if ( (int)v46 + 32 < (unsigned int)(v46 + 24) )
          goto LABEL_132;
        if ( v51 >= 0xFFFFFFF8 )
          goto LABEL_132;
        v52 = (v46 + 47) & 0xFFFFFFF8;
        if ( v52 < (int)v46 + 40 )
          goto LABEL_132;
        v53 = v52 + 8;
        if ( v52 + 8 < v52 )
          goto LABEL_132;
        v54 = *(_DWORD *)(a2 + 16);
        v55 = v52 + 12;
        if ( v53 + 4 < 4 || (v56 = v53 + 8, v55 + 4 < v55) || (v57 = v56 + v54, v56 + v54 < v56) || v57 + 4 < v57 )
          v14 = -1073741675;
        else
          v14 = v57 + 4 + *(_DWORD *)(a2 + 32) < v57 + 4 ? 0xC0000095 : 0;
        if ( v14 < 0 )
          goto LABEL_135;
        if ( !a4 )
        {
LABEL_83:
          v14 = -1073741811;
          goto LABEL_135;
        }
        *(_DWORD *)(a4 + 4) = v51;
        if ( (_DWORD)v46 == -32 )
        {
          v14 = -1073741762;
          goto LABEL_135;
        }
        v58 = ExAllocatePool2(256LL, v51, 542329939LL);
        if ( !v58 )
        {
          v14 = -1073741801;
          goto LABEL_135;
        }
        *(_QWORD *)(a4 + 8) = v58;
        *(_DWORD *)a4 = 0;
        v59 = v49 | 0x10000000;
        v60 = v58;
        v61 = 0;
        v62 = v85;
        for ( jj = (_DWORD *)v58; v61 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v64) )
        {
          v64 = *jj + 4;
          if ( v64 < 4 || (_DWORD *)((char *)jj + v64) < jj )
            goto LABEL_132;
          ++v61;
        }
        if ( jj + 1 < jj )
          goto LABEL_132;
        if ( (unsigned __int64)(jj + 2) > v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
LABEL_94:
          v14 = -1073741789;
          goto LABEL_135;
        }
        *jj = 4;
        jj[1] = v59;
        ++*(_DWORD *)a4;
        v65 = *(_QWORD *)(a4 + 8);
        if ( v65 )
        {
          v67 = 0;
          for ( kk = *(_QWORD *)(a4 + 8); v67 < *(_DWORD *)a4; kk += v69 )
          {
            v69 = *(_DWORD *)kk + 4;
            if ( v69 < 4 || kk + v69 < kk )
              goto LABEL_132;
            ++v67;
          }
          if ( kk + 4 < kk )
            goto LABEL_132;
          if ( kk + 12 > v65 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_94;
          *(_DWORD *)kk = 8;
          *(_QWORD *)(kk + 4) = v62;
        }
        else
        {
          v66 = *(_DWORD *)(a4 + 4);
          if ( v66 + 12 < v66 )
            goto LABEL_112;
          *(_DWORD *)(a4 + 4) = v66 + 12;
        }
        ++*(_DWORD *)a4;
        v70 = Src;
        if ( Src )
        {
          if ( !(_DWORD)v46 )
            goto LABEL_83;
        }
        else if ( (_DWORD)v46 )
        {
          goto LABEL_83;
        }
        v71 = *(_QWORD *)(a4 + 8);
        if ( v71 )
        {
          v73 = 0;
          for ( mm = *(_DWORD **)(a4 + 8); v73 < *(_DWORD *)a4; mm = (_DWORD *)((char *)mm + v75) )
          {
            v75 = *mm + 4;
            if ( v75 < 4 || (_DWORD *)((char *)mm + v75) < mm )
              goto LABEL_132;
            ++v73;
          }
          if ( mm + 1 < mm )
            goto LABEL_132;
          if ( (unsigned __int64)mm + v46 + 4 > v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_94;
          *mm = v46;
          if ( v70 )
            memmove(mm + 1, v70, v46);
        }
        else
        {
          v72 = *(_DWORD *)(a4 + 4);
          if ( v72 + v50 < v72 )
            goto LABEL_112;
          *(_DWORD *)(a4 + 4) = v72 + v50;
        }
        ++*(_DWORD *)a4;
        v76 = *(_QWORD *)(a4 + 8);
        if ( !v76 )
        {
          v77 = *(_DWORD *)(a4 + 4);
          if ( v77 + 8 >= v77 )
          {
            ++*(_DWORD *)a4;
            v14 = 0;
            *(_DWORD *)(a4 + 4) = v77 + 8;
            goto LABEL_135;
          }
LABEL_112:
          *(_DWORD *)(a4 + 4) = -1;
          goto LABEL_132;
        }
        v78 = 0;
        v79 = *(_DWORD **)(a4 + 8);
        if ( !*(_DWORD *)a4 )
        {
LABEL_128:
          if ( v79 + 1 < v79 )
            goto LABEL_132;
          v14 = 0;
          if ( (unsigned __int64)(v79 + 2) <= v76 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v79 = 4;
            v79[1] = 0;
            ++*(_DWORD *)a4;
            goto LABEL_135;
          }
          goto LABEL_94;
        }
        while ( 1 )
        {
          v80 = *v79 + 4;
          if ( v80 < 4 || (_DWORD *)((char *)v79 + v80) < v79 )
            break;
          ++v78;
          v79 = (_DWORD *)((char *)v79 + v80);
          if ( v78 >= *(_DWORD *)a4 )
            goto LABEL_128;
        }
LABEL_132:
        v14 = -1073741675;
        goto LABEL_135;
      }
    }
LABEL_133:
    v14 = -1073741675;
  }
  else
  {
LABEL_39:
    v14 = -1073741811;
  }
LABEL_134:
  v48 = P;
LABEL_135:
  ExFreePoolWithTag(v48, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v14;
}
