/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1402A8CB0
 * Callers:
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     ExpWorkerThread @ 0x1402BEB90 (ExpWorkerThread.c)
 *     KiEpfStart @ 0x140579034 (KiEpfStart.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x140AAB110 (ExpSetSwappingKernelApc.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0;
  if ( Enable != result )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
  }
  return result;
}
