/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x180054A50
 * Callers:
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 */

void RtlUnlockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  __int64 ProcessHeap; // r8
  __int64 v2; // rdx
  void *UniqueThread; // rcx

  v0 = NtCurrentPeb();
  ProcessHeap = (__int64)v0->ProcessHeap;
  if ( *(_DWORD *)(ProcessHeap + 16) == -571548178 )
  {
    RtlpHpHeapUnlock((__int64)v0->ProcessHeap, 1);
  }
  else if ( (*(_DWORD *)(ProcessHeap + 116) & 0x1000000) == 0 )
  {
    v2 = *(_QWORD *)(ProcessHeap + 352);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 16) = UniqueThread;
    *(_DWORD *)(v2 + 8) = -2;
    *(_DWORD *)(v2 + 12) = 1;
    RtlUnlockHeap(ProcessHeap);
  }
}
