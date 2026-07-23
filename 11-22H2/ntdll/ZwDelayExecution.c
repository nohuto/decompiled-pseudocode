/*
 * XREFs of ZwDelayExecution @ 0x18009F470
 * Callers:
 *     LdrpWaitForInitializationComplete @ 0x180002CAC (LdrpWaitForInitializationComplete.c)
 *     LdrpInitMuiCrits @ 0x180008BC4 (LdrpInitMuiCrits.c)
 *     RtlpInitMuiCriticalSection @ 0x180011C54 (RtlpInitMuiCriticalSection.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpInitializeThread @ 0x180028A58 (LdrpInitializeThread.c)
 *     RtlDelayExecution @ 0x180055830 (RtlDelayExecution.c)
 *     EtwpFreeLoggerContext @ 0x18005DA64 (EtwpFreeLoggerContext.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18005E6AC (EtwpWaitForBufferReferenceCount.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     InitSecurityCookie @ 0x1800AD5C0 (InitSecurityCookie.c)
 *     InitSpecialMachineFrames @ 0x1800AD638 (InitSpecialMachineFrames.c)
 *     GetShipAssertBuffer @ 0x1800E8074 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FD7E0 (RtlLockHeapManagerForCloning.c)
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
