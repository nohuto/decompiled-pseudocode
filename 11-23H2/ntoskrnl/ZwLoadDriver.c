/*
 * XREFs of ZwLoadDriver @ 0x14041CEE0
 * Callers:
 *     KsepLoadShimProvider @ 0x140580C48 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x1405F0D60 (DifZwLoadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5670 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14099CBD0 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1409F0644 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
