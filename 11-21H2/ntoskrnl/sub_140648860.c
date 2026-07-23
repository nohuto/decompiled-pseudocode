/*
 * XREFs of sub_140648860 @ 0x140648860
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140648860(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  const void *v5; // r12
  unsigned int v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  unsigned int *v14; // rcx
  unsigned int *v15; // rax
  signed int v16; // ebx
  unsigned int v17; // r10d
  unsigned int *v18; // rax
  unsigned int i; // ecx
  __int64 v20; // r9
  unsigned int *v21; // rdx
  unsigned int v22; // r15d
  unsigned int *v23; // r14
  unsigned int j; // ecx
  __int64 v25; // rax
  unsigned int *v26; // rdx
  unsigned int v27; // edx
  unsigned int *v28; // rax
  size_t v29; // rbp
  void *Pool2; // rax
  int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // eax
  int v37; // r8d
  unsigned int v38; // edx
  unsigned int v39; // eax
  __int64 v40; // rax
  int v41; // r14d
  __int64 v42; // r9
  unsigned int v43; // ecx
  _DWORD *k; // rdx
  unsigned int v45; // eax
  __int64 v46; // r8
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 m; // rdx
  unsigned int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // eax
  unsigned int v53; // ecx
  _DWORD *n; // rdx
  unsigned int v55; // eax
  __int64 v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // ecx
  _DWORD *ii; // rdx
  unsigned int v60; // eax
  __int64 v62; // [rsp+30h] [rbp-38h]

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = 0;
  v10 = v4;
  do
  {
    v11 = *v10;
    v12 = v10 + 1;
    if ( v10 + 1 < v10 )
      return (unsigned int)-1073741675;
    v10 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
    ++v9;
  }
  while ( v9 < 3 );
  v13 = *v10;
  v14 = v10 + 1;
  if ( v10 + 1 < v10 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( v13 )
    v15 = v14;
  if ( v13 == 8 )
  {
    v62 = *(_QWORD *)v15;
    v17 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v18 = v4;
    for ( i = 0; i < 4; ++i )
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
    if ( v18 + 1 >= v18 )
    {
      v23 = 0LL;
      if ( v22 )
        v23 = v18 + 1;
      if ( v17 <= 5 )
        return (unsigned int)-1073741811;
      for ( j = 0; j < 5; ++j )
      {
        v25 = *v4;
        v26 = v4 + 1;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v4 = (unsigned int *)((char *)v26 + v25);
        if ( (unsigned int *)((char *)v26 + v25) < v26 )
          return (unsigned int)-1073741675;
      }
      v27 = *v4;
      if ( v4 + 1 < v4 )
        return (unsigned int)-1073741675;
      v28 = 0LL;
      if ( v27 )
        v28 = v4 + 1;
      if ( v27 != 4 )
        return (unsigned int)-1073741789;
      v29 = *v28;
      if ( (_DWORD)v29 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v29, 542329939LL);
        v5 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        memset(Pool2, 0, v29);
      }
      if ( qword_140D3B3C8 )
        v31 = sub_14042A5E0(v23, v22);
      else
        v31 = -1073741637;
      v32 = v29 + 4;
      if ( (unsigned int)v29 >= 0xFFFFFFFC
        || v32 >= 0xFFFFFFEC
        || (v33 = v29 + 32, (int)v29 + 32 < (unsigned int)(v29 + 24))
        || v33 >= 0xFFFFFFF8
        || (v34 = (v29 + 47) & 0xFFFFFFF8, v34 < (int)v29 + 40)
        || (v35 = v34 + 8, v34 + 8 < v34) )
      {
        v16 = -1073741675;
        goto LABEL_101;
      }
      v36 = v34 + 12;
      v37 = *(_DWORD *)(a2 + 16);
      if ( v35 >= 0xFFFFFFFC || (v38 = v35 + 8, v36 + 4 < v36) || (v39 = v38 + v37, v38 + v37 < v38) || v39 + 4 < v39 )
        v16 = -1073741675;
      else
        v16 = v39 + 4 + *(_DWORD *)(a2 + 32) < v39 + 4 ? 0xC0000095 : 0;
      if ( v16 < 0 )
        goto LABEL_101;
      if ( !a4 )
        goto LABEL_51;
      *(_DWORD *)(a4 + 4) = v33;
      if ( (_DWORD)v29 == -32 )
      {
        v16 = -1073741762;
        goto LABEL_101;
      }
      v40 = ExAllocatePool2(256LL, v33, 542329939LL);
      if ( !v40 )
      {
        v16 = -1073741801;
        goto LABEL_101;
      }
      *(_QWORD *)(a4 + 8) = v40;
      *(_DWORD *)a4 = 0;
      v41 = v31 | 0x10000000;
      v42 = v40;
      v43 = 0;
      for ( k = (_DWORD *)v40; v43 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v45) )
      {
        v45 = *k + 4;
        if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v45) < k )
          goto LABEL_81;
        ++v43;
      }
      if ( k + 1 < k )
      {
LABEL_81:
        v16 = -1073741675;
        goto LABEL_101;
      }
      if ( (unsigned __int64)(k + 2) > v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
LABEL_62:
        v16 = -1073741789;
        goto LABEL_101;
      }
      *k = 4;
      k[1] = v41;
      ++*(_DWORD *)a4;
      v46 = *(_QWORD *)(a4 + 8);
      if ( v46 )
      {
        v48 = 0;
        for ( m = *(_QWORD *)(a4 + 8); v48 < *(_DWORD *)a4; m += v50 )
        {
          v50 = *(_DWORD *)m + 4;
          if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v50 < m )
            goto LABEL_81;
          ++v48;
        }
        if ( m + 4 < m )
          goto LABEL_81;
        if ( m + 12 > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_62;
        *(_DWORD *)m = 8;
        *(_QWORD *)(m + 4) = v62;
      }
      else
      {
        v47 = *(_DWORD *)(a4 + 4);
        if ( v47 + 12 < v47 )
          goto LABEL_80;
        *(_DWORD *)(a4 + 4) = v47 + 12;
      }
      ++*(_DWORD *)a4;
      if ( v5 )
      {
        if ( !(_DWORD)v29 )
        {
LABEL_51:
          v16 = -1073741811;
          goto LABEL_101;
        }
      }
      else if ( (_DWORD)v29 )
      {
        goto LABEL_51;
      }
      v51 = *(_QWORD *)(a4 + 8);
      if ( v51 )
      {
        v53 = 0;
        for ( n = *(_DWORD **)(a4 + 8); v53 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v55) )
        {
          v55 = *n + 4;
          if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v55) < n )
            goto LABEL_81;
          ++v53;
        }
        if ( n + 1 < n )
          goto LABEL_81;
        if ( (unsigned __int64)n + v29 + 4 > v51 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_62;
        *n = v29;
        if ( v5 )
          memmove(n + 1, v5, v29);
        goto LABEL_90;
      }
      v52 = *(_DWORD *)(a4 + 4);
      if ( v52 + v32 >= v52 )
      {
        *(_DWORD *)(a4 + 4) = v52 + v32;
LABEL_90:
        ++*(_DWORD *)a4;
        v56 = *(_QWORD *)(a4 + 8);
        if ( !v56 )
        {
          v57 = *(_DWORD *)(a4 + 4);
          if ( v57 + 8 >= v57 )
          {
            ++*(_DWORD *)a4;
            v16 = 0;
            *(_DWORD *)(a4 + 4) = v57 + 8;
            goto LABEL_101;
          }
          goto LABEL_80;
        }
        v58 = 0;
        for ( ii = *(_DWORD **)(a4 + 8); v58 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v60) )
        {
          v60 = *ii + 4;
          if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v60) < ii )
            goto LABEL_81;
          ++v58;
        }
        if ( ii + 1 >= ii )
        {
          v16 = 0;
          if ( (unsigned __int64)(ii + 2) > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_62;
          *ii = 4;
          ii[1] = 0;
          ++*(_DWORD *)a4;
LABEL_101:
          if ( v5 )
            sub_140348B40((ULONG_PTR)v5);
          return (unsigned int)v16;
        }
        goto LABEL_81;
      }
LABEL_80:
      *(_DWORD *)(a4 + 4) = -1;
      goto LABEL_81;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741789;
}
