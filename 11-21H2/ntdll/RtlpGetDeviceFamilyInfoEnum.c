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
  unsigned int Data; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Type[2]; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize[4]; // [rsp+80h] [rbp-80h] BYREF
  _OSVERSIONINFOEXW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    *(_QWORD *)Type = 0LL;
    ValueName = 0LL;
    Data = 0;
    v6 = 0LL;
    RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &ValueName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey((PHANDLE)Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)ReadUlongFromKey(*(HANDLE *)Type) >= 0 )
        v6 = Data;
      NtClose(*(HANDLE *)Type);
    }
    VersionInformation.dwOSVersionInfoSize = 284;
    RtlGetVersion(&VersionInformation);
    *a1 = v6
        + ((VersionInformation.dwBuildNumber
          + ((VersionInformation.dwMinorVersion + ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    Data = 3;
    ValueName.Buffer = L"Kernel-OneCore-DeviceFamilyID";
    *(_QWORD *)&ValueName.Length = 3932218LL;
    ZwQueryLicenseValue(&ValueName, Type, &Data, 4u, ResultDataSize);
    *a2 = Data;
  }
  if ( a3 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    *(_QWORD *)Type = 0LL;
    ValueName = 0LL;
    Data = 0;
    *a3 = 0;
    RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &ValueName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey((PHANDLE)Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)ReadUlongFromKey(*(HANDLE *)Type) >= 0 )
        *a3 = Data;
      NtClose(*(HANDLE *)Type);
    }
  }
}
