/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180043ED0
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlTryAcquirePebLock @ 0x180047860 (RtlTryAcquirePebLock.c)
 *     RtlpFlushHeap @ 0x1800600BC (RtlpFlushHeap.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800D91DC (LdrpTryAcquireLoaderLock.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FEBF0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTryEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  __int64 result; // rax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 1LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(void **)(a1 + 16) == UniqueThread )
  {
    ++*(_DWORD *)(a1 + 12);
    return 1LL;
  }
  else
  {
    return 0LL;
  }
  return result;
}
