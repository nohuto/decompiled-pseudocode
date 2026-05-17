/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromKernel @ 0x18010FF00
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1800710F0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A0430 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A3C20 (NtQuerySystemInformationEx.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromKernel(__int64 a1, __int64 a2, _QWORD *a3, _OWORD *a4)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v7, 0, sizeof(v7));
  result = NtQuerySystemInformationEx();
  if ( (int)result >= 0 )
  {
    *a3 = v7[0];
    result = 0LL;
    *a4 = *(_OWORD *)&v7[1];
  }
  else if ( (_DWORD)result == -1073741275 || (_DWORD)result == -2147483614 )
  {
    *a3 = v7[0];
  }
  return result;
}
