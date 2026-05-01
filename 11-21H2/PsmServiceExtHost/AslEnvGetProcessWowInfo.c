/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x1800A3244
 * Callers:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180095BC0 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x180095C6C (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x18009604C (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180097FF8 (SdbpGetProcessHostGuestArchitectures.c)
 *     SdbpResolveMatchingFile @ 0x18009C078 (SdbpResolveMatchingFile.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS NativeSystemInformation; // ebx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  SystemInformation = 0LL;
  v7 = 0;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    if ( a2 )
    {
      NativeSystemInformation = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
      if ( NativeSystemInformation < 0 )
        goto LABEL_3;
      *a2 = SystemInformation;
    }
    return 0;
  }
  NativeSystemInformation = RtlGetNativeSystemInformation(1LL, &v6, 12LL, 0LL);
  if ( NativeSystemInformation >= 0 )
  {
    *a1 = v6;
    goto LABEL_5;
  }
LABEL_3:
  AslLogCallPrintf(1LL);
  return (unsigned int)NativeSystemInformation;
}
