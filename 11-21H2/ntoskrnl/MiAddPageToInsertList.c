/*
 * XREFs of MiAddPageToInsertList @ 0x140276C78
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x140276D2C (MiInsertProtectedStandbyPage.c)
 * Callees:
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiReleaseWriteInProgressCharges @ 0x14028C9B4 (MiReleaseWriteInProgressCharges.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiEnqueuePageList @ 0x1403365F0 (MiEnqueuePageList.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140591E04 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCanBatchHardFaultPages @ 0x140595E34 (MiCanBatchHardFaultPages.c)
 */

__int64 __fastcall MiAddPageToInsertList(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v3; // ebp
  __int64 v7; // rbx
  int v8; // ecx
  __int64 result; // rax
  __int64 i; // rax
  int CanBatchSystemCacheUnmapPages; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a1 + 24);
  v7 = 48 * a3 - 0x220000000000LL;
  if ( v3 == 3 )
    goto LABEL_2;
  for ( i = *a1; i; i = *a1 )
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      goto LABEL_7;
    MiInsertPagesInList(a1, 0LL);
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
LABEL_7:
  if ( !v3 )
  {
    CanBatchSystemCacheUnmapPages = MiCanBatchSystemCacheUnmapPages(a2, v7);
LABEL_26:
    v8 = CanBatchSystemCacheUnmapPages;
    if ( CanBatchSystemCacheUnmapPages )
      goto LABEL_3;
LABEL_27:
    if ( v3 == 1 )
      MiReleaseWriteInProgressCharges(
        *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)),
        1LL,
        1LL);
    goto LABEL_35;
  }
  if ( v3 == 2 )
  {
    CanBatchSystemCacheUnmapPages = MiCanBatchHardFaultPages(a2, v7);
    goto LABEL_26;
  }
  *(_BYTE *)(v7 + 34) &= ~8u;
  if ( (*(_BYTE *)a2 & 0x42) != 0 )
    *(_BYTE *)(v7 + 34) |= 0x10u;
  if ( (*(_WORD *)(v7 + 32))-- != 1 )
    goto LABEL_27;
  if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 || (*(_BYTE *)(v7 + 35) & 0x50) != 0 )
  {
    v8 = 2;
    goto LABEL_3;
  }
LABEL_2:
  v8 = 1;
LABEL_3:
  if ( !*a1 )
    *((_DWORD *)a1 + 2) = (*(_BYTE *)(v7 + 34) & 0x10 | 0x20u) >> 4;
  if ( v8 == 1 )
    return MiEnqueuePageList(a1, a3);
  MiInsertPagesInList(a1, 1LL);
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      MiHardFaultPageRelease(a2, v7);
    }
    else
    {
      MiReleaseWriteInProgressCharges(
        *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)),
        1LL,
        1LL);
      MiPfnReferenceCountIsZero(v7, a3);
    }
  }
  else
  {
    MiDecrementShareCount(v7, v13, v14, v15);
  }
LABEL_35:
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
