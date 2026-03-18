/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x1408650C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140870840 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    dword_140C3D8B0 = *a2;
    if ( (unsigned int)dword_140C3D8B0 > 0x64 )
      dword_140C3D8B0 = 100;
    PopReleaseRwLock(&PopEsLock);
    PopEsWorkItemSchedule(2LL);
  }
  return v4;
}
