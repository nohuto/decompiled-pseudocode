/*
 * XREFs of ZwLoadDriver @ 0x14041D8C0
 * Callers:
 *     KsepLoadShimProvider @ 0x14057D548 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x140620EC0 (DifZwLoadDriverWrapper.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406D5860 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     PopCadTriggerDriverLoad @ 0x14099D210 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1409EE5BC (EtwpConstructIptData.c)
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
