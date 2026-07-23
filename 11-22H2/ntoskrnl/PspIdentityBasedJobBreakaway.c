/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x1407EA990
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x140226000 (RtlQueryPackageIdentityEx.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(void *a1, void *a2, _DWORD *a3)
{
  unsigned __int64 v4; // r14
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdi
  NTSTATUS v10; // eax
  GUID *v11; // [rsp+28h] [rbp-D8h]
  GUID *v12; // [rsp+28h] [rbp-D8h]
  unsigned __int64 Flags; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v15; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR PackageSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v17; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR AppIdSize; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v21; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR AppId[72]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v24[72]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR PackageFullName[128]; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR SourceString[128]; // [rsp+2E0h] [rbp+1E0h] BYREF

  Flags = 0LL;
  v4 = 0LL;
  PackageSize = 256LL;
  *a3 = 0;
  v15 = 256LL;
  v14 = 0LL;
  AppIdSize = 132LL;
  v17 = 132LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v21 = 0LL;
  v6 = RtlQueryPackageIdentityEx(a1, PackageFullName, &PackageSize, AppId, &AppIdSize, v11, &Flags);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0LL;
    v7 = 0;
  }
  else
  {
    if ( v6 < 0 )
      return v7;
    v8 = Flags;
  }
  if ( !v8 )
    *a3 = 1;
  if ( !*a3 )
  {
    v10 = RtlQueryPackageIdentityEx(a2, SourceString, &v15, v24, &v17, v12, &v14);
    v7 = v10;
    if ( v10 == -1073741275 || v10 == -2147483643 )
    {
      v7 = 0;
    }
    else
    {
      if ( v10 < 0 )
        return v7;
      v4 = v14;
    }
  }
  if ( v4 )
  {
    if ( (((unsigned int)v4 ^ (unsigned int)v8) & 0xFFFFFFDF) != 0
      || PackageSize != v15
      || AppIdSize != v17
      || (RtlInitUnicodeString(&DestinationString, PackageFullName),
          RtlInitUnicodeString(&String1, AppId),
          RtlInitUnicodeString(&String2, SourceString),
          RtlInitUnicodeString(&v21, v24),
          !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
      || !RtlEqualUnicodeString(&String1, &v21, 1u) )
    {
      *a3 = 1;
    }
  }
  return v7;
}
