/*
 * XREFs of MouseClassCreateWaitWakeIrp @ 0x1C000CEC0
 * Callers:
 *     MouseClassPower @ 0x1C00020F0 (MouseClassPower.c)
 *     MouseStart @ 0x1C0002AB0 (MouseStart.c)
 *     MouseToggleWaitWakeWorker @ 0x1C0005820 (MouseToggleWaitWakeWorker.c)
 *     MouseClassCreateWaitWakeIrpWorker @ 0x1C000E260 (MouseClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall MouseClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 272),
           (PREQUEST_POWER_COMPLETE)MouseClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
