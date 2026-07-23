/*
 * XREFs of sub_140211804 @ 0x140211804
 * Callers:
 *     sub_1402117A0 @ 0x1402117A0 (sub_1402117A0.c)
 *     sub_140457E30 @ 0x140457E30 (sub_140457E30.c)
 *     sub_140515C50 @ 0x140515C50 (sub_140515C50.c)
 * Callees:
 *     sub_140211990 @ 0x140211990 (sub_140211990.c)
 *     sub_140211B00 @ 0x140211B00 (sub_140211B00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140211804(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int **a13)
{
  __int64 **v13; // rbx
  unsigned int **v15; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  unsigned int v19; // edi
  unsigned __int64 v20; // rdx
  unsigned int *Pool2; // r14
  unsigned int *v22; // rdi
  int v23; // ebx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v29; // [rsp+78h] [rbp+20h]

  a10 = 0;
  v13 = a4;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v15 = a13;
  if ( a13 )
    *a13 = 0LL;
  while ( 1 )
  {
    v17 = *((unsigned int *)v13 + 10);
    if ( a5 < v17 )
      break;
    v13 = (__int64 **)*v13;
    a5 -= v17;
    if ( !v13 )
      return (unsigned int)-1073741811;
  }
  sub_140211B00(v13, a5, a6, &a10);
  v19 = a10;
  v29 = 3LL * a10;
  v20 = 24LL * a10 + 120;
  if ( a11 )
  {
    if ( a12 < v20 )
      return (unsigned int)-1073741789;
    Pool2 = a11;
  }
  else
  {
    Pool2 = (unsigned int *)ExAllocatePool2(66LL, v20, 1147953480LL, v18);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  *Pool2 = v19;
  v22 = &Pool2[2 * v29 + 4];
  *((_BYTE *)v22 + 97) = a11 == 0LL;
  *((_QWORD *)v22 + 3) = a1;
  *((_QWORD *)v22 + 4) = a2;
  *((_QWORD *)v22 + 5) = *(_QWORD *)(a2 + 32);
  *((_QWORD *)v22 + 8) = a8;
  *((_QWORD *)v22 + 9) = a9;
  v22[15] = a5;
  v22[14] = a6;
  *((_QWORD *)v22 + 6) = v13;
  *((_QWORD *)v22 + 10) = Pool2;
  *((_BYTE *)v22 + 96) = a7 & 1;
  v22[4] = 2;
  *((_BYTE *)v22 + 98) = 0;
  *((_QWORD *)v22 + 11) = 0LL;
  if ( a3 )
  {
    *(_QWORD *)(a3 + 88) = v22;
    *((_QWORD *)v22 + 11) = a3 + 8;
    _m_prefetchw((const void *)(a3 + 8));
    v25 = *(_DWORD *)(a3 + 8);
    do
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 8), v25 | 4, v25);
    }
    while ( v26 != v25 );
    if ( (v25 & 2) != 0 )
    {
      v23 = -1073741536;
LABEL_22:
      if ( *((_BYTE *)v22 + 97) )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v23;
    }
  }
  v23 = sub_140211990(v22);
  if ( v23 < 0 )
    goto LABEL_22;
  if ( v15 )
    *v15 = Pool2;
  return (unsigned int)v23;
}
