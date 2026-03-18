/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1403C0F80
 * Callers:
 *     PopThermalZoneAdd @ 0x1408292C0 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x1408294F0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14098B5B8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14098B868 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140990740 (PopThermalZoneRemove.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
