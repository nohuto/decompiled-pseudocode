/*
 * XREFs of sub_140648D4C @ 0x140648D4C
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140648D4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  const void *v5; // r12
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  unsigned int *v14; // rcx
  unsigned int *v15; // rax
  signed int v16; // ebx
  unsigned int j; // ecx
  __int64 v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // edx
  unsigned int *v21; // rax
  size_t v22; // rbp
  int v23; // edi
  void *Pool2; // rax
  const void *v25; // rcx
  int v26; // r14d
  unsigned int v27; // r13d
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  int v32; // r8d
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // r9
  unsigned int v38; // ecx
  _DWORD *k; // rdx
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 m; // rdx
  unsigned int v45; // eax
  __int64 v46; // r8
  unsigned int v47; // eax
  unsigned int v48; // ecx
  _DWORD *n; // rdx
  unsigned int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // eax
  unsigned int v53; // ecx
  _DWORD *ii; // rdx
  unsigned int v55; // eax
  __int64 v57; // [rsp+20h] [rbp-38h]

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
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
  v13 = *v9;
  v14 = v9 + 1;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( v13 )
    v15 = v14;
  if ( v13 != 8 )
    return (unsigned int)-1073741789;
  v57 = *(_QWORD *)v15;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v18 = *v4;
    v19 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  v20 = *v4;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  v21 = 0LL;
  if ( v20 )
    v21 = v4 + 1;
  if ( v20 == 4 )
  {
    v22 = *v21;
    if ( (_DWORD)v22 )
    {
      v23 = 0;
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v22, 542329939LL);
      v5 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      memset(Pool2, 0, v22);
    }
    else
    {
      v23 = 1;
    }
    if ( qword_140D3B428 )
    {
      v25 = 0LL;
      if ( !v23 )
        v25 = v5;
      v26 = sub_14042A5E0(v25, (unsigned int)v22);
    }
    else
    {
      v26 = -1073741637;
    }
    v27 = v22 + 4;
    if ( (unsigned int)v22 >= 0xFFFFFFFC
      || v27 >= 0xFFFFFFEC
      || (v28 = (unsigned int)(v22 + 32), (unsigned int)v28 < (int)v22 + 24)
      || (unsigned int)v28 >= 0xFFFFFFF8
      || (v29 = (v22 + 47) & 0xFFFFFFF8, v29 < (int)v22 + 40)
      || (v30 = v29 + 8, v29 + 8 < v29) )
    {
      v16 = -1073741675;
      goto LABEL_96;
    }
    v31 = v29 + 12;
    v32 = *(_DWORD *)(a2 + 16);
    if ( v30 >= 0xFFFFFFFC || (v33 = v30 + 8, v31 + 4 < v31) || (v34 = v33 + v32, v33 + v32 < v33) || v34 + 4 < v34 )
      v16 = -1073741675;
    else
      v16 = v34 + 4 + *(_DWORD *)(a2 + 32) < v34 + 4 ? 0xC0000095 : 0;
    if ( v16 < 0 )
      goto LABEL_96;
    if ( !a4 )
      goto LABEL_46;
    *(_DWORD *)(a4 + 4) = v28;
    if ( (_DWORD)v22 == -32 )
    {
      v16 = -1073741762;
      goto LABEL_96;
    }
    v35 = ExAllocatePool2(256LL, v28, 542329939LL);
    if ( !v35 )
    {
      v16 = -1073741801;
      goto LABEL_96;
    }
    *(_QWORD *)(a4 + 8) = v35;
    *(_DWORD *)a4 = 0;
    v36 = v26 | 0x10000000;
    v37 = v35;
    v38 = 0;
    for ( k = (_DWORD *)v35; v38 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v40) )
    {
      v40 = *k + 4;
      if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v40) < k )
        goto LABEL_76;
      ++v38;
    }
    if ( k + 1 < k )
    {
LABEL_76:
      v16 = -1073741675;
      goto LABEL_96;
    }
    if ( (unsigned __int64)(k + 2) > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
LABEL_57:
      v16 = -1073741789;
      goto LABEL_96;
    }
    *k = 4;
    k[1] = v36;
    ++*(_DWORD *)a4;
    v41 = *(_QWORD *)(a4 + 8);
    if ( v41 )
    {
      v43 = 0;
      for ( m = *(_QWORD *)(a4 + 8); v43 < *(_DWORD *)a4; m += v45 )
      {
        v45 = *(_DWORD *)m + 4;
        if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v45 < m )
          goto LABEL_76;
        ++v43;
      }
      if ( m + 4 < m )
        goto LABEL_76;
      if ( m + 12 > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_57;
      *(_DWORD *)m = 8;
      *(_QWORD *)(m + 4) = v57;
    }
    else
    {
      v42 = *(_DWORD *)(a4 + 4);
      if ( v42 + 12 < v42 )
        goto LABEL_75;
      *(_DWORD *)(a4 + 4) = v42 + 12;
    }
    ++*(_DWORD *)a4;
    if ( v5 )
    {
      if ( !(_DWORD)v22 )
      {
LABEL_46:
        v16 = -1073741811;
        goto LABEL_96;
      }
    }
    else if ( (_DWORD)v22 )
    {
      goto LABEL_46;
    }
    v46 = *(_QWORD *)(a4 + 8);
    if ( v46 )
    {
      v48 = 0;
      for ( n = *(_DWORD **)(a4 + 8); v48 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v50) )
      {
        v50 = *n + 4;
        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v50) < n )
          goto LABEL_76;
        ++v48;
      }
      if ( n + 1 < n )
        goto LABEL_76;
      if ( (unsigned __int64)n + v22 + 4 > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_57;
      *n = v22;
      if ( v5 )
        memmove(n + 1, v5, v22);
      goto LABEL_85;
    }
    v47 = *(_DWORD *)(a4 + 4);
    if ( v47 + v27 >= v47 )
    {
      *(_DWORD *)(a4 + 4) = v47 + v27;
LABEL_85:
      ++*(_DWORD *)a4;
      v51 = *(_QWORD *)(a4 + 8);
      if ( !v51 )
      {
        v52 = *(_DWORD *)(a4 + 4);
        if ( v52 + 8 >= v52 )
        {
          ++*(_DWORD *)a4;
          v16 = 0;
          *(_DWORD *)(a4 + 4) = v52 + 8;
          goto LABEL_96;
        }
        goto LABEL_75;
      }
      v53 = 0;
      for ( ii = *(_DWORD **)(a4 + 8); v53 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v55) )
      {
        v55 = *ii + 4;
        if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v55) < ii )
          goto LABEL_76;
        ++v53;
      }
      if ( ii + 1 >= ii )
      {
        v16 = 0;
        if ( (unsigned __int64)(ii + 2) > v51 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_57;
        *ii = 4;
        ii[1] = 0;
        ++*(_DWORD *)a4;
LABEL_96:
        if ( v5 )
          sub_140348B40((ULONG_PTR)v5);
        return (unsigned int)v16;
      }
      goto LABEL_76;
    }
LABEL_75:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_76;
  }
  return (unsigned int)-1073741789;
}
