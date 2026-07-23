/*
 * XREFs of RtlGetVersion @ 0x18002F7F0
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002F5D0 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180078090 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180084AD0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C450 (RtlInitAnsiString.c)
 *     RtlStringCbCopyW @ 0x180013F48 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025040 (RtlAnsiStringToUnicodeString.c)
 *     RtlGetSuiteMask @ 0x18004A560 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x18004A590 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1800A19A0 (ZwQueryLicenseValue.c)
 *     NtQuerySystemInformationEx @ 0x1800A1B60 (NtQuerySystemInformationEx.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  NTSTATUS v1; // edi
  struct _PEB *v3; // r14
  wchar_t *Buffer; // r8
  DWORD dwOSVersionInfoSize; // esi
  NTSTATUS result; // eax
  unsigned int dwMinorVersion_low; // ecx
  unsigned int v8; // ecx
  CHAR *p_SourceString; // rdx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  int Data; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultDataSize; // [rsp+3Ch] [rbp-CCh] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+40h] [rbp-C8h] BYREF
  ULONG Type; // [rsp+44h] [rbp-C4h] BYREF
  int InputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A8h] BYREF
  _STRING v22; // [rsp+70h] [rbp-98h] BYREF
  _BYTE SystemInformation[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v24; // [rsp+8Ah] [rbp-7Eh]
  DWORD v25; // [rsp+8Ch] [rbp-7Ch]
  DWORD v26; // [rsp+90h] [rbp-78h]
  DWORD v27; // [rsp+94h] [rbp-74h]
  DWORD v28; // [rsp+98h] [rbp-70h]
  CHAR SourceString; // [rsp+9Ch] [rbp-6Ch] BYREF
  char v30; // [rsp+11Ch] [rbp+14h] BYREF
  char v31; // [rsp+19Ch] [rbp+94h] BYREF
  char v32; // [rsp+21Ch] [rbp+114h] BYREF
  char v33; // [rsp+29Ch] [rbp+194h] BYREF
  char v34; // [rsp+2B6h] [rbp+1AEh] BYREF
  DWORD v35; // [rsp+2C8h] [rbp+1C0h]

  v1 = 0;
  ValueName = 0LL;
  Data = 0;
  v3 = NtCurrentPeb();
  VersionInformation->dwMajorVersion = v3->OSMajorVersion;
  VersionInformation->dwMinorVersion = v3->OSMinorVersion;
  VersionInformation->dwBuildNumber = v3->OSBuildNumber;
  VersionInformation->dwPlatformId = v3->OSPlatformId;
  Buffer = v3->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(VersionInformation->szCSDVersion, 0x100uLL, (__int64)Buffer) < 0 )
      VersionInformation->szCSDVersion[0] = 0;
  }
  else
  {
    VersionInformation->szCSDVersion[0] = 0;
  }
  dwOSVersionInfoSize = VersionInformation->dwOSVersionInfoSize;
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFE7) != 0 || dwOSVersionInfoSize == 308 )
    return 0;
  VersionInformation->wServicePackMajor = HIBYTE(v3->OSCSDVersion);
  VersionInformation->wServicePackMinor = (unsigned __int8)v3->OSCSDVersion;
  VersionInformation->wSuiteMask = RtlGetSuiteMask();
  if ( dwOSVersionInfoSize == 292 )
    VersionInformation[1].dwOSVersionInfoSize = RtlGetSuiteMask() & 0x1FFFF;
  VersionInformation->wProductType = 0;
  if ( RtlGetNtProductType(&NtProductType) )
    VersionInformation->wProductType = NtProductType;
  RtlInitUnicodeString(&ValueName, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
  if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0
    || Data != 1
    || Type != 4
    || ResultDataSize != 4 )
  {
    VersionInformation->wSuiteMask &= ~0x10u;
    VersionInformation->wSuiteMask |= 0x100u;
    if ( VersionInformation->dwOSVersionInfoSize == 292 )
    {
      VersionInformation[1].dwOSVersionInfoSize &= 0xFFFDFFEF;
      VersionInformation[1].dwOSVersionInfoSize |= 0x100u;
    }
  }
  if ( VersionInformation->dwOSVersionInfoSize != 300 )
    return 0;
  InputBuffer = VersionInformation[1].dwMinorVersion & 0xFFF;
  result = NtQuerySystemInformationEx(
             SystemBuildVersionInformation,
             &InputBuffer,
             4u,
             SystemInformation,
             0x244u,
             &ResultDataSize);
  if ( result < 0 )
    return result;
  dwMinorVersion_low = LOWORD(VersionInformation[1].dwMinorVersion);
  VersionInformation->dwMajorVersion = v25;
  VersionInformation->dwMinorVersion = v26;
  VersionInformation->dwBuildNumber = v27;
  VersionInformation->dwPlatformId = v28;
  v8 = dwMinorVersion_low >> 12;
  HIWORD(VersionInformation[1].dwMinorVersion) = v24;
  VersionInformation[1].dwBuildNumber = v35;
  if ( v8 )
  {
    v11 = v8 - 1;
    if ( !v11 )
    {
      p_SourceString = &v33;
      goto LABEL_20;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      p_SourceString = &v30;
      goto LABEL_20;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      p_SourceString = &v34;
      goto LABEL_20;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      p_SourceString = &v31;
      goto LABEL_20;
    }
    if ( v14 == 1 )
    {
      p_SourceString = &v32;
      goto LABEL_20;
    }
    return 0;
  }
  p_SourceString = &SourceString;
LABEL_20:
  RtlInitAnsiString(&v22, p_SourceString);
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = VersionInformation->szCSDVersion;
  v10 = RtlAnsiStringToUnicodeString(&DestinationString, &v22, 0);
  if ( v10 < 0 )
    return v10;
  return v1;
}
