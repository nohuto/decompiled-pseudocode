/*
 * XREFs of RtlGetVersion @ 0x18004ED20
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18004EB00 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180072370 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180089A50 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180035350 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x18004C27C (RtlStringCbCopyW.c)
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180050520 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1800A6BC0 (ZwQueryLicenseValue.c)
 *     NtQuerySystemInformationEx @ 0x1800A6D80 (NtQuerySystemInformationEx.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  struct _PEB *v2; // r11
  wchar_t *Buffer; // r8
  WCHAR *szCSDVersion; // rsi
  DWORD dwOSVersionInfoSize; // edi
  NTSTATUS result; // eax
  unsigned int dwMinorVersion_low; // ecx
  unsigned int v8; // ecx
  CHAR *p_SourceString; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int Data; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultDataSize; // [rsp+3Ch] [rbp-CCh] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+40h] [rbp-C8h] BYREF
  ULONG Type; // [rsp+44h] [rbp-C4h] BYREF
  int InputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A8h] BYREF
  _STRING v21; // [rsp+70h] [rbp-98h] BYREF
  _BYTE SystemInformation[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v23; // [rsp+8Ah] [rbp-7Eh]
  DWORD v24; // [rsp+8Ch] [rbp-7Ch]
  DWORD v25; // [rsp+90h] [rbp-78h]
  DWORD v26; // [rsp+94h] [rbp-74h]
  DWORD v27; // [rsp+98h] [rbp-70h]
  CHAR SourceString; // [rsp+9Ch] [rbp-6Ch] BYREF
  char v29; // [rsp+11Ch] [rbp+14h] BYREF
  char v30; // [rsp+19Ch] [rbp+94h] BYREF
  char v31; // [rsp+21Ch] [rbp+114h] BYREF
  char v32; // [rsp+29Ch] [rbp+194h] BYREF
  char v33; // [rsp+2B6h] [rbp+1AEh] BYREF
  DWORD v34; // [rsp+2C8h] [rbp+1C0h]

  ValueName = 0LL;
  Data = 0;
  v2 = NtCurrentPeb();
  VersionInformation->dwMajorVersion = v2->OSMajorVersion;
  VersionInformation->dwMinorVersion = v2->OSMinorVersion;
  VersionInformation->dwBuildNumber = v2->OSBuildNumber;
  VersionInformation->dwPlatformId = v2->OSPlatformId;
  Buffer = v2->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer )
  {
    szCSDVersion = VersionInformation->szCSDVersion;
LABEL_4:
    *szCSDVersion = 0;
    goto LABEL_5;
  }
  szCSDVersion = VersionInformation->szCSDVersion;
  if ( (int)RtlStringCbCopyW(VersionInformation->szCSDVersion, 0x100uLL, (__int64)Buffer) < 0 )
    goto LABEL_4;
LABEL_5:
  dwOSVersionInfoSize = VersionInformation->dwOSVersionInfoSize;
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFE7) != 0 || dwOSVersionInfoSize == 308 )
    return 0;
  VersionInformation->wServicePackMajor = HIBYTE(v2->OSCSDVersion);
  VersionInformation->wServicePackMinor = (unsigned __int8)v2->OSCSDVersion;
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
  VersionInformation->dwMajorVersion = v24;
  VersionInformation->dwMinorVersion = v25;
  VersionInformation->dwBuildNumber = v26;
  VersionInformation->dwPlatformId = v27;
  v8 = dwMinorVersion_low >> 12;
  HIWORD(VersionInformation[1].dwMinorVersion) = v23;
  VersionInformation[1].dwBuildNumber = v34;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              return 0;
            p_SourceString = &v31;
          }
          else
          {
            p_SourceString = &v30;
          }
        }
        else
        {
          p_SourceString = &v33;
        }
      }
      else
      {
        p_SourceString = &v29;
      }
    }
    else
    {
      p_SourceString = &v32;
    }
  }
  else
  {
    p_SourceString = &SourceString;
  }
  RtlInitAnsiString(&v21, p_SourceString);
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = szCSDVersion;
  result = RtlAnsiStringToUnicodeString(&DestinationString, &v21, 0);
  if ( result >= 0 )
    return 0;
  return result;
}
