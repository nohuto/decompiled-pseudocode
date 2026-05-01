/*
 * XREFs of SdbpGetBinaryRuntimePlatform @ 0x1800911A4
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090D70 (SdbInitDatabaseEx.c)
 * Callees:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180090BB8 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A0404 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A0950 (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpGetBinaryRuntimePlatform(__int16 a1)
{
  __int16 *v1; // rbx
  __int16 v2; // ax
  int ProcessWowInfo; // eax
  int v5; // [rsp+20h] [rbp-18h]
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( a1 == 0x7FFF )
  {
    v6 = -1;
  }
  else
  {
    v2 = AslImageFileToArchitecture();
    v6 = v2;
    if ( v2 != -1 )
      return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
  }
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v7, &v6);
  if ( ProcessWowInfo < 0 )
  {
    v5 = ProcessWowInfo;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetBinaryRuntimePlatform",
      220,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]",
      v5);
    return 0LL;
  }
  v2 = v6;
  v1 = (__int16 *)&v7;
  return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
}
