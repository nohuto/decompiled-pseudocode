/*
 * XREFs of PopFxPlatformStateAvailable @ 0x14058B35C
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x14035DFAC (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x14028E75C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028E848 (PopDeepSleepSetDisengageReason.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x140584E20 (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x14058BA44 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1405998E8 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14059D89C (PopIdleWakeNotifyDevicesActive.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(unsigned int a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  PpmIdleCsVetoAccountingDeviceUpdate(a1, a2);
  result = PpmPlatformStates;
  if ( a1 == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( a2 )
    {
      PopFxSetDripsBlockedByDeviceActivity(0LL);
      PopIdleWakeNotifyDevicesActive(0LL);
      PopUpdateNonAttributedCpuTimeReference(0LL);
      return PopDeepSleepClearDisengageReason(6u);
    }
    else
    {
      LOBYTE(v4) = 1;
      PopFxSetDripsBlockedByDeviceActivity(v4);
      LOBYTE(v6) = 1;
      PopIdleWakeNotifyDevicesActive(v6);
      LOBYTE(v7) = 1;
      PopUpdateNonAttributedCpuTimeReference(v7);
      return PopDeepSleepSetDisengageReason(6u);
    }
  }
  return result;
}
