/*
 * XREFs of NtTraceControl @ 0x1800A2840
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002FD98 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18003266C (EtwpRegisterProvider.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18004B900 (EtwpRegisterTpNotificationOnce.c)
 *     EtwEventWriteStartScenario @ 0x180052720 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x180052820 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x180052C30 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180052D84 (EtwpReceiveReplyDataBlock.c)
 *     EtwEventActivityIdControl @ 0x18005C440 (EtwEventActivityIdControl.c)
 *     EtwpNotificationThread @ 0x180061530 (EtwpNotificationThread.c)
 *     EtwReplyNotification @ 0x180061F10 (EtwReplyNotification.c)
 *     EtwpGetMaxLogger @ 0x180081778 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x18008490C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008E2E0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180123C10 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x1801240E0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1801244E0 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 467;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
