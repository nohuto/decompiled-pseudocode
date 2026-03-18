/*
 * XREFs of ZwUnloadDriver @ 0x14041E820
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x1405F7FC0 (DifZwUnloadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5670 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
