/*
 * XREFs of ZwDelayExecution @ 0x1800A1530
 * Callers:
 *     LdrpWaitForInitializationComplete @ 0x180002CDC (LdrpWaitForInitializationComplete.c)
 *     RtlpInitMuiCriticalSection @ 0x180011A44 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitializeThread @ 0x180028888 (LdrpInitializeThread.c)
 *     RtlDelayExecution @ 0x1800556D0 (RtlDelayExecution.c)
 *     EtwpFreeLoggerContext @ 0x18005AA6C (EtwpFreeLoggerContext.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18005B6AC (EtwpWaitForBufferReferenceCount.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007C61C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     InitSecurityCookie @ 0x1800AF690 (InitSecurityCookie.c)
 *     InitSpecialMachineFrames @ 0x1800AF708 (InitSpecialMachineFrames.c)
 *     GetShipAssertBuffer @ 0x1800E93A4 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FEBF0 (RtlLockHeapManagerForCloning.c)
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
