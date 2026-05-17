/*
 * XREFs of TpAllocPoolInternal @ 0x18004C170
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18004B7A4 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x18004BD90 (TpAllocPool.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033DE4 (TppGetCurrentThreadNumaNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     TppInitializeTimerQueue @ 0x18004D1E4 (TppInitializeTimerQueue.c)
 *     TppPoolUpdateNodeRelation @ 0x18004FE24 (TppPoolUpdateNodeRelation.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1800A03E0 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800A0840 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A23A0 (NtSetInformationWorkerFactory.c)
 *     TpSetPoolThreadCpuSets @ 0x180125810 (TpSetPoolThreadCpuSets.c)
 *     TppETWPoolCreate @ 0x180126214 (TppETWPoolCreate.c)
 */

__int64 __fastcall TpAllocPoolInternal(__int64 *a1, char a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  struct _PEB *v6; // rax
  unsigned __int64 MinimumStackCommit; // rcx
  __int64 Heap; // rdi
  unsigned int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned int i; // r8d
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  int *v16; // r15
  unsigned int v17; // esi
  int updated; // ebx
  __int64 v19; // r9
  HANDLE *v20; // r12
  int v21; // eax
  unsigned int v22; // eax
  HANDLE *v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+58h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]
  int v37; // [rsp+B8h] [rbp+10h] BYREF
  int v38; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  v34 = 0LL;
  *a1 = 0LL;
  v37 = a2 & 1;
  v3 = RtlImageNtHeader((unsigned __int64)NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v3 + 24) == 523 )
  {
    v4 = *(_QWORD *)(v3 + 96);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 96);
    v5 = *(unsigned int *)(v3 + 100);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 472LL);
  v39 = Heap;
  if ( !Heap )
    goto LABEL_37;
  v38 = TppHeapTag + 786432;
  v34 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, 72LL * (unsigned int)TppNumberNodes);
  if ( !v34 )
  {
    updated = -1073741801;
    v33 = -1073741801;
    Heap = v39;
    goto LABEL_42;
  }
  v9 = 0;
  v10 = v39;
  v11 = (unsigned int)TppNumberNodes;
  while ( v9 < 3 )
  {
    *(_QWORD *)(v10 + 8LL * v9 + 16) = v34 + 24LL * (unsigned int)v11 * v9;
    ++v9;
  }
  for ( i = 0; i < 3 * (int)v11; ++i )
  {
    v13 = (_QWORD *)(v34 + 24LL * i);
    v13[2] = 0LL;
    v13[1] = v13;
    *v13 = v13;
  }
  v14 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v11);
  Heap = v39;
  *(_QWORD *)(v39 + 40) = v14;
  if ( !v14
    || (v15 = RtlAllocateHeap(
                (__int64)NtCurrentPeb()->ProcessHeap,
                (TppHeapTag + 786432) | 8u,
                16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups),
        Heap = v39,
        (*(_QWORD *)(v39 + 48) = v15) == 0LL) )
  {
LABEL_37:
    updated = -1073741801;
    v33 = -1073741801;
    goto LABEL_42;
  }
  v16 = (int *)(Heap + 440);
  v17 = *(_DWORD *)(Heap + 440);
  if ( !v17 )
    v17 = MEMORY[0x7FFE03C0];
  Heap = v39;
  *(_DWORD *)(v39 + 424) = v17;
  updated = TppPoolUpdateNodeRelation(Heap);
  v33 = updated;
  if ( updated >= 0 )
  {
    *(_DWORD *)(Heap + 428) = -2;
    *(_QWORD *)(Heap + 8) = (unsigned __int16)v17;
    *(_DWORD *)Heap = 1;
    v19 = v17 + 1;
    if ( v17 < 4 )
      v19 = 4LL;
    v20 = (HANDLE *)(Heap + 64);
    updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v19);
    v33 = updated;
    if ( updated >= 0 )
    {
      v21 = *v16;
      if ( !*v16 )
        v21 = MEMORY[0x7FFE03C0];
      v22 = 4 * v21;
      if ( v22 < 0x200 )
        v22 = 512;
      Heap = v39;
      v23 = (HANDLE *)(v39 + 56);
      updated = NtCreateWorkerFactory(v39 + 56, 983295LL, 0LL, *v20, -1LL, TppWorkerThread, v39, v22, v4, v5);
      v33 = updated;
      if ( updated < 0 )
        goto LABEL_35;
      if ( v37 )
      {
        updated = NtSetInformationWorkerFactory(*v23, 13LL, &v37);
        v33 = updated;
        if ( updated < 0 )
        {
LABEL_35:
          if ( updated < 0 )
          {
            NtClose(*v20);
            if ( *v23 )
            {
              NtClose(*v23);
              *v23 = 0LL;
            }
          }
          goto LABEL_36;
        }
        *(_WORD *)(Heap + 378) = v37;
      }
      *(_QWORD *)(Heap + 72) = 0LL;
      *(_QWORD *)(Heap + 368) = 0LL;
      *(_QWORD *)(Heap + 448) = 0LL;
      *(_WORD *)(Heap + 376) = 0;
      *(_QWORD *)(Heap + 88) = Heap + 80;
      *(_QWORD *)(Heap + 80) = Heap + 80;
      *(_QWORD *)(Heap + 104) = Heap + 96;
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 464) = Heap + 456;
      *(_QWORD *)(Heap + 456) = Heap + 456;
      TppGetCurrentThreadNumaNode(Heap, &v38, 0LL, 0LL);
      *(_QWORD *)(Heap + 400) = retaddr;
      updated = TppInitializeTimerQueue(Heap + 112, Heap);
      v33 = updated;
      if ( updated >= 0 )
      {
        updated = 0;
        v33 = 0;
        RtlAcquireSRWLockExclusive(&TppPoolpListLock);
        v24 = (_QWORD *)(Heap + 384);
        v25 = off_18017E408;
        if ( *off_18017E408 != (_UNKNOWN *)&TppPoolpList )
          __fastfail(3u);
        *v24 = &TppPoolpList;
        *(_QWORD *)(Heap + 392) = v25;
        *v25 = v24;
        off_18017E408 = (_UNKNOWN **)(Heap + 384);
        RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock, v26, v27, v28);
        if ( TppPoolpDefaultPoolCpuSetCount )
        {
          updated = TpSetPoolThreadCpuSets(Heap, &TppPoolpDefaultPoolCpuSets);
          v33 = updated;
        }
        RtlReleaseSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
      }
      goto LABEL_35;
    }
  }
LABEL_36:
  v2 = a1;
LABEL_42:
  if ( updated >= 0 )
    goto LABEL_43;
  if ( Heap )
  {
    if ( v34 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v34);
      Heap = v39;
    }
    v31 = *(_QWORD *)(Heap + 40);
    if ( v31 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v31);
      Heap = v39;
    }
    v32 = *(_QWORD *)(Heap + 48);
    if ( v32 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v32);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v39);
    Heap = 0LL;
    v39 = 0LL;
    updated = v33;
  }
  if ( updated >= 0 )
  {
LABEL_43:
    *v2 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v29 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v33;
      Heap = v39;
    }
    else
    {
      v29 = 2147353478LL;
    }
    if ( *(_BYTE *)v29 )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
