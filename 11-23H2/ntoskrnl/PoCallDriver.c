/*
 * XREFs of PoCallDriver @ 0x14036E330
 * Callers:
 *     ViFilterDispatchPower @ 0x140ADF7F0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
