/*
 * XREFs of PspTerminateThreadByPointer @ 0x14076DB70
 * Callers:
 *     PspSystemThreadStartup @ 0x14030BF60 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     NtTerminateProcess @ 0x1406837E0 (NtTerminateProcess.c)
 *     PsTerminateSystemThread @ 0x140700FC0 (PsTerminateSystemThread.c)
 *     PspTerminateAllThreads @ 0x14076D200 (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x14076DAA0 (NtTerminateThread.c)
 *     PspUserThreadStartup @ 0x14076F8D0 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x1409B1AF0 (PspSecureThreadStartup.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x140309C8C (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x1409B3C20 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 v4; // rdi
  unsigned int v5; // esi

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  if ( (*(_DWORD *)(a1 + 1376) & 0x20) != 0 && (*(_DWORD *)(v4 + 1124) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1448));
  }
  if ( v3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1376), 1u);
    PspExitThread(v5);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 2172) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1376), 0) )
    *(_DWORD *)(a1 + 1432) = v5;
  KeRequestTerminationThread(a1, a2, a3);
  return 0LL;
}
