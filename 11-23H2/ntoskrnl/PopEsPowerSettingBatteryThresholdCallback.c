/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x140865300
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140870A80 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    dword_140C3D9B0 = *a2;
    if ( (unsigned int)dword_140C3D9B0 > 0x64 )
      dword_140C3D9B0 = 100;
    PopReleaseRwLock(&PopEsLock);
    PopEsWorkItemSchedule(2LL);
  }
  return v4;
}
