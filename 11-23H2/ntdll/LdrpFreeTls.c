/*
 * XREFs of LdrpFreeTls @ 0x1800708CC
 * Callers:
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 LdrpFreeTls()
{
  struct _TEB *v0; // rbx
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  void **v3; // rdi
  __int64 v4; // rsi

  v0 = NtCurrentTeb();
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v3 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v4 = *(unsigned int *)v3;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap(LdrpTlsHeap, 0, *((PVOID *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v4;
      }
      while ( v4 );
    }
    RtlFreeHeap(LdrpTlsHeap, 0, v3);
  }
  return LdrpCleanupThreadTlsData();
}
