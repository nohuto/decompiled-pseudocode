/*
 * XREFs of ZwOpenProcess @ 0x14041B220
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x1405F22C0 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671490 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
