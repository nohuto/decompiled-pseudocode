/*
 * XREFs of SmpQueryPagefileTooSmallForDump @ 0x1400181DC
 * Callers:
 *     SmpComputeDesiredPfSizeForCrashDump @ 0x140016D74 (SmpComputeDesiredPfSizeForCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 SmpQueryPagefileTooSmallForDump()
{
  __int64 v0; // rbx
  ULONG v2; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v3; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v4[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  *(_DWORD *)&v3.Length = 2228256;
  v3.Buffer = L"PagefileTooSmall";
  v0 = 0LL;
  if ( NtQueryValueKey(SmpCrashDumpKey, &v3, KeyValuePartialInformationAlign64, v4, 0x10u, &v2) >= 0
    && v4[0] == 11
    && v4[1] == 8 )
  {
    return v5;
  }
  return v0;
}
