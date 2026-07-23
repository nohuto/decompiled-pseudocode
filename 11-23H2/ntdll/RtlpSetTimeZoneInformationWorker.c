/*
 * XREFs of RtlpSetTimeZoneInformationWorker @ 0x1800FB238
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x1800FB170 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x1800FB190 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     RtlpGetTimeZoneInfoHandle @ 0x18005E310 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x18008D720 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x180095340 (wcsnlen.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

int __fastcall RtlpSetTimeZoneInformationWorker(wchar_t *ValueData, unsigned int a2)
{
  char *v2; // r14
  size_t v5; // rax
  int v6; // r15d
  size_t v7; // rax
  int v8; // r13d
  size_t v9; // rax
  int v10; // edi
  int result; // eax
  NTSTATUS v12; // edi
  int *v13; // rax
  int v14; // [rsp+70h] [rbp+40h] BYREF
  int v15; // [rsp+80h] [rbp+50h] BYREF
  PCWSTR Path; // [rsp+88h] [rbp+58h] BYREF

  v2 = (char *)(ValueData + 2);
  v5 = wcsnlen(ValueData + 2, 0x20uLL);
  v6 = v5;
  if ( v5 >= 0x20 )
    return -1073741811;
  v7 = wcsnlen(ValueData + 44, 0x20uLL);
  v8 = v7;
  if ( v7 >= 0x20 )
    return -1073741811;
  if ( a2 < 0x1B0 )
  {
    v10 = 0;
  }
  else
  {
    v9 = wcsnlen(ValueData + 86, 0x80uLL);
    v10 = v9;
    if ( v9 >= 0x80 )
      return -1073741811;
  }
  result = RtlpGetTimeZoneInfoHandle(1, (HANDLE *)&Path);
  if ( result >= 0 )
  {
    if ( RtlWriteRegistryValue(0x40000000u, Path, L"Bias", 4u, ValueData, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardName", 1u, v2, 2 * v6 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardBias", 4u, ValueData + 42, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardStart", 3u, ValueData + 34, 0x10u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightName", 1u, ValueData + 44, 2 * v8 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightBias", 4u, ValueData + 84, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightStart", 3u, ValueData + 76, 0x10u) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(v14) = 0;
      v12 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, &v14, 2u);
      if ( v12 >= 0 )
      {
        v15 = *((unsigned __int8 *)ValueData + 428);
        v13 = &v15;
        goto LABEL_21;
      }
    }
    else
    {
      v12 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, ValueData + 86, 2 * v10 + 2);
      if ( v12 >= 0 )
      {
        v14 = *((unsigned __int8 *)ValueData + 428);
        v13 = &v14;
LABEL_21:
        v12 = RtlWriteRegistryValue(0x40000000u, Path, L"DynamicDaylightTimeDisabled", 4u, v13, 4u);
      }
    }
    NtClose((HANDLE)Path);
    return v12;
  }
  return result;
}
