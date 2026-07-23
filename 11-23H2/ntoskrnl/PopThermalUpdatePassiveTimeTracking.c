/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x14098B1C0
 * Callers:
 *     PopCoolingSxTransition @ 0x140587000 (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x140587118 (PopCoolingTelemetryWorker.c)
 *     PopThermalSxEntry @ 0x140590138 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x140590480 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140847B30 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x140982EF0 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1409830C8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140983378 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x14098B210 (PopThermalZoneRemove.c)
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
