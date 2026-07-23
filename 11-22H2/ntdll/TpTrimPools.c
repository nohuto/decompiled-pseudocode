/*
 * XREFs of TpTrimPools @ 0x180069420
 * Callers:
 *     LdrShutdownThread @ 0x1800294B0 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180069740 (RtlSleepConditionVariableSRW.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x18009F940 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A23A0 (NtSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r14
  _UNKNOWN **v1; // rbx
  _RTL_SRWLOCK *v2; // rbp
  _RTL_SRWLOCK *v3; // rsi
  char v4; // r13
  NTSTATUS v5; // r9d
  unsigned int v6; // r8d
  NTSTATUS v7; // eax
  char *Heap; // r12
  PVOID *v9; // r15
  __int64 v10; // rdi
  _QWORD **v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  ULONG v17; // r10d
  PVOID *v18; // rbx
  void **v19; // rsi
  void ***v20; // rdi
  void **v21; // rcx
  void **v22; // rax
  void **v23; // rsi
  void ***v24; // rdi
  void **v25; // rcx
  void **v26; // rax
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp+10h] BYREF
  _RTL_SRWLOCK *v29; // [rsp+80h] [rbp+18h]

  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v0 = (_UNKNOWN **)TppPoolpList;
  while ( v0 != &TppPoolpList )
  {
    v1 = v0;
    v0 = (_UNKNOWN **)*v0;
    v2 = (_RTL_SRWLOCK *)(v1 - 2);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v1 - 2);
    if ( *((_BYTE *)v1 - 7) )
      goto LABEL_30;
    v3 = (_RTL_SRWLOCK *)(v1 - 39);
    v29 = (_RTL_SRWLOCK *)(v1 - 39);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
    WorkerFactoryInformation = 0;
    v4 = 1;
    if ( NtSetInformationWorkerFactory(*(v1 - 41), WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v5 = 0;
      v6 = *((_DWORD *)v1 + 13) ^ (*((_DWORD *)v1 + 13) ^ (2 * WorkerFactoryInformation)) & 0xFFE;
      for ( *((_DWORD *)v1 + 13) = v6; ((v6 >> 11) & 0xFFE) < (v6 & 0xFFE); v5 = v7 )
      {
        if ( v5 == 258 )
          break;
        v7 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v1 + 8, (PRTL_SRWLOCK)v1 - 39, &Timeout, 0);
        v6 = *((_DWORD *)v1 + 13);
      }
      if ( (v6 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 13) = v6 & 0xFFFFF001;
        goto LABEL_29;
      }
      Heap = (char *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (TppHeapTag + 786432) | 8,
                       8 * (((unsigned __int64)v6 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v19 = (void **)(v1 + 9);
        while ( 1 )
        {
          v20 = (void ***)*v19;
          if ( *v19 == v19 )
            break;
          v21 = *v20;
          if ( (*v20)[1] != v20 || (v22 = v20[1], *v22 != v20) )
LABEL_46:
            __fastfail(3u);
          *v22 = v21;
          v21[1] = v22;
          NtClose(v20[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v20);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
LABEL_28:
        v3 = v29;
        goto LABEL_29;
      }
      v9 = (PVOID *)RtlAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      (TppHeapTag + 786432) | 8,
                      8LL * ((*((_DWORD *)v1 + 13) >> 12) & 0x7FF));
      if ( v9 )
      {
        v10 = 0LL;
        v11 = (_QWORD **)(v1 + 9);
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 == v11 )
            break;
          *(_QWORD *)&Heap[8 * v10] = v12[2];
          v9[v10] = v12;
          v13 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 )
            goto LABEL_46;
          v14 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v14 != v12 )
            goto LABEL_46;
          *v14 = v13;
          v10 = (unsigned int)(v10 + 1);
          *(_QWORD *)(v13 + 8) = v14;
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v1 - 2);
        v4 = 0;
        v15 = 0;
        do
        {
          v16 = v15 << 6;
          if ( (unsigned int)v16 >= (unsigned int)v10 )
            break;
          v17 = (int)v16 + 64 <= (unsigned int)v10 ? 64 : v10 & 0x3F;
          if ( NtWaitForMultipleObjects(v17, (HANDLE *)&Heap[8 * v16], WaitAll, 0, &Timeout) == 258 )
            break;
          ++v15;
        }
        while ( v15 <= (unsigned int)v10 >> 6 );
        if ( (_DWORD)v10 )
        {
          v18 = v9;
          do
          {
            NtClose(*(PVOID *)((char *)v18 + Heap - (char *)v9));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v18++);
            --v10;
          }
          while ( v10 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v9);
      }
      else
      {
        v23 = (void **)(v1 + 9);
        while ( 1 )
        {
          v24 = (void ***)*v23;
          if ( *v23 == v23 )
            break;
          v25 = *v24;
          if ( (*v24)[1] != v24 )
            goto LABEL_46;
          v26 = v24[1];
          if ( *v26 != v24 )
            goto LABEL_46;
          *v26 = v25;
          v25[1] = v26;
          NtClose(v24[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v24);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v4 )
        goto LABEL_28;
    }
    else
    {
LABEL_29:
      RtlReleaseSRWLockExclusive(v3);
LABEL_30:
      RtlReleaseSRWLockShared(v2);
    }
  }
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
