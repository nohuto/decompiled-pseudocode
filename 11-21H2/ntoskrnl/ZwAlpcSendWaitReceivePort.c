/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14041C8E0
 * Callers:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     sub_14061D840 @ 0x14061D840 (sub_14061D840.c)
 *     sub_1407EFAD0 @ 0x1407EFAD0 (sub_1407EFAD0.c)
 *     sub_14081AE90 @ 0x14081AE90 (sub_14081AE90.c)
 *     sub_14081B360 @ 0x14081B360 (sub_14081B360.c)
 *     sub_1408600E4 @ 0x1408600E4 (sub_1408600E4.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}
