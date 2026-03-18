/*
 * XREFs of ZwMakeTemporaryObject @ 0x14041C980
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     IoDeleteSymbolicLink @ 0x140874150 (IoDeleteSymbolicLink.c)
 *     PiDrvDbUnregisterNode @ 0x140971524 (PiDrvDbUnregisterNode.c)
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
