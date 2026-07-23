/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x140225E4C
 * Callers:
 *     SeSubProcessToken @ 0x1406B722C (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224DF8 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlQueryPackageClaims @ 0x140226150 (RtlQueryPackageClaims.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036EEA8 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14041DCB0 (ZwQueryLicenseValue.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405B8454 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppxImage @ 0x1405B84E0 (SepVerifyDesktopAppxImage.c)
 *     PsReferenceEffectiveToken @ 0x14071D8EC (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(HANDLE TokenHandle, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  bool v8; // si
  NTSTATUS PackageClaims; // eax
  __int64 v10; // r8
  int v11; // ebx
  ULONG Flags; // eax
  void *v13; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-100h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-E0h]
  PGUID DynamicId; // [rsp+28h] [rbp-D8h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-D0h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-C8h]
  _BYTE v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  _PS_PKG_CLAIM v22; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+54h] [rbp-ACh] BYREF
  int Data; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  _PS_PKG_CLAIM v28; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v31; // [rsp+88h] [rbp-78h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  const wchar_t *v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+D0h] [rbp-30h]
  const wchar_t *v39; // [rsp+D8h] [rbp-28h]
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-10h]

  v31 = L"WIN://SYSAPPID";
  AttributesPresent = 0LL;
  v33 = 0LL;
  *a4 = 0;
  v35 = L"WIN://PKG";
  v27[0] = a2;
  v37 = 0LL;
  v22 = 0LL;
  v39 = L"WIN://PKGHOSTID";
  v28 = 0LL;
  v41 = 0LL;
  v21[0] = 0;
  PkgClaim = &v22;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v8 = 0;
  v30 = 1966108;
  v32 = 0LL;
  v34 = 1310738;
  v36 = 0LL;
  v38 = 2097182;
  v40 = 0LL;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v26 = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, AppIdSize, DynamicId, PkgClaim, AttributesPresent);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v11;
    v11 = 0;
  }
  Flags = v22.Flags;
  if ( (v22.Flags & 4) == 0 )
  {
    if ( (v22.Flags & 0x10000) == 0 )
    {
      v13 = (void *)PsReferenceEffectiveToken(
                      (unsigned int)KeGetCurrentThread(),
                      1953654867,
                      (unsigned int)&v26,
                      (unsigned int)v21,
                      (__int64)v27,
                      0LL);
      v11 = RtlQueryPackageClaims(v13, 0LL, 0LL, 0LL, 0LL, 0LL, &v28, 0LL);
      if ( v11 < 0 )
      {
        if ( v11 != -1073741275 )
        {
LABEL_11:
          if ( v13 )
          {
            if ( v26 == 1 )
              ObFastDereferenceObject(
                &KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
                v13,
                1953654867LL);
            else
              ObfDereferenceObjectWithTag(v13, 0x74726853u);
          }
          return (unsigned int)v11;
        }
        v11 = 0;
      }
      if ( (v28.Flags & 0x10004) != 0 )
        *a4 = 1;
      goto LABEL_11;
    }
LABEL_21:
    *a5 = 1;
    return (unsigned int)v11;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v22.Flags & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v22, 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    Flags = v22.Flags;
  }
  if ( (a3 & 6) != 0 || (Flags & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (Flags & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v22, v10);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(TokenHandle) )
      goto LABEL_21;
    Flags = v22.Flags;
  }
  if ( LOBYTE(v22.Origin) == 3 && (Flags & 0x22000) == 0 )
  {
    v8 = 1;
    if ( ZwQueryLicenseValue(&stru_140C092F8, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Type == 4
      && ResultDataSize == 4 )
    {
      v8 = Data != 1;
    }
  }
  LOBYTE(v10) = v8;
  v11 = SepVerifyDesktopAppxImage(v27[0], TokenHandle, v10, v21);
  if ( v11 >= 0 )
  {
    if ( !v21[0] )
    {
      DWORD2(v32) = 0;
      LOWORD(v32) = 3;
      DWORD2(v36) = 0;
      DWORD2(v40) = 0;
      v28.Flags = 3;
      LOWORD(v36) = 2;
      LOWORD(v40) = 2;
      v28.Origin = 3;
      v29 = 3;
      v27[1] = &v30;
      CurrentThread = KeGetCurrentThread();
      v27[0] = 0x300000001LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)TokenHandle + 6), 1u);
      _InterlockedOr(v16, 0);
      v11 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)TokenHandle + 97), (int *)&v28, (__int64)v27);
      *((_QWORD *)TokenHandle + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v16, 0);
      ExReleaseResourceLite(*((PERESOURCE *)TokenHandle + 6));
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      *a4 = 1;
      return (unsigned int)v11;
    }
    goto LABEL_21;
  }
  return (unsigned int)v11;
}
