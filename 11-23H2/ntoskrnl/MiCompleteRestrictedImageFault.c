/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x1402E30E0
 * Callers:
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MiGetSessionIdForVa @ 0x1402A1960 (MiGetSessionIdForVa.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiStartingOffset @ 0x1402E25A0 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x1402E27A0 (PfSnLogPageFault.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402E3420 (MiQueueCoreWorkingSetEntries.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339F60 (MiEmptyDeferredWorkingSetEntries.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 a1, unsigned __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 *v4; // r15
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r12
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  int Wsle; // eax
  unsigned __int64 v23; // rdi
  __int64 UsedPtesHandle; // rax
  unsigned int SessionIdForVa; // eax
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // [rsp+40h] [rbp-68h]
  unsigned __int64 v30; // [rsp+48h] [rbp-60h]
  __int64 v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  unsigned int v36; // [rsp+C8h] [rbp+20h] BYREF

  v36 = a4;
  v4 = a3;
  v32 = *(_QWORD *)a1;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = 1;
  v9 = *(_QWORD *)(48 * *a3 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  v10 = *(_QWORD *)(48 * *a3 - 0x220000000000LL + 16);
  v30 = v9;
  if ( qword_140C65B40 && (v10 & 0x10) == 0 )
    v10 &= ~qword_140C65B40;
  v11 = 0;
  v12 = *(_QWORD *)(v10 >> 16);
  v31 = v12;
  if ( PfSnNumActiveTraces )
  {
    v28 = MiReferenceControlAreaFileWithTag(v12, 0x63536D4Du);
    v9 = v30;
    v13 = v28;
  }
  else
  {
    v13 = 0LL;
  }
  v29 = v13;
  if ( v5 )
  {
    while ( 1 )
    {
      v14 = *v4;
      v15 = (_QWORD *)(48 * *v4 - 0x220000000000LL);
      v16 = v15[2];
      v17 = v16;
      if ( qword_140C65B40 && (v16 & 0x10) == 0 )
        v17 = v16 & ~qword_140C65B40;
      v18 = v15[1] | 0x8000000000000000uLL;
      v19 = v6 + 8 * ((__int64)(v18 - v9) >> 3);
      if ( v13 )
      {
        SessionIdForVa = MiGetSessionIdForVa(v13, (__int64)(v19 << 25) >> 16);
        v27 = MiStartingOffset((__int64 *)(v17 >> 16), v18, SessionIdForVa);
        v20 = v29;
        PfSnLogPageFault(v29, v27, 1u);
      }
      else
      {
        v20 = v29;
      }
      v7 = a1;
      v21 = MiMakeValidPte(v19, v14, (v16 >> 5) & 0x1F) & 0xFFFFFFFFFFFFFFDFuLL;
      MiQueueCoreWorkingSetEntries(a1, v19, v15);
      Wsle = MiAllocateWsle(v32, (unsigned __int64 *)v19, v15, 0, v21, 12, 0LL);
      v5 = v36;
      v6 = a2;
      if ( !Wsle )
        break;
      v9 = v30;
      ++v11;
      ++v4;
      if ( v11 >= v36 )
      {
        v4 = a3;
        v8 = 1;
        v12 = v31;
        goto LABEL_17;
      }
      v13 = v29;
    }
    v4 = a3;
    --*(_WORD *)(a1 + 10);
    v12 = v31;
    v8 = 0;
  }
  else
  {
    v20 = v13;
  }
LABEL_17:
  if ( v11 )
  {
    if ( *(_WORD *)(v7 + 10) )
      MiEmptyDeferredWorkingSetEntries(v7);
    v23 = 48 * MiGetContainingPageTable(v6) - 0x220000000000LL;
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v36);
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
    *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + v11)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v6 << 25) >> 16);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v11);
  }
  else
  {
    *(_WORD *)(v7 + 10) = 0;
  }
  if ( v11 != v5 )
  {
    do
      MiLockAndDecrementShareCount(48 * v4[v11++] - 0x220000000000LL, 0);
    while ( v11 != v5 );
    v20 = v29;
  }
  if ( v20 )
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v12 + 64), v20, 0x63536D4Du);
  return v8;
}
