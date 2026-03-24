/*
 * XREFs of MouseClassCreateWaitWakeIrp @ 0x1C000EF00
 * Callers:
 *     MouseClassPower @ 0x1C00013A0 (MouseClassPower.c)
 *     MouseStart @ 0x1C00026C0 (MouseStart.c)
 *     MouseToggleWaitWakeWorker @ 0x1C0005B20 (MouseToggleWaitWakeWorker.c)
 *     MouseClassCreateWaitWakeIrpWorker @ 0x1C000EF60 (MouseClassCreateWaitWakeIrpWorker.c)
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
