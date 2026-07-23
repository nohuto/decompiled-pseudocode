/*
 * XREFs of LdrpAllocateTls @ 0x180042A74
 * Callers:
 *     LdrpInitializeThread @ 0x18003FC80 (LdrpInitializeThread.c)
 *     LdrpInitializeTls @ 0x18007A64C (LdrpInitializeTls.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpGetNewTlsVector @ 0x180030D50 (LdrpGetNewTlsVector.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // r15
  unsigned int SizeOfBitMap; // r14d
  _DWORD *p_ThreadLocalStoragePointer; // rbx
  _UNKNOWN **v3; // r13
  _UNKNOWN **v4; // rsi
  char v5; // al
  int v6; // r8d
  PVOID Heap; // rax
  _QWORD *v8; // rcx
  __int64 i; // rsi
  __int64 v11; // r8
  unsigned int v12; // [rsp+C0h] [rbp+8h]
  __int64 v13; // [rsp+D0h] [rbp+18h]
  size_t Size; // [rsp+D8h] [rbp+20h]

  v0 = NtCurrentTeb();
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_12:
    v0->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
  if ( p_ThreadLocalStoragePointer )
  {
    v3 = (_UNKNOWN **)LdrpTlsList;
    while ( v3 != &LdrpTlsList )
    {
      v4 = v3;
      v3 = (_UNKNOWN **)*v3;
      Size = v4[3] - v4[2];
      v5 = ((*((_DWORD *)v4 + 13) >> 20) & 0xF) - 1;
      if ( (*((_DWORD *)v4 + 13) & 0xF00000) == 0 )
        v5 = (*((_DWORD *)v4 + 13) >> 20) & 0xF;
      v6 = 1 << v5;
      if ( (unsigned int)(1 << v5) < 0x10 )
        v6 = 16;
      v12 = v6;
      v13 = (unsigned int)(v6 - 1);
      Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v13 + v4[3] - v4[2] + 1);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        for ( i = 0LL; (unsigned int)i < SizeOfBitMap; i = (unsigned int)(i + 1) )
        {
          v11 = *(_QWORD *)&p_ThreadLocalStoragePointer[2 * i];
          if ( v11 )
            RtlFreeHeap(LdrpTlsHeap, 0, *(PVOID *)(v11 - 8));
        }
        RtlFreeHeap(LdrpTlsHeap, 0, p_ThreadLocalStoragePointer - 4);
        return 3221225495LL;
      }
      v8 = (_QWORD *)(~v13 & ((unsigned __int64)Heap + v12));
      *(v8 - 1) = Heap;
      *(_QWORD *)&p_ThreadLocalStoragePointer[2 * *((unsigned int *)v4 + 16)] = v8;
      memmove(v8, v4[2], Size);
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrtls.c",
        935,
        (__int64)"LdrpAllocateTls",
        2u,
        "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
        p_ThreadLocalStoragePointer,
        *((_DWORD *)v4 + 16),
        *((_DWORD *)v4 + 6) - *((_DWORD *)v4 + 4),
        v4[2],
        *(const void **)&p_ThreadLocalStoragePointer[2 * *((unsigned int *)v4 + 16)]);
    }
    goto LABEL_12;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 3221225495LL;
}
