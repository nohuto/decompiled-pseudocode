/*
 * XREFs of NtTraceControl @ 0x1800A7A40
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180002EC0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x180004A00 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x180004BE0 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180004D10 (EtwpReceiveReplyDataBlock.c)
 *     EtwpNotificationThread @ 0x1800073C0 (EtwpNotificationThread.c)
 *     EtwReplyNotification @ 0x180007D40 (EtwReplyNotification.c)
 *     EtwpSetProviderTraits @ 0x180015628 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x1800165B8 (EtwpRegisterProvider.c)
 *     EtwEventActivityIdControl @ 0x18005E5A0 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180084B20 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpGetMaxLogger @ 0x180087B68 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x18008894C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x180093420 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180121F48 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x180122410 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1801227A8 (EtwpRegisterPrivateSession.c)
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

  result = 463;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
