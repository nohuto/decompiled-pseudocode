/*
 * XREFs of MiViewMayContainPage @ 0x14027E474
 * Callers:
 *     MiTrimSection @ 0x14027E174 (MiTrimSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x14033DFC0 (MiEndingOffsetWithLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiViewMayContainPage(
        __int64 a1,
        _DWORD *a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v8; // r13
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbx
  int v12; // r8d
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rsi
  __int64 Pool; // rax
  void *v20; // rdi
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+68h] [rbp+20h]

  v8 = 0LL;
  v10 = -1;
  *a7 = 0LL;
  v11 = *(_QWORD *)(a4 + 16);
  if ( (v11 & 3) != 1 && a2 )
    return 0LL;
  if ( (v11 & 3) != 0 )
  {
    switch ( v11 & 3 )
    {
      case 1uLL:
        v8 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( a2 && *a2 != *(_DWORD *)(v8 + 1088) )
          return 0LL;
        v12 = a3 & 0x20;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          if ( v12 )
            return 0LL;
          v13 = *(_BYTE *)(a4 - 64);
          v14 = 0LL;
          LODWORD(v15) = *(_DWORD *)(a4 - 72);
          v16 = 0LL;
        }
        else
        {
          if ( v12 && (*(_DWORD *)(a4 - 48) & 0x280) != 0x200 )
            return 0LL;
          v14 = MiStartingOffset(*(_QWORD *)(a4 - 24), *(_QWORD *)(a4 - 16), 0xFFFFFFFFLL);
          v13 = *(_BYTE *)(a4 - 64);
          v15 = *(unsigned int *)(a4 - 72);
          v16 = v14
              + (((*(unsigned int *)(a4 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 63) << 32))
                - (v15 | ((unsigned __int64)v13 << 32))
                + 1) << 12);
        }
        v11 = ((unsigned int)v15 | ((unsigned __int64)v13 << 32)) << 12;
        break;
      case 2uLL:
        v11 &= ~2uLL;
        v14 = *(_QWORD *)(a4 - 48) << 12;
        v16 = v14 + *(_QWORD *)(a4 - 40);
        break;
      case 3uLL:
        v11 &= 0xFFFFFFFFFFFFFFFCuLL;
        v10 = *(_DWORD *)(a4 + 32);
        v16 = *(_QWORD *)(a4 + 24) - v11 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v25 = a1 + 128;
          if ( (unsigned int)MiGetSystemRegionType(v11) != 1 )
            v10 = -2;
          if ( !v25 )
            return 0LL;
          while ( 1 )
          {
            v26 = v10;
            if ( v10 == -2 )
              v26 = 0xFFFFFFFFLL;
            v29 = MiStartingOffset(v25, *(_QWORD *)(v25 + 8), v26);
            if ( a5 < MiEndingOffsetWithLock(v25) && a5 >= v29 )
              break;
            v25 = *(_QWORD *)(v25 + 16);
            if ( !v25 )
              return 0LL;
          }
          v27 = *(_QWORD *)(v25 + 8);
          v28 = v27 + 8 * ((a5 - v29) >> 12);
          if ( v28 >= v27 + 8 * (unsigned __int64)*(unsigned int *)(v25 + 44)
            || (*(_BYTE *)(v25 + 34) & 2) != 0 && (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
          {
            return 0LL;
          }
          v11 += (__int64)(v28 - *(_QWORD *)(a1 + 136)) >> 3 << 12;
        }
        v14 = 0LL;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    v23 = *(_QWORD *)(a4 + 32);
    v14 = 4 * (v23 & 0xFFFFFFFFFFFF0000uLL);
    if ( (v23 & 0x3F) != 0 )
      v24 = (*(_QWORD *)(a4 + 32) & 0x3FLL) << 12;
    else
      v24 = 0x40000LL;
    v16 = v14 + v24;
    if ( v23 >> 62 != 3 )
      return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v17 = 0LL;
    v18 = v11 + 4096;
    goto LABEL_11;
  }
  if ( a5 >= v16 || a6 <= v14 )
    return 0LL;
  v17 = v14;
  if ( a5 >= v14 )
  {
    v17 = a5;
    v11 += a5 - v14;
  }
  v22 = a6 - v17;
  if ( a6 > v16 )
    v22 = v16 - v17;
  v18 = v11 + v22;
LABEL_11:
  Pool = MiAllocatePool(64LL, 48LL, 1633053005LL);
  v20 = (void *)Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 16) = v11;
    *(_QWORD *)(Pool + 24) = v18;
    *(_QWORD *)(Pool + 8) = v8;
    *(_QWORD *)(Pool + 32) = v17;
    *(_DWORD *)(Pool + 40) = v10;
    *(_DWORD *)(Pool + 44) = *(_DWORD *)(a4 + 16) & 3;
    if ( v8 && !(unsigned __int8)ObReferenceObjectSafeWithTag(v8, 1953261124LL) )
      ExFreePoolWithTag(v20, 0);
    else
      *a7 = v20;
    return 0LL;
  }
  return 3221225626LL;
}
