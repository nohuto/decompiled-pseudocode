/*
 * XREFs of SdbpGetBinaryRuntimePlatform @ 0x18009604C
 * Callers:
 *     SdbInitDatabaseEx @ 0x180095D78 (SdbInitDatabaseEx.c)
 * Callees:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180095BC0 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A3244 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A379C (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpGetBinaryRuntimePlatform(__int16 a1)
{
  __int16 *v1; // rbx
  __int16 v2; // ax
  __int16 v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( a1 == 0x7FFF )
  {
    v4 = -1;
  }
  else
  {
    v2 = AslImageFileToArchitecture();
    v4 = v2;
    if ( v2 != -1 )
      return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
  }
  if ( (int)AslEnvGetProcessWowInfo(&v5, &v4) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetBinaryRuntimePlatform",
      215,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
    return 0LL;
  }
  v2 = v4;
  v1 = (__int16 *)&v5;
  return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
}
