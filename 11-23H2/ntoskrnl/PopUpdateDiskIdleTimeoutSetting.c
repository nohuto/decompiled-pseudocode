/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14084325C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058D8EC (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x1408236C0 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140863CE0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140B60E60 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407A7570 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4u, &PopCurrentDiskIdleTimeout);
  }
  return result;
}
