/*
 * XREFs of LdrpAllocateTls @ 0x1800295AC
 * Callers:
 *     LdrpInitializeTls @ 0x1800042A0 (LdrpInitializeTls.c)
 *     LdrpInitializeThread @ 0x180028888 (LdrpInitializeThread.c)
 * Callees:
 *     LdrpGetNewTlsVector @ 0x1800050B4 (LdrpGetNewTlsVector.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // rsi
  unsigned int SizeOfBitMap; // r14d
  _DWORD *NewTlsVector; // rbx
  _UNKNOWN **v3; // r13
  _UNKNOWN **v4; // r9
  char v5; // al
  int v6; // r8d
  __int64 v7; // r12
  PVOID Heap; // rax
  _QWORD *v9; // rcx
  void **p_ThreadLocalStoragePointer; // rsi
  __int64 i; // rsi
  __int64 v13; // r8
  size_t Size; // [rsp+50h] [rbp-78h]
  _DWORD *v15; // [rsp+78h] [rbp-50h]
  unsigned int v16; // [rsp+D0h] [rbp+8h]
  const void **v17; // [rsp+E0h] [rbp+18h]
  _UNKNOWN **v18; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( LdrpTlsBitmap.SizeOfBitMap )
  {
    NewTlsVector = LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
    if ( NewTlsVector )
    {
      v3 = (_UNKNOWN **)LdrpTlsList;
      while ( 1 )
      {
        if ( v3 == &LdrpTlsList )
        {
          p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
          goto LABEL_12;
        }
        v4 = v3;
        v18 = v3;
        v3 = (_UNKNOWN **)*v3;
        v15 = v4 + 3;
        v17 = (const void **)(v4 + 2);
        Size = v4[3] - v4[2];
        v5 = ((*((_DWORD *)v4 + 13) >> 20) & 0xF) - 1;
        if ( (*((_DWORD *)v4 + 13) & 0xF00000) == 0 )
          v5 = (*((_DWORD *)v4 + 13) >> 20) & 0xF;
        v6 = 1 << v5;
        if ( (unsigned int)(1 << v5) < 0x10 )
          v6 = 16;
        v16 = v6;
        v7 = (unsigned int)(v6 - 1);
        Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v7 + v4[3] - v4[2] + 1);
        if ( !Heap )
          break;
        v9 = (_QWORD *)(~v7 & ((unsigned __int64)Heap + v16));
        *(v9 - 1) = Heap;
        *(_QWORD *)&NewTlsVector[2 * *((unsigned int *)v18 + 16)] = v9;
        memmove(v9, *v17, Size);
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          956,
          (__int64)"LdrpAllocateTls",
          2u,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          NewTlsVector,
          *((_DWORD *)v18 + 16),
          *v15 - *(_DWORD *)v17,
          *v17,
          *(const void **)&NewTlsVector[2 * *((unsigned int *)v18 + 16)]);
      }
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      for ( i = 0LL; (unsigned int)i < SizeOfBitMap; i = (unsigned int)(i + 1) )
      {
        v13 = *(_QWORD *)&NewTlsVector[2 * i];
        if ( v13 )
          RtlFreeHeap(LdrpTlsHeap, 0, *(PVOID *)(v13 - 8));
      }
      RtlFreeHeap(LdrpTlsHeap, 0, NewTlsVector - 4);
      return 3221225495LL;
    }
    else
    {
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      return 3221225495LL;
    }
  }
  else
  {
    NewTlsVector = &v0->ThreadLocalStoragePointer;
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_12:
    *p_ThreadLocalStoragePointer = NewTlsVector;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
}
