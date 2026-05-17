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

signed __int64 TpTrimPools()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r9
  _UNKNOWN **v3; // r14
  _UNKNOWN **v4; // rbx
  volatile signed __int64 *v5; // rbp
  volatile signed __int64 *v6; // rsi
  char v7; // r13
  int v8; // r9d
  unsigned int v9; // r8d
  int v10; // eax
  __int64 Heap; // r12
  __int64 v12; // r15
  __int64 v13; // rdi
  _QWORD **v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // r10d
  __int64 *v21; // rbx
  __int64 *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  int v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v33; // [rsp+80h] [rbp+18h]

  v32 = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v3 = (_UNKNOWN **)TppPoolpList;
  while ( v3 != &TppPoolpList )
  {
    v4 = v3;
    v3 = (_UNKNOWN **)*v3;
    v5 = (volatile signed __int64 *)(v4 - 2);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v4 - 2, v0, v1, v2);
    if ( *((_BYTE *)v4 - 7) )
      goto LABEL_30;
    v6 = (volatile signed __int64 *)(v4 - 39);
    v33 = (volatile signed __int64 *)(v4 - 39);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v4 - 39);
    v31 = 0;
    v7 = 1;
    if ( (int)NtSetInformationWorkerFactory(*(v4 - 41), 12LL, &v31) >= 0 && v31 )
    {
      v8 = 0;
      v9 = *((_DWORD *)v4 + 13) ^ (*((_DWORD *)v4 + 13) ^ (2 * v31)) & 0xFFE;
      for ( *((_DWORD *)v4 + 13) = v9; ((v9 >> 11) & 0xFFE) < (v9 & 0xFFE); v8 = v10 )
      {
        if ( v8 == 258 )
          break;
        v10 = RtlSleepConditionVariableSRW(v4 + 8, v4 - 39, &v32, 0LL);
        v9 = *((_DWORD *)v4 + 13);
      }
      if ( (v9 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v4 + 13) = v9 & 0xFFFFF001;
        goto LABEL_29;
      }
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (TppHeapTag + 786432) | 8u,
               8 * (((unsigned __int64)v9 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v23 = (__int64 *)(v4 + 9);
        while ( 1 )
        {
          v24 = *v23;
          if ( (__int64 *)*v23 == v23 )
            break;
          v25 = *(_QWORD *)v24;
          if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 || (v26 = *(_QWORD **)(v24 + 8), *v26 != v24) )
LABEL_46:
            __fastfail(3u);
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          NtClose(*(HANDLE *)(v24 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v24);
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
LABEL_28:
        v6 = v33;
        goto LABEL_29;
      }
      v12 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              8LL * ((*((_DWORD *)v4 + 13) >> 12) & 0x7FF));
      if ( v12 )
      {
        v13 = 0LL;
        v14 = (_QWORD **)(v4 + 9);
        while ( 1 )
        {
          v15 = *v14;
          if ( *v14 == v14 )
            break;
          *(_QWORD *)(Heap + 8 * v13) = v15[2];
          *(_QWORD *)(v12 + 8 * v13) = v15;
          v16 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 )
            goto LABEL_46;
          v17 = (_QWORD *)v15[1];
          if ( (_QWORD *)*v17 != v15 )
            goto LABEL_46;
          *v17 = v16;
          v13 = (unsigned int)(v13 + 1);
          *(_QWORD *)(v16 + 8) = v17;
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4 - 39);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v4 - 2);
        v7 = 0;
        v18 = 0;
        do
        {
          v19 = v18 << 6;
          if ( (unsigned int)v19 >= (unsigned int)v13 )
            break;
          v20 = (int)v19 + 64 <= (unsigned int)v13 ? 64 : v13 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v20, Heap + 8 * v19, 0LL, 0LL, &v32) == 258 )
            break;
          ++v18;
        }
        while ( v18 <= (unsigned int)v13 >> 6 );
        if ( (_DWORD)v13 )
        {
          v21 = (__int64 *)v12;
          do
          {
            NtClose(*(HANDLE *)((char *)v21 + Heap - v12));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v21++);
            --v13;
          }
          while ( v13 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v12);
      }
      else
      {
        v27 = (__int64 *)(v4 + 9);
        while ( 1 )
        {
          v28 = *v27;
          if ( (__int64 *)*v27 == v27 )
            break;
          v29 = *(_QWORD *)v28;
          if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 )
            goto LABEL_46;
          v30 = *(_QWORD **)(v28 + 8);
          if ( *v30 != v28 )
            goto LABEL_46;
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
          NtClose(*(HANDLE *)(v28 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v7 )
        goto LABEL_28;
    }
    else
    {
LABEL_29:
      RtlReleaseSRWLockExclusive(v6);
LABEL_30:
      RtlReleaseSRWLockShared(v5);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
