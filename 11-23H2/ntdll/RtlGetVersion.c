/*
 * XREFs of RtlGetVersion @ 0x18002F620
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002F400 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180078700 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x1800852D0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C230 (RtlInitAnsiString.c)
 *     RtlStringCbCopyW @ 0x180013D38 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlGetSuiteMask @ 0x18004A400 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x18004A430 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1800A3A60 (ZwQueryLicenseValue.c)
 *     NtQuerySystemInformationEx @ 0x1800A3C20 (NtQuerySystemInformationEx.c)
 */

__int64 __fastcall RtlGetVersion(int *a1)
{
  unsigned int v1; // edi
  struct _PEB *v3; // r14
  wchar_t *Buffer; // r8
  int v5; // esi
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  char *p_SourceString; // rdx
  NTSTATUS v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v21; // [rsp+60h] [rbp-A8h] BYREF
  STRING v22; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v23[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v24; // [rsp+8Ah] [rbp-7Eh]
  int v25; // [rsp+8Ch] [rbp-7Ch]
  int v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+94h] [rbp-74h]
  int v28; // [rsp+98h] [rbp-70h]
  char SourceString; // [rsp+9Ch] [rbp-6Ch] BYREF
  char v30; // [rsp+11Ch] [rbp+14h] BYREF
  char v31; // [rsp+19Ch] [rbp+94h] BYREF
  char v32; // [rsp+21Ch] [rbp+114h] BYREF
  char v33; // [rsp+29Ch] [rbp+194h] BYREF
  char v34; // [rsp+2B6h] [rbp+1AEh] BYREF
  int v35; // [rsp+2C8h] [rbp+1C0h]

  v1 = 0;
  v21 = 0LL;
  v15 = 0;
  v3 = NtCurrentPeb();
  a1[1] = v3->OSMajorVersion;
  a1[2] = v3->OSMinorVersion;
  a1[3] = v3->OSBuildNumber;
  a1[4] = v3->OSPlatformId;
  Buffer = v3->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
      *((_WORD *)a1 + 10) = 0;
  }
  else
  {
    *((_WORD *)a1 + 10) = 0;
  }
  v5 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFE7) != 0 || v5 == 308 )
    return 0LL;
  *((_WORD *)a1 + 138) = HIBYTE(v3->OSCSDVersion);
  *((_WORD *)a1 + 139) = (unsigned __int8)v3->OSCSDVersion;
  *((_WORD *)a1 + 140) = RtlGetSuiteMask();
  if ( v5 == 292 )
    a1[71] = RtlGetSuiteMask() & 0x1FFFF;
  *((_BYTE *)a1 + 282) = 0;
  if ( (unsigned __int8)RtlGetNtProductType(&v17) )
    *((_BYTE *)a1 + 282) = v17;
  RtlInitUnicodeString(&v21, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
  if ( (int)ZwQueryLicenseValue(&v21, &v18, &v15, 4LL, &v16) < 0 || v15 != 1 || v18 != 4 || v16 != 4 )
  {
    *((_WORD *)a1 + 140) &= ~0x10u;
    *((_WORD *)a1 + 140) |= 0x100u;
    if ( *a1 == 292 )
    {
      a1[71] &= 0xFFFDFFEF;
      a1[71] |= 0x100u;
    }
  }
  if ( *a1 != 300 )
    return 0LL;
  v19 = a1[73] & 0xFFF;
  result = NtQuerySystemInformationEx(222LL, &v19, 4LL, v23, 580, &v16);
  if ( (int)result < 0 )
    return result;
  v7 = *((unsigned __int16 *)a1 + 146);
  a1[1] = v25;
  a1[2] = v26;
  a1[3] = v27;
  a1[4] = v28;
  v8 = v7 >> 12;
  *((_WORD *)a1 + 147) = v24;
  a1[74] = v35;
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
    return 0LL;
  }
  p_SourceString = &SourceString;
LABEL_20:
  RtlInitAnsiString(&v22, p_SourceString);
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)(a1 + 5);
  v10 = RtlAnsiStringToUnicodeString(&DestinationString, &v22, 0);
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v1;
}
