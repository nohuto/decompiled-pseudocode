/*
 * XREFs of SdbGuestHostArchsToRuntimePlatformFlag @ 0x180095BC0
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x180095C6C (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x18009604C (SdbpGetBinaryRuntimePlatform.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A3244 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestHostArchsToRuntimePlatformFlag(__int16 a1, __int16 *a2)
{
  __int64 v3; // rbx
  __int16 v4; // dx
  _WORD *i; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == -1 )
    return 0LL;
  v3 = 0LL;
  v7 = -1;
  if ( !a2 || (v4 = *a2, v7 = v4, v4 == -1) )
  {
    if ( (int)AslEnvGetProcessWowInfo(&v7, 0LL) < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGuestHostArchsToRuntimePlatformFlag",
        249,
        (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
      return 0LL;
    }
    v4 = v7;
  }
  for ( i = &unk_1800C7E36; a1 != *(i - 1) || v4 != *i; i += 8 )
  {
    if ( (unsigned __int64)++v3 >= 8 )
      return 0LL;
  }
  return dword_1800C7E38[4 * v3];
}
