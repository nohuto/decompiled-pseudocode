/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x140844FEC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058D97C (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x140824620 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1408640A0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140B649D0 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
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
