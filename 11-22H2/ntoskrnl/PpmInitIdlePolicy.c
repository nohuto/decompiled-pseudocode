/*
 * XREFs of PpmInitIdlePolicy @ 0x140B68458
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     PpmConvertTime @ 0x1402553F0 (PpmConvertTime.c)
 *     ZwQueryLicenseValue @ 0x14041D260 (ZwQueryLicenseValue.c)
 */

NTSTATUS PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  unsigned __int64 *v1; // r11
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  int Data; // [rsp+70h] [rbp+30h] BYREF

  dword_140C39560 = 50000;
  dword_140C39718 = 50000;
  v0 = 2 * PopQpcFrequency;
  Data = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  word_140C3955C = 0;
  word_140C39714 = 0;
  word_140C39565 = 60;
  word_140C3971D = 60;
  byte_140C39564 = 40;
  byte_140C3971C = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  v1 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
    {
      v4 = PpmConvertTime(v3, 0x989680uLL, PopQpcFrequency);
      *v1 = v4;
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v5 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
  v6 = 37LL;
  do
  {
    v7 = v5[1];
    if ( v7 != -1LL )
    {
      v8 = PpmConvertTime(v7, 0x989680uLL, PopQpcFrequency);
      *v5 = v8;
    }
    v5 += 3;
    --v6;
  }
  while ( v6 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 && ResultDataSize == 4 && Type == 4 )
    PpmIdleRespectIdleStateMax = Data != 0;
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
