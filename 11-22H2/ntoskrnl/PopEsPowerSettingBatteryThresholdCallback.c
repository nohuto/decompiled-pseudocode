/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x1408654E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140870D10 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    dword_140C3D950 = *a2;
    if ( (unsigned int)dword_140C3D950 > 0x64 )
      dword_140C3D950 = 100;
    PopReleaseRwLock(&PopEsLock);
    PopEsWorkItemSchedule(2LL);
  }
  return v4;
}
