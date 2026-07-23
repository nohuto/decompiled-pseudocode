/*
 * XREFs of ZwOpenProcess @ 0x14041AB60
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x1405F2350 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671500 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
