/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromKernel @ 0x18010EA50
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x180070E50 (RtlQueryFeatureConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A1B60 (NtQuerySystemInformationEx.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromKernel(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax

  result = NtQuerySystemInformationEx();
  if ( (int)result >= 0 )
  {
    *a3 = 0LL;
    *(_QWORD *)a4 = 0LL;
    *(_DWORD *)(a4 + 8) = 0;
    return 0LL;
  }
  else if ( (_DWORD)result == -1073741275 || (_DWORD)result == -2147483614 )
  {
    *a3 = 0LL;
  }
  return result;
}
