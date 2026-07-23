/*
 * XREFs of sub_1406D9B20 @ 0x1406D9B20
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D9B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r9
  unsigned int v12; // ebx
  unsigned int m; // edx
  __int64 v15; // rax
  unsigned int *v16; // r8
  unsigned int v17; // r15d
  unsigned int *v18; // r14
  unsigned int *v19; // rax
  unsigned int k; // edx
  __int64 v21; // r10
  unsigned int *v22; // r8
  unsigned int *v23; // rax
  __int64 v24; // r12
  unsigned int v25; // r9d
  unsigned int *v26; // rax
  unsigned int j; // edx
  __int64 v28; // r10
  unsigned int *v29; // r8
  unsigned int v30; // ecx
  unsigned __int64 ii; // rdx
  __int64 v32; // r9
  unsigned int v33; // eax
  _DWORD *Pool2; // rax
  int v35; // ebx
  unsigned int v36; // ecx
  unsigned __int64 n; // rdx
  unsigned int v38; // eax
  unsigned int v39; // r8d
  __int64 v40; // r9
  unsigned int v41; // eax
  unsigned int v42; // r9d
  unsigned int *v43; // rdx
  unsigned int v44; // eax
  __int128 v45; // [rsp+50h] [rbp-58h]
  __int128 v46; // [rsp+60h] [rbp-48h]

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = v7;
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
  v42 = *v8;
  v43 = v8 + 1;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  v23 = 0LL;
  if ( v42 )
    v23 = v43;
  if ( v42 != 8 )
    return (unsigned int)-1073741789;
  v24 = *(_QWORD *)v23;
  v25 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v26 = v7;
  for ( j = 0; j < 4; ++j )
  {
    v28 = *v26;
    v29 = v26 + 1;
    if ( v26 + 1 < v26 )
      return (unsigned int)-1073741675;
    v26 = (unsigned int *)((char *)v29 + v28);
    if ( (unsigned int *)((char *)v29 + v28) < v29 )
      return (unsigned int)-1073741675;
  }
  v17 = *v26;
  if ( v26 + 1 < v26 )
    return (unsigned int)-1073741675;
  v18 = 0LL;
  if ( v17 )
    v18 = v26 + 1;
  if ( v25 <= 5 )
    return (unsigned int)-1073741811;
  v19 = v7;
  for ( k = 0; k < 5; ++k )
  {
    v21 = *v19;
    v22 = v19 + 1;
    if ( v19 + 1 < v19 )
      return (unsigned int)-1073741675;
    v19 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  if ( v19 + 1 < v19 )
    return (unsigned int)-1073741675;
  if ( v25 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v15 = *v7;
    v16 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v16 + v15);
    if ( (unsigned int *)((char *)v16 + v15) < v16 )
      return (unsigned int)-1073741675;
  }
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  if ( !qword_140D3B3E0 )
    return (unsigned int)-1073741637;
  v12 = sub_14042A5E0(v18, v17);
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0
    || *(_DWORD *)(a2 + 16) + 84 < (unsigned int)(*(_DWORD *)(a2 + 16) + 80)
    || *(_DWORD *)(a2 + 16) + 84 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 84) )
  {
    return (unsigned int)-1073741675;
  }
  *(_DWORD *)(a4 + 4) = 56;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 56LL, 542329939LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  v35 = v12 | 0x10000000;
  if ( Pool2 + 1 < Pool2 )
    return (unsigned int)-1073741675;
  if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *Pool2 = 4;
  Pool2[1] = v35;
  v39 = ++*(_DWORD *)a4;
  v40 = *(_QWORD *)(a4 + 8);
  if ( v40 )
  {
    v36 = 0;
    for ( n = *(_QWORD *)(a4 + 8); v36 < v39; n += v38 )
    {
      v38 = *(_DWORD *)n + 4;
      if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v38 < n )
        return (unsigned int)-1073741675;
      ++v36;
    }
    if ( n + 4 < n )
      return (unsigned int)-1073741675;
    if ( n + 12 > v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *(_DWORD *)n = 8;
    *(_QWORD *)(n + 4) = v24;
    ++*(_DWORD *)a4;
  }
  else
  {
    v41 = *(_DWORD *)(a4 + 4);
    if ( v41 + 12 < v41 )
    {
LABEL_65:
      *(_DWORD *)(a4 + 4) = -1;
      return (unsigned int)-1073741675;
    }
    *(_DWORD *)(a4 + 4) = v41 + 12;
    *(_DWORD *)a4 = v39 + 1;
  }
  v32 = *(_QWORD *)(a4 + 8);
  if ( v32 )
  {
    v30 = 0;
    for ( ii = *(_QWORD *)(a4 + 8); v30 < *(_DWORD *)a4; ii += v33 )
    {
      v33 = *(_DWORD *)ii + 4;
      if ( *(_DWORD *)ii >= 0xFFFFFFFC || ii + v33 < ii )
        return (unsigned int)-1073741675;
      ++v30;
    }
    if ( ii + 4 < ii )
      return (unsigned int)-1073741675;
    v12 = 0;
    if ( ii + 36 <= v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)ii = 32;
      *(_OWORD *)(ii + 4) = v45;
      *(_OWORD *)(ii + 20) = v46;
      ++*(_DWORD *)a4;
      return v12;
    }
    return (unsigned int)-1073741789;
  }
  v44 = *(_DWORD *)(a4 + 4);
  if ( v44 + 36 < v44 )
    goto LABEL_65;
  ++*(_DWORD *)a4;
  v12 = 0;
  *(_DWORD *)(a4 + 4) = v44 + 36;
  return v12;
}
