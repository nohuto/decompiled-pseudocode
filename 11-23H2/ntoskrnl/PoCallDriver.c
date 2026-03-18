/*
 * XREFs of PoCallDriver @ 0x14036E190
 * Callers:
 *     ViFilterDispatchPower @ 0x140ADF800 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
