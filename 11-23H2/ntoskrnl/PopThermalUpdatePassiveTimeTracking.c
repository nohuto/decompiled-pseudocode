/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x14098AFC0
 * Callers:
 *     PopCoolingSxTransition @ 0x140586B10 (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x140586C28 (PopCoolingTelemetryWorker.c)
 *     PopThermalSxEntry @ 0x14058FC48 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x14058FF90 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140847830 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x140982CF0 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x140982EC8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140983178 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14098B010 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 24) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
