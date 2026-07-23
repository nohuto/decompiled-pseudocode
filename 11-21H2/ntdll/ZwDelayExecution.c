/*
 * XREFs of ZwDelayExecution @ 0x1800A46F0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1800047FC (EtwpWaitForBufferReferenceCount.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18003A8EC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpInitializeThread @ 0x18003FC80 (LdrpInitializeThread.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 *     RtlDelayExecution @ 0x18005B8C0 (RtlDelayExecution.c)
 *     LdrpInitMuiCrits @ 0x180067F0C (LdrpInitMuiCrits.c)
 *     LdrpWaitForInitializationComplete @ 0x18007B404 (LdrpWaitForInitializationComplete.c)
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 *     InitSpecialMachineFrames @ 0x1800B07CE (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x1800DC784 (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800E91E4 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FDAB4 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
