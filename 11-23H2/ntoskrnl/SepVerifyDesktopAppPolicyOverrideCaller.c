/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036EEA8
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225E4C (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140226150 (RtlQueryPackageClaims.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 *     PsReferenceEffectiveToken @ 0x14071D8EC (PsReferenceEffectiveToken.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(HANDLE TokenHandle)
{
  bool v2; // di
  KPROCESSOR_MODE PreviousMode; // dl
  void *v5; // rsi
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v10; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v12[2]; // [rsp+88h] [rbp-80h] BYREF
  WCHAR PackageFullName[128]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v14[128]; // [rsp+198h] [rbp+90h] BYREF

  PkgClaim = 0LL;
  HIDWORD(v6) = 0;
  v9 = 256LL;
  PackageSize = 256LL;
  v2 = 0;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(TokenHandle, PackageFullName, &PackageSize, 0LL, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v5 = (void *)PsReferenceEffectiveToken(
                   (unsigned int)KeGetCurrentThread(),
                   1953654867,
                   (unsigned int)&v6 + 4,
                   (unsigned int)&v6,
                   (__int64)v12,
                   0LL);
    if ( RtlQueryPackageClaims(v5, v14, &v9, 0LL, 0LL, 0LL, &PkgClaim, 0LL) >= 0 && (PkgClaim.Flags & 4) != 0 )
    {
      String1_8.Length = PackageSize - 2;
      String1_8.MaximumLength = PackageSize - 2;
      String1_8.Buffer = PackageFullName;
      v10.Length = v9 - 2;
      v10.MaximumLength = v9 - 2;
      v10.Buffer = v14;
      v2 = RtlCompareUnicodeString(&String1_8, &v10, 0) == 0;
    }
    if ( v5 )
    {
      if ( HIDWORD(v6) == 1 )
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
          (unsigned __int64)v5,
          0x74726853u);
      else
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
    }
  }
  return v2;
}
