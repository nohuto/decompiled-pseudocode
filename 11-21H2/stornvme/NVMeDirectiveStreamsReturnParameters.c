/*
 * XREFs of NVMeDirectiveStreamsReturnParameters @ 0x1C0022948
 * Callers:
 *     NVMeInitStreams @ 0x1C00198AC (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C001C02C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001C1E4 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1C000556C (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x20u);
  return 3238002691LL;
}
