/*
 * XREFs of RtlSetActiveTimeBias @ 0x14083F1E4
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1406C59D0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x1407D42E0 (RtlWriteRegistryValue.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1407F7D34 (RtlpGetTimeZoneInfoHandle.c)
 */

__int64 __fastcall RtlSetActiveTimeBias(int a1)
{
  __int64 result; // rax
  int RegistryValues; // ebx
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF
  int ValueData; // [rsp+C0h] [rbp+67h] BYREF
  int v5; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF

  ValueData = a1;
  Handle = 0LL;
  v5 = 0;
  result = RtlpGetTimeZoneInfoHandle(1, &Handle);
  if ( (int)result >= 0 )
  {
    memset(v3, 0, 0x70uLL);
    v3[3] = &v5;
    LODWORD(v3[1]) = 292;
    v3[2] = L"ActiveTimeBias";
    LODWORD(v3[4]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, v3, 0LL);
    if ( RegistryValues < 0 || v5 != ValueData )
      RegistryValues = RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"ActiveTimeBias", 4u, &ValueData, 4u);
    ZwClose(Handle);
    return (unsigned int)RegistryValues;
  }
  return result;
}
