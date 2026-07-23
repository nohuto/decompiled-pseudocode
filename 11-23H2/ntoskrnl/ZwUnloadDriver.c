/*
 * XREFs of ZwUnloadDriver @ 0x14041EBB0
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x1405F8530 (DifZwUnloadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5940 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
