/*
 * XREFs of KeyboardClassCreateWaitWakeIrp @ 0x1C000F4A4
 * Callers:
 *     KeyboardClassPower @ 0x1C0001560 (KeyboardClassPower.c)
 *     KeyboardStart @ 0x1C0002AF0 (KeyboardStart.c)
 *     KeyboardToggleWaitWakeWorker @ 0x1C0006020 (KeyboardToggleWaitWakeWorker.c)
 *     KeyboardClassCreateWaitWakeIrpWorker @ 0x1C000F500 (KeyboardClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 288),
           (PREQUEST_POWER_COMPLETE)KeyboardClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
