/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x1800EDCC4
 * Callers:
 *     AslRegistryGetStringExpand @ 0x1800EDB74 (AslRegistryGetStringExpand.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS NativeSystemInformation; // eax
  unsigned int v5; // ebx
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]

  v9 = 0LL;
  SystemInformation = 0LL;
  v10 = 0;
  v12 = 0;
  if ( a1 )
  {
    NativeSystemInformation = RtlGetNativeSystemInformation(1LL, &v9, 12LL, 0LL);
    v5 = NativeSystemInformation;
    if ( NativeSystemInformation < 0 )
    {
      v7 = "RtlGetNativeSystemInformation failed [%x]";
      v8 = 1839;
      goto LABEL_11;
    }
    *a1 = v9;
  }
  if ( a2 )
  {
    NativeSystemInformation = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
    v5 = NativeSystemInformation;
    if ( NativeSystemInformation >= 0 )
    {
      *a2 = SystemInformation;
      return 0;
    }
    v7 = "ZwQuerySystemInformation failed [%x]";
    v8 = 1873;
LABEL_11:
    AslLogCallPrintf(1, (unsigned int)"AslEnvGetProcessWowInfo", v8, (_DWORD)v7, NativeSystemInformation);
    return v5;
  }
  return 0;
}
