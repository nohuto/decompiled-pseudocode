/*
 * XREFs of PoCallDriver @ 0x1403A6C60
 * Callers:
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     sub_140A9E710 @ 0x140A9E710 (sub_140A9E710.c)
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
