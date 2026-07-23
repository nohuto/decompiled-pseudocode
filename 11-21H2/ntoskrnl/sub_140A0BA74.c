/*
 * XREFs of sub_140A0BA74 @ 0x140A0BA74
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0BA74(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  unsigned int i; // ecx
  __int64 v8; // r8
  unsigned int *v9; // rdx
  __int64 v10; // rdx
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rbp
  __int64 Pool2; // rax
  int v16; // ebx
  __int64 v17; // r9
  unsigned int v19; // ecx
  _DWORD *j; // rdx
  unsigned int v21; // eax
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned __int64 k; // rdx
  unsigned int v26; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0; i < 3; ++i )
  {
    v8 = *v4;
    v9 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v9 + v8);
    if ( (unsigned int *)((char *)v9 + v8) < v9 )
      return (unsigned int)-1073741675;
  }
  v10 = *v4;
  v11 = v4 + 1;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  v12 = 0LL;
  if ( (_DWORD)v10 )
    v12 = v11;
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_QWORD *)v12;
  if ( !qword_140D3B370 )
    return (unsigned int)-1073741637;
  v13 = sub_14042A5E0(v11, v10);
  if ( (v13 & 0x80000000) == 0 )
  {
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0
      && *(_DWORD *)(a2 + 16) + 52 >= (unsigned int)(*(_DWORD *)(a2 + 16) + 48)
      && *(_DWORD *)(a2 + 16) + 52 + *(_DWORD *)(a2 + 32) >= (unsigned int)(*(_DWORD *)(a2 + 16) + 52) )
    {
      if ( !a4 )
        return (unsigned int)-1073741811;
      *(_DWORD *)(a4 + 4) = 20;
      Pool2 = ExAllocatePool2(256LL, 20LL, 542329939LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = Pool2;
      *(_DWORD *)a4 = 0;
      v16 = v13 | 0x10000000;
      v17 = Pool2;
      v19 = 0;
      for ( j = (_DWORD *)Pool2; v19 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v21) )
      {
        v21 = *j + 4;
        if ( *j >= 0xFFFFFFFC || (_DWORD *)((char *)j + v21) < j )
          return (unsigned int)-1073741675;
        ++v19;
      }
      if ( j + 1 >= j )
      {
        if ( (unsigned __int64)(j + 2) > v17 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *j = 4;
        j[1] = v16;
        ++*(_DWORD *)a4;
        v22 = *(_QWORD *)(a4 + 8);
        if ( !v22 )
        {
          v23 = *(_DWORD *)(a4 + 4);
          if ( v23 + 12 >= v23 )
          {
            ++*(_DWORD *)a4;
            v13 = 0;
            *(_DWORD *)(a4 + 4) = v23 + 12;
            return v13;
          }
          *(_DWORD *)(a4 + 4) = -1;
          return (unsigned int)-1073741675;
        }
        v24 = 0;
        for ( k = *(_QWORD *)(a4 + 8); v24 < *(_DWORD *)a4; k += v26 )
        {
          v26 = *(_DWORD *)k + 4;
          if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v26 < k )
            return (unsigned int)-1073741675;
          ++v24;
        }
        if ( k + 4 >= k )
        {
          v13 = 0;
          if ( k + 12 <= v22 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)k = 8;
            *(_QWORD *)(k + 4) = v14;
            ++*(_DWORD *)a4;
            return v13;
          }
          return (unsigned int)-1073741789;
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  return v13;
}
