/*
 * XREFs of ZwMakeTemporaryObject @ 0x14041D040
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     IoDeleteSymbolicLink @ 0x140873C80 (IoDeleteSymbolicLink.c)
 *     PiDrvDbUnregisterNode @ 0x140971474 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(Handle, v1);
}
