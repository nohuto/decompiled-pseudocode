/*
 * XREFs of sub_1406E17A8 @ 0x1406E17A8
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406E17A8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r9d
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  _DWORD *Pool2; // rax
  unsigned int i; // ecx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // eax

  v5 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v14 = *(_DWORD *)(a2 + 16) + 52;
  if ( v14 < *(_DWORD *)(a2 + 16) + 48 || v14 + v5 < v14 )
    return (unsigned int)-1073741675;
  v6 = 0;
  if ( a3 < v14 + v5 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = __rdtsc();
    qword_140D3B220 = v8;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a4 + 4) = 20;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  if ( Pool2 + 1 < Pool2 )
    return (unsigned int)-1073741675;
  if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *Pool2 = 4;
  Pool2[1] = 0;
  ++*(_DWORD *)a4;
  v13 = *(_QWORD *)(a4 + 8);
  if ( !v13 )
  {
    v15 = *(_DWORD *)(a4 + 4);
    if ( v15 + 12 >= v15 )
    {
      *(_DWORD *)(a4 + 4) = v15 + 12;
LABEL_30:
      ++*(_DWORD *)a4;
      return v6;
    }
    *(_DWORD *)(a4 + 4) = -1;
    return (unsigned int)-1073741675;
  }
  v11 = *(_QWORD *)(a4 + 8);
  for ( i = 0; i < *(_DWORD *)a4; v11 += v12 )
  {
    v12 = *(_DWORD *)v11 + 4;
    if ( *(_DWORD *)v11 >= 0xFFFFFFFC || v11 + v12 < v11 )
      return (unsigned int)-1073741675;
    ++i;
  }
  if ( v11 + 4 >= v11 )
  {
    if ( v11 + 12 <= v13 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v11 = 8;
      *(_QWORD *)(v11 + 4) = v8;
      goto LABEL_30;
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)-1073741675;
}
