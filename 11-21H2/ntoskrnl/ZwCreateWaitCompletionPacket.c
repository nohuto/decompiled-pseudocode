/*
 * XREFs of ZwCreateWaitCompletionPacket @ 0x14041D140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(WaitCompletionPacketHandle, *(_QWORD *)&DesiredAccess);
}
