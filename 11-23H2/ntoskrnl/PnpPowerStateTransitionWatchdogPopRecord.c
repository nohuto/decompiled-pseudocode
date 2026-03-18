/*
 * XREFs of PnpPowerStateTransitionWatchdogPopRecord @ 0x140957A94
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140A9E0F8 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA616C (PoDelistPowerStateTransitionBlocker.c)
 */

__int64 PnpPowerStateTransitionWatchdogPopRecord()
{
  return PoDelistPowerStateTransitionBlocker();
}
