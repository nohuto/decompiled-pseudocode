/*
 * XREFs of sub_140203EE0 @ 0x140203EE0
 * Callers:
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_14025E12C @ 0x14025E12C (sub_14025E12C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403761D8 @ 0x1403761D8 (sub_1403761D8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     sub_1405F4338 @ 0x1405F4338 (sub_1405F4338.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

__int64 __fastcall sub_140203EE0(PERESOURCE *TokenHandle, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  bool v8; // r14
  NTSTATUS PackageClaims; // eax
  NTSTATUS v10; // ebx
  ULONG Flags; // eax
  void *v12; // rsi
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-100h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-E0h]
  PGUID DynamicId; // [rsp+28h] [rbp-D8h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-D0h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-C8h]
  char v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[7]; // [rsp+41h] [rbp-BFh] BYREF
  _PS_PKG_CLAIM v23; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+54h] [rbp-ACh] BYREF
  int Data; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  _PS_PKG_CLAIM v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v32; // [rsp+88h] [rbp-78h]
  __int128 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  const wchar_t *v36; // [rsp+B0h] [rbp-50h]
  __int128 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+D0h] [rbp-30h]
  const wchar_t *v40; // [rsp+D8h] [rbp-28h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-10h]

  v32 = L"WIN://SYSAPPID";
  AttributesPresent = 0LL;
  v34 = 0LL;
  *a4 = 0;
  v36 = L"WIN://PKG";
  v28[0] = a2;
  v38 = 0LL;
  v23 = 0LL;
  v40 = L"WIN://PKGHOSTID";
  v29 = 0LL;
  v42 = 0LL;
  v21 = 0;
  PkgClaim = &v23;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v8 = 0;
  v31 = 1966108;
  v33 = 0LL;
  v35 = 1310738;
  v37 = 0LL;
  v39 = 2097182;
  v41 = 0LL;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v27 = 0;
  v22[0] = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, AppIdSize, DynamicId, PkgClaim, AttributesPresent);
  v10 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v10;
    v10 = 0;
  }
  Flags = v23.Flags;
  if ( (v23.Flags & 4) == 0 )
  {
    if ( (v23.Flags & 0x10000) == 0 )
    {
      v12 = (void *)sub_1407B3B60(KeGetCurrentThread(), 1953654867LL, &v27, v22, v28, 0LL);
      v10 = RtlQueryPackageClaims(v12, 0LL, 0LL, 0LL, 0LL, 0LL, &v29, 0LL);
      if ( v10 < 0 )
      {
        if ( v10 != -1073741275 )
        {
LABEL_11:
          if ( v12 )
          {
            if ( v27 == 1 )
              sub_1402F89B0(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL, v12, 1953654867LL);
            else
              ObfDereferenceObjectWithTag(v12, 0x74726853u);
          }
          return (unsigned int)v10;
        }
        v10 = 0;
      }
      if ( (v29.Flags & 0x10004) != 0 )
        *a4 = 1;
      goto LABEL_11;
    }
LABEL_21:
    *a5 = 1;
    return (unsigned int)v10;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v23.Flags & 0x20) != 0 )
  {
    v10 = sub_1405F4338(TokenHandle, &v23, 0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    Flags = v23.Flags;
  }
  v14 = 2LL;
  if ( (a3 & 6) != 0 || (Flags & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (Flags & 0x20) == 0 )
    {
      LOBYTE(v14) = 1;
      v10 = sub_1405F4338(TokenHandle, &v23, v14);
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    if ( (unsigned __int8)sub_14025E12C(TokenHandle) )
      goto LABEL_21;
    Flags = v23.Flags;
  }
  if ( LOBYTE(v23.Origin) == 3 && (Flags & 0x22000) == 0 )
  {
    v8 = 1;
    if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0 && Type == 4 && ResultDataSize == 4 )
      v8 = Data != 1;
  }
  LOBYTE(v14) = v8;
  v10 = sub_1403761D8(v28[0], TokenHandle, v14, &v21);
  if ( v10 >= 0 )
  {
    if ( !v21 )
    {
      DWORD2(v33) = 0;
      LOWORD(v33) = 3;
      v29.Flags = 3;
      v29.Origin = 3;
      v30 = 3;
      LOWORD(v37) = 2;
      DWORD2(v37) = 0;
      LOWORD(v41) = 2;
      DWORD2(v41) = 0;
      v28[1] = &v31;
      CurrentThread = KeGetCurrentThread();
      v28[0] = 0x300000001LL;
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite(TokenHandle[6], 1u);
      _InterlockedOr(v16, 0);
      v10 = sub_140204870(TokenHandle[97], &v29, v28);
      TokenHandle[7] = (PERESOURCE)_InterlockedIncrement64(&qword_140C0DA70);
      _InterlockedOr(v16, 0);
      ExReleaseResourceLite(TokenHandle[6]);
      sub_1402F9540(KeGetCurrentThread());
      *a4 = 1;
      return (unsigned int)v10;
    }
    goto LABEL_21;
  }
  return (unsigned int)v10;
}
