/*
 * XREFs of LdrpFreeTls @ 0x1800708CC
 * Callers:
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpFreeTls(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _TEB *v4; // rbx
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  void **v7; // rdi
  __int64 v8; // rsi

  v4 = NtCurrentTeb();
  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v4->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v7 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v8 = *(unsigned int *)v7;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap(LdrpTlsHeap, 0, *((_QWORD *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v8;
      }
      while ( v8 );
    }
    RtlFreeHeap(LdrpTlsHeap, 0, (__int64)v7);
  }
  return LdrpCleanupThreadTlsData();
}
