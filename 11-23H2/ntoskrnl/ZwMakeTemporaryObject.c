/*
 * XREFs of ZwMakeTemporaryObject @ 0x14041D3D0
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 *     IoDeleteSymbolicLink @ 0x140873EC0 (IoDeleteSymbolicLink.c)
 *     PiDrvDbUnregisterNode @ 0x140971674 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
