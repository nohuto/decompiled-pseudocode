/*
 * XREFs of TpTrimPools @ 0x18006AC30
 * Callers:
 *     LdrShutdownThread @ 0x180041790 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlSleepConditionVariableSRW @ 0x18006AF50 (RtlSleepConditionVariableSRW.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1800A4BC0 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A75A0 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TpTrimPools(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _UNKNOWN **v4; // r14
  _UNKNOWN **v5; // rbx
  volatile signed __int64 *v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  volatile signed __int64 *v10; // r15
  char v11; // r13
  int v12; // r9d
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 *v15; // rsi
  __int64 Heap; // r12
  __int64 v17; // r15
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  unsigned int v24; // r10d
  __int64 *v25; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  _QWORD *v32; // rax
  int v33; // [rsp+70h] [rbp+8h] BYREF
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v35; // [rsp+80h] [rbp+18h]

  v34 = -1000000LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, a2, a3, a4);
  v4 = (_UNKNOWN **)TppPoolpList;
  while ( v4 != &TppPoolpList )
  {
    v5 = v4;
    v4 = (_UNKNOWN **)*v4;
    v6 = (volatile signed __int64 *)(v5 - 2);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v5 - 2);
    if ( *((_BYTE *)v5 - 7) )
      goto LABEL_7;
    v10 = (volatile signed __int64 *)(v5 - 39);
    v35 = (volatile signed __int64 *)(v5 - 39);
    RtlAcquireSRWLockExclusive((unsigned __int64)(v5 - 39), v7, v8, v9);
    v33 = 0;
    v11 = 1;
    if ( (int)NtSetInformationWorkerFactory(*(v5 - 41), 12LL, &v33) >= 0 && v33 )
    {
      v12 = 0;
      v13 = *((_DWORD *)v5 + 13) ^ (*((_DWORD *)v5 + 13) ^ (2 * v33)) & 0xFFEu;
      *((_DWORD *)v5 + 13) = v13;
      if ( (((unsigned int)v13 >> 11) & 0xFFE) < (v13 & 0xFFE) )
      {
        do
        {
          if ( v12 == 258 )
            break;
          v14 = RtlSleepConditionVariableSRW(v5 + 8, v5 - 39, &v34, 0LL);
          v13 = *((unsigned int *)v5 + 13);
          v12 = v14;
        }
        while ( (((unsigned int)v13 >> 11) & 0xFFE) < (*((_DWORD *)v5 + 13) & 0xFFEu) );
      }
      if ( (v13 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v5 + 13) = v13 & 0xFFFFF001;
        goto LABEL_6;
      }
      v15 = (__int64 *)(v5 + 9);
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (TppHeapTag + 786432) | 8u,
               8 * ((v13 >> 12) & 0x7FF));
      if ( !Heap )
      {
        while ( 1 )
        {
          v27 = *v15;
          if ( (__int64 *)*v15 == v15 )
            break;
          v28 = *(_QWORD *)v27;
          if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || (v29 = *(_QWORD **)(v27 + 8), *v29 != v27) )
LABEL_44:
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          NtClose(*(HANDLE *)(v27 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v27);
        }
        *((_DWORD *)v5 + 13) &= 0xFF800001;
        goto LABEL_6;
      }
      v17 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              8LL * ((*((_DWORD *)v5 + 13) >> 12) & 0x7FF));
      if ( v17 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v19 = (_QWORD *)*v15;
          if ( (__int64 *)*v15 == v15 )
            break;
          *(_QWORD *)(Heap + 8 * v18) = v19[2];
          *(_QWORD *)(v17 + 8 * v18) = v19;
          v20 = *v19;
          if ( *(_QWORD **)(*v19 + 8LL) != v19 )
            goto LABEL_44;
          v21 = (_QWORD *)v19[1];
          if ( (_QWORD *)*v21 != v19 )
            goto LABEL_44;
          *v21 = v20;
          v18 = (unsigned int)(v18 + 1);
          *(_QWORD *)(v20 + 8) = v21;
        }
        *((_DWORD *)v5 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v5 - 39);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v5 - 2);
        v11 = 0;
        v22 = 0;
        do
        {
          v23 = v22 << 6;
          if ( (unsigned int)v23 >= (unsigned int)v18 )
            break;
          v24 = (int)v23 + 64 <= (unsigned int)v18 ? 64 : v18 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v24, Heap + 8 * v23, 0LL, 0LL, &v34) == 258 )
            break;
          ++v22;
        }
        while ( v22 <= (unsigned int)v18 >> 6 );
        if ( (_DWORD)v18 )
        {
          v25 = (__int64 *)v17;
          do
          {
            NtClose(*(HANDLE *)((char *)v25 + Heap - v17));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v25++);
            --v18;
          }
          while ( v18 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v17);
      }
      else
      {
        while ( 1 )
        {
          v30 = *v15;
          if ( (__int64 *)*v15 == v15 )
            break;
          v31 = *(_QWORD *)v30;
          if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
            goto LABEL_44;
          v32 = *(_QWORD **)(v30 + 8);
          if ( *v32 != v30 )
            goto LABEL_44;
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          NtClose(*(HANDLE *)(v30 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v30);
        }
        *((_DWORD *)v5 + 13) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v11 )
      {
        v10 = v35;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      RtlReleaseSRWLockExclusive(v10);
LABEL_7:
      RtlReleaseSRWLockShared(v6);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
