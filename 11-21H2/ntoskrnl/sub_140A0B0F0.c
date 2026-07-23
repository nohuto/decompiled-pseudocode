/*
 * XREFs of sub_140A0B0F0 @ 0x140A0B0F0
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0B0F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v8; // rax
  unsigned int i; // ecx
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  int v15; // ebx
  __int64 v16; // rbp
  unsigned int j; // ecx
  __int64 v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // edx
  _DWORD *v21; // rax
  __int64 v22; // rdx
  void *Pool2; // r14
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // r9
  unsigned int v27; // ecx
  _DWORD *k; // rdx
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned __int64 m; // rdx
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // eax
  unsigned int v37; // ecx
  _DWORD *n; // rdx
  unsigned int v39; // eax
  __int64 v40; // r8
  unsigned int v41; // eax
  unsigned int v42; // ecx
  _DWORD *v43; // rdx
  unsigned int v44; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( v8 + 1 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  v12 = *v8;
  v13 = v8 + 1;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( v12 )
    v14 = v13;
  if ( v12 != 8 )
    return (unsigned int)-1073741789;
  v16 = *(_QWORD *)v14;
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
    if ( *v21 != 2048 )
      return (unsigned int)-1073741762;
    Pool2 = (void *)ExAllocatePool2(256LL, 2048LL, 542329939LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    if ( !qword_140D3B450 )
    {
      v15 = -1073741637;
      goto LABEL_75;
    }
    v15 = sub_14042A5E0(Pool2, v22);
    if ( v15 < 0 )
    {
LABEL_75:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v15;
    }
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFF7C8
      || *(_DWORD *)(a2 + 16) + 2108 < (unsigned int)(*(_DWORD *)(a2 + 16) + 2104)
      || *(_DWORD *)(a2 + 16) + 2108 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 2108) )
    {
      goto LABEL_56;
    }
    if ( !a4 )
    {
      v15 = -1073741811;
      goto LABEL_75;
    }
    *(_DWORD *)(a4 + 4) = 2080;
    v24 = ExAllocatePool2(256LL, 2080LL, 542329939LL);
    if ( !v24 )
    {
      v15 = -1073741801;
      goto LABEL_75;
    }
    *(_QWORD *)(a4 + 8) = v24;
    *(_DWORD *)a4 = 0;
    v25 = v15 | 0x10000000;
    v26 = v24;
    v27 = 0;
    for ( k = (_DWORD *)v24; v27 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v29) )
    {
      v29 = *k + 4;
      if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v29) < k )
        goto LABEL_56;
      ++v27;
    }
    if ( k + 1 < k )
      goto LABEL_56;
    if ( (unsigned __int64)(k + 2) > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
LABEL_41:
      v15 = -1073741789;
      goto LABEL_75;
    }
    *k = 4;
    k[1] = v25;
    ++*(_DWORD *)a4;
    v30 = *(_QWORD *)(a4 + 8);
    if ( v30 )
    {
      v32 = 0;
      for ( m = *(_QWORD *)(a4 + 8); v32 < *(_DWORD *)a4; m += v34 )
      {
        v34 = *(_DWORD *)m + 4;
        if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v34 < m )
          goto LABEL_56;
        ++v32;
      }
      if ( m + 4 < m )
        goto LABEL_56;
      if ( m + 12 > v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_41;
      *(_DWORD *)m = 8;
      *(_QWORD *)(m + 4) = v16;
    }
    else
    {
      v31 = *(_DWORD *)(a4 + 4);
      if ( v31 + 12 < v31 )
        goto LABEL_55;
      *(_DWORD *)(a4 + 4) = v31 + 12;
    }
    ++*(_DWORD *)a4;
    v35 = *(_QWORD *)(a4 + 8);
    if ( v35 )
    {
      v37 = 0;
      for ( n = *(_DWORD **)(a4 + 8); v37 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v39) )
      {
        v39 = *n + 4;
        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v39) < n )
          goto LABEL_56;
        ++v37;
      }
      if ( n + 1 < n )
        goto LABEL_56;
      if ( (unsigned __int64)(n + 513) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_41;
      *n = 2048;
      memmove(n + 1, Pool2, 0x800uLL);
LABEL_64:
      ++*(_DWORD *)a4;
      v40 = *(_QWORD *)(a4 + 8);
      if ( !v40 )
      {
        v41 = *(_DWORD *)(a4 + 4);
        if ( v41 + 8 >= v41 )
        {
          ++*(_DWORD *)a4;
          v15 = 0;
          *(_DWORD *)(a4 + 4) = v41 + 8;
          goto LABEL_75;
        }
        goto LABEL_55;
      }
      v42 = 0;
      v43 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v44 = *v43 + 4;
          if ( *v43 >= 0xFFFFFFFC || (_DWORD *)((char *)v43 + v44) < v43 )
            break;
          ++v42;
          v43 = (_DWORD *)((char *)v43 + v44);
          if ( v42 >= *(_DWORD *)a4 )
            goto LABEL_71;
        }
      }
      else
      {
LABEL_71:
        if ( v43 + 1 >= v43 )
        {
          v15 = 0;
          if ( (unsigned __int64)(v43 + 2) <= v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v43 = 4;
            v43[1] = 2048;
            ++*(_DWORD *)a4;
            goto LABEL_75;
          }
          goto LABEL_41;
        }
      }
LABEL_56:
      v15 = -1073741675;
      goto LABEL_75;
    }
    v36 = *(_DWORD *)(a4 + 4);
    if ( v36 + 2052 >= v36 )
    {
      *(_DWORD *)(a4 + 4) = v36 + 2052;
      goto LABEL_64;
    }
LABEL_55:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_56;
  }
  return (unsigned int)-1073741789;
}
