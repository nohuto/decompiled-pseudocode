/*
 * XREFs of KeInitializeApc @ 0x1402BE6D0
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C3D0 (IopCopyCompleteReadIrp.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     ExpSetTimerObject @ 0x14032E824 (ExpSetTimerObject.c)
 *     EtwpQueueStackWalkApc @ 0x140468A86 (EtwpQueueStackWalkApc.c)
 *     IoRaiseHardError @ 0x140556A80 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140556D60 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140601ACC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140603480 (EtwpCovSampCaptureQueueApc.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14063B428 (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14065C854 (MiStoreModifiedWriteDereference.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073F758 (PspRecheckThreadOptionalXStateFeatures.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 *     NtQueueApcThreadEx2 @ 0x140779A80 (NtQueueApcThreadEx2.c)
 *     IopCancelIrpsInThreadList @ 0x1407C1AE8 (IopCancelIrpsInThreadList.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14093AE74 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1409753E0 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AE908 (PspEnableProcessOptionalXStateFeatures.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  char result; // al

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 32) = a4;
  result = a6 != 0 ? a7 : 0;
  *(_BYTE *)(a1 + 81) = result;
  *(_QWORD *)(a1 + 56) = a8 & -(__int64)(a6 != 0);
  *(_BYTE *)(a1 + 82) = 0;
  *(_BYTE *)(a1 + 1) = 0;
  return result;
}
