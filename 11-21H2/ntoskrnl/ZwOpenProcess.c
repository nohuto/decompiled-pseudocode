/*
 * XREFs of ZwOpenProcess @ 0x14041BC20
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x140622490 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14064CD50 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
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
