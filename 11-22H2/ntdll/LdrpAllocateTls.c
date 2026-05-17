/*
 * XREFs of LdrpAllocateTls @ 0x18002977C
 * Callers:
 *     LdrpInitializeTls @ 0x180004220 (LdrpInitializeTls.c)
 *     LdrpInitializeThread @ 0x180028A58 (LdrpInitializeThread.c)
 * Callees:
 *     LdrpGetNewTlsVector @ 0x1800050B4 (LdrpGetNewTlsVector.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTls(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _TEB *v4; // rsi
  unsigned int v5; // r14d
  _DWORD *NewTlsVector; // rbx
  _UNKNOWN **v7; // r13
  _UNKNOWN **v8; // r9
  char v9; // al
  int v10; // r8d
  __int64 v11; // r12
  __int64 Heap; // rax
  _QWORD *v13; // rcx
  void **p_ThreadLocalStoragePointer; // rsi
  __int64 i; // rsi
  __int64 v17; // r8
  size_t Size; // [rsp+50h] [rbp-78h]
  _DWORD *v19; // [rsp+78h] [rbp-50h]
  unsigned int v20; // [rsp+D0h] [rbp+8h]
  const void **v21; // [rsp+E0h] [rbp+18h]
  _UNKNOWN **v22; // [rsp+E8h] [rbp+20h]

  v4 = NtCurrentTeb();
  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  v5 = LdrpTlsBitmap;
  if ( LdrpTlsBitmap )
  {
    NewTlsVector = LdrpGetNewTlsVector(LdrpTlsBitmap);
    if ( NewTlsVector )
    {
      v7 = (_UNKNOWN **)LdrpTlsList;
      while ( 1 )
      {
        if ( v7 == &LdrpTlsList )
        {
          p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
          goto LABEL_12;
        }
        v8 = v7;
        v22 = v7;
        v7 = (_UNKNOWN **)*v7;
        v19 = v8 + 3;
        v21 = (const void **)(v8 + 2);
        Size = v8[3] - v8[2];
        v9 = ((*((_DWORD *)v8 + 13) >> 20) & 0xF) - 1;
        if ( (*((_DWORD *)v8 + 13) & 0xF00000) == 0 )
          v9 = (*((_DWORD *)v8 + 13) >> 20) & 0xF;
        v10 = 1 << v9;
        if ( (unsigned int)(1 << v9) < 0x10 )
          v10 = 16;
        v20 = v10;
        v11 = (unsigned int)(v10 - 1);
        Heap = RtlAllocateHeap(LdrpTlsHeap, (unsigned int)(NtdllBaseTag + 786432), v11 + v8[3] - v8[2] + 1);
        if ( !Heap )
          break;
        v13 = (_QWORD *)(~v11 & (Heap + v20));
        *(v13 - 1) = Heap;
        *(_QWORD *)&NewTlsVector[2 * *((unsigned int *)v22 + 16)] = v13;
        memmove(v13, *v21, Size);
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          956LL,
          (__int64)"LdrpAllocateTls",
          2LL,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          NewTlsVector,
          *((_DWORD *)v22 + 16),
          *v19 - *(_DWORD *)v21,
          *v21,
          *(const void **)&NewTlsVector[2 * *((unsigned int *)v22 + 16)]);
      }
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
      {
        v17 = *(_QWORD *)&NewTlsVector[2 * i];
        if ( v17 )
          RtlFreeHeap(LdrpTlsHeap, 0LL, *(_QWORD *)(v17 - 8));
      }
      RtlFreeHeap(LdrpTlsHeap, 0LL, NewTlsVector - 4);
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
    NewTlsVector = &v4->ThreadLocalStoragePointer;
    p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
LABEL_12:
    *p_ThreadLocalStoragePointer = NewTlsVector;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
}
