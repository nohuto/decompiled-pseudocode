/*
 * XREFs of RtlpFindGuidInSection @ 0x180019E14
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x18001B3C0 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     bsearch @ 0x180091F30 (bsearch.c)
 *     RtlCompareMemory @ 0x1800A5A20 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlpFindGuidInSection(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  __int128 v8; // xmm0
  const void *v9; // rdx
  _DWORD *i; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned int *v17; // r15
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int128 Key; // [rsp+38h] [rbp-60h] BYREF

  if ( *(_DWORD *)a1 != 1682469703 )
    return (unsigned int)-1072365565;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  if ( !v6 )
    return (unsigned int)-1072365560;
  if ( ((unsigned __int8)-(*(_DWORD *)(a1 + 28) != 0) & (*(_DWORD *)(a1 + 8) == 1)) != 0 )
  {
    v13 = *(unsigned int *)(a1 + 28);
    v14 = 0;
    v15 = (unsigned int)(*a2 % *(_DWORD *)(v13 + a1));
    v16 = (unsigned int)(*a2 % *(_DWORD *)(v13 + a1));
    v18 = a1 + *(unsigned int *)(v13 + a1 + 4);
    v17 = (unsigned int *)(a1 + *(unsigned int *)(v18 + 8 * v15 + 4));
    if ( !*(_DWORD *)(v18 + 8LL * (unsigned int)v15) )
      return (unsigned int)-1072365560;
    while ( 1 )
    {
      i = (_DWORD *)(a1 + *v17++);
      if ( RtlCompareMemory(i, a2, 0x10uLL) == 16 )
        break;
      if ( (unsigned int)++v14 >= *(_DWORD *)(v18 + 8 * v16) )
        return (unsigned int)-1072365560;
    }
  }
  else if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v8 = *(_OWORD *)a2;
    v9 = (const void *)(a1 + *(unsigned int *)(a1 + 24));
    Key = v8;
    i = bsearch(
          &Key,
          v9,
          v6,
          0x1CuLL,
          (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareActivationContextGuidSectionEntryByGuid);
  }
  else
  {
    for ( i = (_DWORD *)(a1 + *(unsigned int *)(a1 + 24)); RtlCompareMemory(i, a2, 0x10uLL) != 16; i += 7 )
    {
      if ( !--v6 )
        return (unsigned int)-1072365560;
    }
  }
  if ( !i || !i[4] )
    return (unsigned int)-1072365560;
  if ( a3 )
  {
    v12 = *a3;
    a3[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a3 + 1) = a1 + (unsigned int)i[4];
    a3[4] = i[5];
    if ( a3 + 17 <= (unsigned int *)((char *)a3 + v12) )
      a3[16] = i[6];
  }
  return v7;
}
