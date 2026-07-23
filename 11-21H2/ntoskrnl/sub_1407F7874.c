/*
 * XREFs of sub_1407F7874 @ 0x1407F7874
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407F7874(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rax
  __int64 v8; // rbp
  unsigned int j; // edx
  __int64 v10; // rax
  unsigned int *v11; // r8
  unsigned int *v12; // rcx
  __int64 v13; // rdx
  unsigned int *v14; // rax
  unsigned int *v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  _DWORD *m; // r8
  _OWORD *v19; // rdx
  __int64 v20; // rcx
  char *v21; // rax
  __int128 v22; // xmm1
  __int64 v24; // r9
  unsigned int v25; // eax
  unsigned int *v26; // rax
  unsigned int i; // edx
  __int64 v28; // r10
  unsigned int *v29; // r9
  unsigned int v30; // r9d
  unsigned int *v31; // rdx
  _DWORD *Pool2; // rax
  int v33; // ebx
  unsigned int v34; // r8d
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned __int64 k; // rdx
  unsigned int v39; // eax
  unsigned int v40; // eax
  char v41; // [rsp+30h] [rbp-118h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v12 = *(unsigned int **)(a1 + 8);
  if ( !v12 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v26 = v12;
  for ( i = 0; i < 3; ++i )
  {
    v28 = *v26;
    v29 = v26 + 1;
    if ( v26 + 1 < v26 )
      return (unsigned int)-1073741675;
    v26 = (unsigned int *)((char *)v29 + v28);
    if ( (unsigned int *)((char *)v29 + v28) < v29 )
      return (unsigned int)-1073741675;
  }
  v30 = *v26;
  v31 = v26 + 1;
  if ( v26 + 1 < v26 )
    return (unsigned int)-1073741675;
  v7 = 0LL;
  if ( v30 )
    v7 = v31;
  if ( v30 != 8 )
    return (unsigned int)-1073741789;
  v8 = *(_QWORD *)v7;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v10 = *v12;
    v11 = v12 + 1;
    if ( v12 + 1 < v12 )
      return (unsigned int)-1073741675;
    v12 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  v13 = *v12;
  v14 = v12 + 1;
  if ( v12 + 1 < v12 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( (_DWORD)v13 )
    v15 = v14;
  if ( !qword_140D3B3D8 )
    return (unsigned int)-1073741637;
  v16 = sub_14042A5E0(v15, v13);
  if ( (v16 & 0x80000000) != 0 )
    return v16;
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFED0
    || *(_DWORD *)(a2 + 16) + 308 < (unsigned int)(*(_DWORD *)(a2 + 16) + 304)
    || *(_DWORD *)(a2 + 16) + 308 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 308) )
  {
    return (unsigned int)-1073741675;
  }
  *(_DWORD *)(a4 + 4) = 280;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 280LL, 542329939LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  v33 = v16 | 0x10000000;
  if ( Pool2 + 1 < Pool2 )
    return (unsigned int)-1073741675;
  if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *Pool2 = 4;
  Pool2[1] = v33;
  v34 = ++*(_DWORD *)a4;
  v35 = *(_QWORD *)(a4 + 8);
  if ( v35 )
  {
    v37 = 0;
    for ( k = *(_QWORD *)(a4 + 8); v37 < v34; k += v39 )
    {
      v39 = *(_DWORD *)k + 4;
      if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v39 < k )
        return (unsigned int)-1073741675;
      ++v37;
    }
    if ( k + 4 < k )
      return (unsigned int)-1073741675;
    if ( k + 12 > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *(_DWORD *)k = 8;
    *(_QWORD *)(k + 4) = v8;
    ++*(_DWORD *)a4;
  }
  else
  {
    v36 = *(_DWORD *)(a4 + 4);
    if ( v36 + 12 < v36 )
      goto LABEL_51;
    *(_DWORD *)(a4 + 4) = v36 + 12;
    *(_DWORD *)a4 = v34 + 1;
  }
  v24 = *(_QWORD *)(a4 + 8);
  if ( !v24 )
  {
    v40 = *(_DWORD *)(a4 + 4);
    if ( v40 + 260 >= v40 )
    {
      ++*(_DWORD *)a4;
      v16 = 0;
      *(_DWORD *)(a4 + 4) = v40 + 260;
      return v16;
    }
LABEL_51:
    *(_DWORD *)(a4 + 4) = -1;
    return (unsigned int)-1073741675;
  }
  v17 = 0;
  for ( m = *(_DWORD **)(a4 + 8); v17 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v25) )
  {
    v25 = *m + 4;
    if ( *m >= 0xFFFFFFFC || (_DWORD *)((char *)m + v25) < m )
      return (unsigned int)-1073741675;
    ++v17;
  }
  v19 = m + 1;
  if ( m + 1 < m )
    return (unsigned int)-1073741675;
  v16 = 0;
  if ( (unsigned __int64)(m + 65) > v24 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  v20 = 2LL;
  *m = 256;
  v21 = &v41;
  do
  {
    *v19 = *(_OWORD *)v21;
    v19[1] = *((_OWORD *)v21 + 1);
    v19[2] = *((_OWORD *)v21 + 2);
    v19[3] = *((_OWORD *)v21 + 3);
    v19[4] = *((_OWORD *)v21 + 4);
    v19[5] = *((_OWORD *)v21 + 5);
    v19[6] = *((_OWORD *)v21 + 6);
    v19 += 8;
    v22 = *((_OWORD *)v21 + 7);
    v21 += 128;
    *(v19 - 1) = v22;
    --v20;
  }
  while ( v20 );
  ++*(_DWORD *)a4;
  return v16;
}
