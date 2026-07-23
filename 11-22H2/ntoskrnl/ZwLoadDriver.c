/*
 * XREFs of ZwLoadDriver @ 0x14041C820
 * Callers:
 *     KsepLoadShimProvider @ 0x140580CD8 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x1405F0DF0 (DifZwLoadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5BF0 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14099CC80 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1409F06F4 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
