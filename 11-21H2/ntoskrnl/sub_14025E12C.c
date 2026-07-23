/*
 * XREFs of sub_14025E12C @ 0x14025E12C
 * Callers:
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

char __fastcall sub_14025E12C(HANDLE TokenHandle)
{
  bool v2; // di
  KPROCESSOR_MODE v3; // dl
  void *v5; // rsi
  char v6; // [rsp+48h] [rbp-C0h] BYREF
  int v7; // [rsp+4Ch] [rbp-BCh] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v10; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v11; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v13[2]; // [rsp+88h] [rbp-80h] BYREF
  WCHAR PackageFullName[128]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v15[128]; // [rsp+198h] [rbp+90h] BYREF

  PkgClaim = 0LL;
  v7 = 0;
  v10 = 256LL;
  PackageSize = 256LL;
  v2 = 0;
  v6 = 0;
  v11 = 0LL;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(stru_140D3CA10, v3) )
    return 1;
  if ( RtlQueryPackageClaims(TokenHandle, PackageFullName, &PackageSize, 0LL, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v5 = (void *)sub_1407B3B60(KeGetCurrentThread(), 1953654867LL, &v7, &v6, v13, 0LL);
    if ( RtlQueryPackageClaims(v5, v15, &v10, 0LL, 0LL, 0LL, &PkgClaim, 0LL) >= 0 && (PkgClaim.Flags & 4) != 0 )
    {
      String1_8.Length = PackageSize - 2;
      String1_8.MaximumLength = PackageSize - 2;
      String1_8.Buffer = PackageFullName;
      v11.Length = v10 - 2;
      v11.MaximumLength = v10 - 2;
      v11.Buffer = v15;
      v2 = RtlCompareUnicodeString(&String1_8, &v11, 0) == 0;
    }
    if ( v5 )
    {
      if ( v7 == 1 )
        sub_1402F89B0(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL, v5, 1953654867LL);
      else
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
    }
  }
  return v2;
}
