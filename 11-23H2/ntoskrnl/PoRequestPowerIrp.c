/*
 * XREFs of PoRequestPowerIrp @ 0x14028F490
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x14028F4C0 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp(
           (int)DeviceObject,
           MinorFunction,
           PowerState.SystemState,
           (int)CompletionFunction,
           (__int64)Context,
           0,
           (PIRP)Irp);
}
