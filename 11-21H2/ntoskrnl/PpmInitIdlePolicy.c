/*
 * XREFs of PpmInitIdlePolicy @ 0x140B25110
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 */

__int64 PpmInitIdlePolicy()
{
  __int64 v0; // rax
  unsigned __int64 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+68h] [rbp+28h] BYREF
  int v10; // [rsp+70h] [rbp+30h]

  dword_140C1D120 = 50000;
  dword_140C1E1D0 = 50000;
  v0 = 2 * PopQpcFrequency;
  v10 = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  v9 = 0;
  DestinationString = 0LL;
  word_140C1D11C = 0;
  word_140C1E1CC = 0;
  word_140C1D125 = 60;
  word_140C1E1D5 = 60;
  byte_140C1D124 = 40;
  byte_140C1E1D4 = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  v1 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
      *v1 = PpmConvertTime(v3, 0x989680uLL, PopQpcFrequency);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v4 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
  v5 = 37LL;
  do
  {
    v6 = v4[1];
    if ( v6 != -1LL )
      *v4 = PpmConvertTime(v6, 0x989680uLL, PopQpcFrequency);
    v4 += 3;
    --v5;
  }
  while ( v5 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v9);
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
