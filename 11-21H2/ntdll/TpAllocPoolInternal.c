/*
 * XREFs of TpAllocPoolInternal @ 0x180074674
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180074450 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x180074630 (TpAllocPool.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeader @ 0x18004F1A0 (RtlImageNtHeader.c)
 *     TppInitializeTimerQueue @ 0x180074B68 (TppInitializeTimerQueue.c)
 *     TppPoolUpdateNodeRelation @ 0x180074CE4 (TppPoolUpdateNodeRelation.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1800A5640 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800A5AA0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A75A0 (NtSetInformationWorkerFactory.c)
 *     TpSetPoolThreadCpuSets @ 0x180123DD0 (TpSetPoolThreadCpuSets.c)
 *     TppETWPoolCreate @ 0x1801247D4 (TppETWPoolCreate.c)
 */

__int64 __fastcall TpAllocPoolInternal(_QWORD *a1, char a2)
{
  _QWORD *v2; // rsi
  PIMAGE_NT_HEADERS v3; // rax
  SIZE_T StackReserve; // r13
  SIZE_T StackCommit; // r14
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  _DWORD *Heap; // rdi
  unsigned int v9; // r8d
  _QWORD *v10; // r10
  __int64 v11; // r9
  unsigned int i; // r8d
  char *v13; // rdx
  PVOID v14; // rax
  PVOID v15; // rax
  int *v16; // r15
  unsigned int v17; // esi
  NTSTATUS updated; // ebx
  ULONG v19; // r9d
  HANDLE *v20; // r12
  int v21; // eax
  ULONG MaxThreadCount; // eax
  HANDLE *v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  void *v28; // r8
  void *v29; // r8
  int v30; // [rsp+50h] [rbp-58h]
  char *BaseAddress; // [rsp+58h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+B8h] [rbp+10h] BYREF
  ULONG Flags; // [rsp+C0h] [rbp+18h] BYREF
  PVOID StartParameter; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  BaseAddress = 0LL;
  *a1 = 0LL;
  WorkerFactoryInformation = a2 & 1;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( v3->OptionalHeader.Magic == 523 )
  {
    StackReserve = v3->OptionalHeader.SizeOfStackReserve;
    StackCommit = v3->OptionalHeader.SizeOfStackCommit;
  }
  else
  {
    StackReserve = LODWORD(v3->OptionalHeader.SizeOfStackReserve);
    StackCommit = HIDWORD(v3->OptionalHeader.SizeOfStackReserve);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && StackCommit < MinimumStackCommit )
    StackCommit = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x1D8uLL);
  StartParameter = Heap;
  if ( !Heap )
    goto LABEL_37;
  Flags = TppHeapTag + 786432;
  BaseAddress = (char *)RtlAllocateHeap(
                          NtCurrentPeb()->ProcessHeap,
                          TppHeapTag + 786432,
                          72LL * (unsigned int)TppNumberNodes);
  if ( !BaseAddress )
  {
    updated = -1073741801;
    v30 = -1073741801;
    Heap = StartParameter;
    goto LABEL_42;
  }
  v9 = 0;
  v10 = StartParameter;
  v11 = (unsigned int)TppNumberNodes;
  while ( v9 < 3 )
  {
    v10[v9 + 2] = &BaseAddress[24 * v9 * (unsigned int)v11];
    ++v9;
  }
  for ( i = 0; i < 3 * (int)v11; ++i )
  {
    v13 = &BaseAddress[24 * i];
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 1) = v13;
    *(_QWORD *)v13 = v13;
  }
  v14 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v11);
  Heap = StartParameter;
  *((_QWORD *)StartParameter + 5) = v14;
  if ( !v14
    || (v15 = RtlAllocateHeap(
                NtCurrentPeb()->ProcessHeap,
                (TppHeapTag + 786432) | 8,
                16LL * (unsigned int)TppNumberNodes),
        Heap = StartParameter,
        (*((_QWORD *)StartParameter + 6) = v15) == 0LL) )
  {
LABEL_37:
    updated = -1073741801;
    v30 = -1073741801;
    goto LABEL_42;
  }
  v16 = Heap + 110;
  v17 = Heap[110];
  if ( !v17 )
    v17 = MEMORY[0x7FFE03C0];
  Heap = StartParameter;
  *((_DWORD *)StartParameter + 106) = v17;
  updated = TppPoolUpdateNodeRelation(Heap);
  v30 = updated;
  if ( updated >= 0 )
  {
    Heap[107] = -2;
    *((_QWORD *)Heap + 1) = (unsigned __int16)v17;
    *Heap = 1;
    v19 = v17 + 1;
    if ( v17 < 4 )
      v19 = 4;
    v20 = (HANDLE *)(Heap + 16);
    updated = NtCreateIoCompletion((PHANDLE)Heap + 8, 0x1F0003u, 0LL, v19);
    v30 = updated;
    if ( updated >= 0 )
    {
      v21 = *v16;
      if ( !*v16 )
        v21 = MEMORY[0x7FFE03C0];
      MaxThreadCount = 4 * v21;
      if ( MaxThreadCount < 0x200 )
        MaxThreadCount = 512;
      Heap = StartParameter;
      v23 = (HANDLE *)((char *)StartParameter + 56);
      updated = NtCreateWorkerFactory(
                  (PHANDLE)StartParameter + 7,
                  0xF00FFu,
                  0LL,
                  *v20,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  TppWorkerThread,
                  StartParameter,
                  MaxThreadCount,
                  StackReserve,
                  StackCommit);
      v30 = updated;
      if ( updated < 0 )
        goto LABEL_35;
      if ( WorkerFactoryInformation )
      {
        updated = NtSetInformationWorkerFactory(*v23, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
        v30 = updated;
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
        *((_WORD *)Heap + 189) = WorkerFactoryInformation;
      }
      *((_QWORD *)Heap + 9) = 0LL;
      *((_QWORD *)Heap + 46) = 0LL;
      *((_QWORD *)Heap + 56) = 0LL;
      *((_WORD *)Heap + 188) = 0;
      *((_QWORD *)Heap + 11) = Heap + 20;
      *((_QWORD *)Heap + 10) = Heap + 20;
      *((_QWORD *)Heap + 13) = Heap + 24;
      *((_QWORD *)Heap + 12) = Heap + 24;
      *((_QWORD *)Heap + 58) = Heap + 114;
      *((_QWORD *)Heap + 57) = Heap + 114;
      TppGetCurrentThreadNumaNode((__int64)Heap, &Flags, 0LL);
      *((_QWORD *)Heap + 50) = retaddr;
      updated = TppInitializeTimerQueue(Heap + 28, Heap);
      v30 = updated;
      if ( updated >= 0 )
      {
        updated = 0;
        v30 = 0;
        RtlAcquireSRWLockExclusive(&TppPoolpListLock);
        v24 = Heap + 96;
        v25 = off_1801744A8;
        if ( *off_1801744A8 != (_UNKNOWN *)&TppPoolpList )
          __fastfail(3u);
        *v24 = &TppPoolpList;
        *((_QWORD *)Heap + 49) = v25;
        *v25 = v24;
        off_1801744A8 = (_UNKNOWN **)(Heap + 96);
        RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
        if ( TppPoolpDefaultPoolCpuSetCount )
        {
          updated = TpSetPoolThreadCpuSets(Heap, &TppPoolpDefaultPoolCpuSets);
          v30 = updated;
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
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
      Heap = StartParameter;
    }
    v28 = (void *)*((_QWORD *)Heap + 5);
    if ( v28 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
      Heap = StartParameter;
    }
    v29 = (void *)*((_QWORD *)Heap + 6);
    if ( v29 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v29);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, StartParameter);
    Heap = 0LL;
    StartParameter = 0LL;
    updated = v30;
  }
  if ( updated >= 0 )
  {
LABEL_43:
    *v2 = Heap;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v26 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v30;
      Heap = StartParameter;
    }
    else
    {
      v26 = 2147353478LL;
    }
    if ( *(_BYTE *)v26 )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
