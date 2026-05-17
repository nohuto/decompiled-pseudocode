/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x180072370
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x180072280 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x180072360 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlGetVersion @ 0x18004ED20 (RtlGetVersion.c)
 *     ReadUlongFromKey @ 0x180072594 (ReadUlongFromKey.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     ZwQueryLicenseValue @ 0x1800A6BC0 (ZwQueryLicenseValue.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[16]; // [rsp+80h] [rbp-80h] BYREF
  int v16[72]; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    v10 = 48LL;
    v13 = 64LL;
    Handle = 0LL;
    DestinationString = 0LL;
    v7 = 0;
    v6 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v11 = 0LL;
    p_DestinationString = &DestinationString;
    v14 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"UBR", &v7) >= 0 )
        v6 = v7;
      NtClose(Handle);
    }
    v16[0] = 284;
    RtlGetVersion(v16);
    *a1 = v6
        + (((unsigned int)v16[3] + (((unsigned int)v16[2] + ((unsigned __int64)(unsigned int)v16[1] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    v7 = 3;
    DestinationString.Buffer = L"Kernel-OneCore-DeviceFamilyID";
    *(_QWORD *)&DestinationString.Length = 3932218LL;
    ZwQueryLicenseValue(&DestinationString, &Handle, &v7, 4LL, v15);
    *a2 = v7;
  }
  if ( a3 )
  {
    v10 = 48LL;
    v13 = 64LL;
    Handle = 0LL;
    DestinationString = 0LL;
    v7 = 0;
    *a3 = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    v11 = 0LL;
    p_DestinationString = &DestinationString;
    v14 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v10) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"DeviceForm", &v7) >= 0 )
        *a3 = v7;
      NtClose(Handle);
    }
  }
}
