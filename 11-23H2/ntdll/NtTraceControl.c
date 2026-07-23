/*
 * XREFs of NtTraceControl @ 0x1800A4900
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002FBC8 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18003250C (EtwpRegisterProvider.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18004B7A0 (EtwpRegisterTpNotificationOnce.c)
 *     EtwEventWriteStartScenario @ 0x1800525C0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x1800526C0 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x180052AD0 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180052C24 (EtwpReceiveReplyDataBlock.c)
 *     EtwpNotificationThread @ 0x18005E6A0 (EtwpNotificationThread.c)
 *     EtwReplyNotification @ 0x18005F080 (EtwReplyNotification.c)
 *     EtwEventActivityIdControl @ 0x180061C10 (EtwEventActivityIdControl.c)
 *     EtwpGetMaxLogger @ 0x180081DE8 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x18008510C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008EAE0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180125090 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x180125560 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x180125960 (EtwpRegisterPrivateSession.c)
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
