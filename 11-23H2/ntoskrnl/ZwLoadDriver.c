/*
 * XREFs of ZwLoadDriver @ 0x14041D270
 * Callers:
 *     KsepLoadShimProvider @ 0x140581138 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x1405F12D0 (DifZwLoadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5940 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14099CDD0 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1409F08D4 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
