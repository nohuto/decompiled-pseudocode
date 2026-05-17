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

NTSTATUS __fastcall RtlGetVersion(int *a1)
{
  struct _PEB *v2; // r11
  wchar_t *Buffer; // r8
  wchar_t *v4; // rsi
  int v5; // edi
  NTSTATUS result; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  char *p_SourceString; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v20; // [rsp+60h] [rbp-A8h] BYREF
  STRING v21; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v22[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v23; // [rsp+8Ah] [rbp-7Eh]
  int v24; // [rsp+8Ch] [rbp-7Ch]
  int v25; // [rsp+90h] [rbp-78h]
  int v26; // [rsp+94h] [rbp-74h]
  int v27; // [rsp+98h] [rbp-70h]
  char SourceString; // [rsp+9Ch] [rbp-6Ch] BYREF
  char v29; // [rsp+11Ch] [rbp+14h] BYREF
  char v30; // [rsp+19Ch] [rbp+94h] BYREF
  char v31; // [rsp+21Ch] [rbp+114h] BYREF
  char v32; // [rsp+29Ch] [rbp+194h] BYREF
  char v33; // [rsp+2B6h] [rbp+1AEh] BYREF
  int v34; // [rsp+2C8h] [rbp+1C0h]

  v20 = 0LL;
  v14 = 0;
  v2 = NtCurrentPeb();
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  Buffer = v2->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer )
  {
    v4 = (wchar_t *)(a1 + 5);
LABEL_4:
    *v4 = 0;
    goto LABEL_5;
  }
  v4 = (wchar_t *)(a1 + 5);
  if ( (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
    goto LABEL_4;
LABEL_5:
  v5 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFE7) != 0 || v5 == 308 )
    return 0;
  *((_WORD *)a1 + 138) = HIBYTE(v2->OSCSDVersion);
  *((_WORD *)a1 + 139) = (unsigned __int8)v2->OSCSDVersion;
  *((_WORD *)a1 + 140) = RtlGetSuiteMask();
  if ( v5 == 292 )
    a1[71] = RtlGetSuiteMask() & 0x1FFFF;
  *((_BYTE *)a1 + 282) = 0;
  if ( (unsigned __int8)RtlGetNtProductType(&v16) )
    *((_BYTE *)a1 + 282) = v16;
  RtlInitUnicodeString(&v20, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
  if ( (int)ZwQueryLicenseValue(&v20, &v17, &v14, 4LL, &v15) < 0 || v14 != 1 || v17 != 4 || v15 != 4 )
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
    return 0;
  v18 = a1[73] & 0xFFF;
  result = NtQuerySystemInformationEx(222LL, &v18, 4LL, v22, 580, &v15);
  if ( result < 0 )
    return result;
  v7 = *((unsigned __int16 *)a1 + 146);
  a1[1] = v24;
  a1[2] = v25;
  a1[3] = v26;
  a1[4] = v27;
  v8 = v7 >> 12;
  *((_WORD *)a1 + 147) = v23;
  a1[74] = v34;
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
  DestinationString.Buffer = v4;
  result = RtlAnsiStringToUnicodeString(&DestinationString, &v21, 0);
  if ( result >= 0 )
    return 0;
  return result;
}
