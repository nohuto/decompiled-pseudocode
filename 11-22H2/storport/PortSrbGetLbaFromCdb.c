/*
 * XREFs of PortSrbGetLbaFromCdb @ 0x1C007813C
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     IsZonedWriteRequest @ 0x1C000F7D0 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C00409D8 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0040C6C (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbGetLbaFromCdb(unsigned __int8 *a1, int a2)
{
  __int64 v3; // [rsp+18h] [rbp+18h]

  if ( a2 != 16 )
    return a1[5] | ((a1[4] | ((a1[3] | (a1[2] << 8)) << 8)) << 8);
  HIBYTE(v3) = a1[2];
  BYTE6(v3) = a1[3];
  BYTE5(v3) = a1[4];
  BYTE4(v3) = a1[5];
  BYTE3(v3) = a1[6];
  BYTE2(v3) = a1[7];
  BYTE1(v3) = a1[8];
  LOBYTE(v3) = a1[9];
  return v3;
}
