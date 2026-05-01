/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x1800A0094
 * Callers:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180090858 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x180090904 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x180090E44 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180092CD8 (SdbpGetProcessHostGuestArchitectures.c)
 *     SdbpResolveMatchingFile @ 0x180096BF8 (SdbpResolveMatchingFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS NativeSystemInformation; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  NTSTATUS v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]

  v10 = 0LL;
  SystemInformation = 0LL;
  v11 = 0;
  v13 = 0;
  if ( !a1 )
  {
LABEL_6:
    if ( a2 )
    {
      NativeSystemInformation = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
      v5 = NativeSystemInformation;
      if ( NativeSystemInformation < 0 )
      {
        v6 = "ZwQuerySystemInformation failed [%x]";
        v7 = 1873;
        goto LABEL_4;
      }
      *a2 = SystemInformation;
    }
    return 0;
  }
  NativeSystemInformation = RtlGetNativeSystemInformation(1LL, &v10, 12LL, 0LL);
  v5 = NativeSystemInformation;
  if ( NativeSystemInformation >= 0 )
  {
    *a1 = v10;
    goto LABEL_6;
  }
  v6 = "RtlGetNativeSystemInformation failed [%x]";
  v7 = 1839;
LABEL_4:
  v9 = NativeSystemInformation;
  AslLogCallPrintf(1LL, (unsigned int)"AslEnvGetProcessWowInfo", v7, (_DWORD)v6, v9);
  return v5;
}
