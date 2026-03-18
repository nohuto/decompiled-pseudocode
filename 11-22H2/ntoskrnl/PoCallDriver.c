/*
 * XREFs of PoCallDriver @ 0x14036DB40
 * Callers:
 *     ViFilterDispatchPower @ 0x140AE07D0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
