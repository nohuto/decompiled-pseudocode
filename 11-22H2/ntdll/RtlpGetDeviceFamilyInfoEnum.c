/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x180078090
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x180077FA0 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x180078080 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlGetVersion @ 0x18002F7F0 (RtlGetVersion.c)
 *     ReadUlongFromKey @ 0x1800782B4 (ReadUlongFromKey.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     ZwQueryLicenseValue @ 0x1800A19A0 (ZwQueryLicenseValue.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  __int128 v16; // [rsp+70h] [rbp-90h]
  _BYTE v17[16]; // [rsp+80h] [rbp-80h] BYREF
  int v18[72]; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    v11 = 0;
    v15 = 0;
    Handle = 0LL;
    v7 = 0;
    v6 = 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v12 = 0LL;
    p_DestinationString = &DestinationString;
    v10 = 48;
    v14 = 64;
    v16 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"UBR", &v7) >= 0 )
        v6 = v7;
      NtClose(Handle);
    }
    v18[0] = 284;
    RtlGetVersion(v18);
    *a1 = v6
        + (((unsigned int)v18[3] + (((unsigned int)v18[2] + ((unsigned __int64)(unsigned int)v18[1] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    v7 = 3;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &Handle, &v7, 4LL, v17);
    *a2 = v7;
  }
  if ( a3 )
  {
    v11 = 0;
    v15 = 0;
    Handle = 0LL;
    v7 = 0;
    *a3 = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    v12 = 0LL;
    p_DestinationString = &DestinationString;
    v10 = 48;
    v14 = 64;
    v16 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"DeviceForm", &v7) >= 0 )
        *a3 = v7;
      NtClose(Handle);
    }
  }
}
