/*
 * XREFs of PnpPowerStateTransitionWatchdogPopRecord @ 0x140957C94
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140A9DF68 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA5FDC (PoDelistPowerStateTransitionBlocker.c)
 */

__int64 PnpPowerStateTransitionWatchdogPopRecord()
{
  return PoDelistPowerStateTransitionBlocker();
}
