/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140389E70
 * Callers:
 *     PopThermalZoneAdd @ 0x140823850 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14084E000 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x140982EC8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140983178 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14098B010 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
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
  PopReleaseRwLock(&PopThermalTelemetryLock);
}
