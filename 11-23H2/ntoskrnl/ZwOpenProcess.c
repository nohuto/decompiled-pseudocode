/*
 * XREFs of ZwOpenProcess @ 0x14041B5B0
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x1405F2830 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x1406719E0 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
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
