/*
 * XREFs of ZwUnloadDriver @ 0x14041E160
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x1405F8050 (DifZwUnloadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5BF0 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
