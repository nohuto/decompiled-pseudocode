/*
 * XREFs of PowerIrpComplete @ 0x1C0009990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PowerIrpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  KeSetEvent((PRKEVENT)Context + 23, 0, 0);
  KeReleaseSemaphore((PRKSEMAPHORE)(Context + 664), 0, 1, 0);
}
