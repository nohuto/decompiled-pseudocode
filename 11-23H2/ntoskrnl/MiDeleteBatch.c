/*
 * XREFs of MiDeleteBatch @ 0x1402D6200
 * Callers:
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x1402D64B0 (MiDeleteClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiDetermineModifiedPageListHead @ 0x1402D9480 (MiDetermineModifiedPageListHead.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiBadShareCount @ 0x14064DBDC (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  unsigned __int8 v5; // bp
  __int64 v6; // r12
  char v7; // di
  unsigned __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int8 i; // di
  unsigned __int64 v18; // rdx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  if ( !*a1 )
    return 0LL;
  v3 = 0LL;
  v20 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(qword_140C673C8
                 + 8
                 * ((*(_QWORD *)(48
                               * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFFLL)
                               - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  do
  {
    v20 = *(_QWORD *)&a1[8 * v5 + 16];
    v7 = v20;
    v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    if ( (v7 & 0x42) != 0 )
      v10 = MiCaptureDirtyBitToPfn(v8);
    else
      v10 = 0LL;
    *(_QWORD *)&a1[8 * v5 + 16] = v10;
    v12 = MiDetermineModifiedPageListHead(v8, v6, 1LL, v9);
    if ( v12 != v4 )
    {
      if ( v4 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
      v4 = v12;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 32));
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(v8);
    v14 = *(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v8 + 24) = v14;
    if ( (v14 & 0x3FFFFFFFFFFFFFFFLL) == 0
      && (unsigned int)MiPfnShareCountIsZero(v8, 1LL, (_QWORD *)0x3FFFFFFFFFFFFFFFLL, v13) == 3
      && *(__int64 *)(v8 + 40) >= 0 )
    {
      ++v3;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v5;
  }
  while ( v5 < *a1 );
  if ( v4 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
  v15 = *((_QWORD *)a1 + 1);
  if ( a1[1] )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1), v11, 0x3FFFFFFFFFFFFFFFLL, 0x7FFFFFFFFFFFFFFFLL);
  }
  else
  {
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
  }
  if ( (*(_BYTE *)(v15 + 34) & 7) != 6 || (v16 = *a1, (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v16) )
    MiBadShareCount(v15);
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - v16)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( i = 0; i < *a1; ++i )
  {
    v18 = *(_QWORD *)&a1[8 * i + 16];
    if ( v18 )
      MiReleasePageFileInfo(v6, v18, 1);
  }
  result = v3;
  *a1 = 0;
  return result;
}
