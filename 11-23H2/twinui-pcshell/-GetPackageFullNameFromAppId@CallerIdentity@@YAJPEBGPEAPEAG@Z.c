/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800C0B90
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000DE50 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180039290 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x1800C0768 (-GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z.c)
 *     ?IsLegacyApp@@YA_NPEBG@Z @ 0x1801934C0 (-IsLegacyApp@@YA_NPEBG@Z.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x18048D490 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x18059DBF0 (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18074408C (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800C0DA0 (StringCopyWorkerW.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800C3650 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall CallerIdentity::GetPackageFullNameFromAppId(
        CallerIdentity *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  int v3; // esi
  __int64 v4; // r9
  __int64 v6; // r8
  wchar_t *v7; // rax
  wchar_t v8; // cx
  wchar_t *v9; // rax
  size_t *v10; // r8
  bool v11; // sf
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int16 *v14; // rax
  int result; // eax
  UINT32 *bufferLength; // [rsp+20h] [rbp-2E8h]
  unsigned __int16 **bufferLengtha; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 *buffer; // [rsp+28h] [rbp-2E0h]
  unsigned int packageProperties; // [rsp+30h] [rbp-2D8h]
  UINT32 count; // [rsp+40h] [rbp-2C8h] BYREF
  UINT32 v21; // [rsp+44h] [rbp-2C4h] BYREF
  PWSTR packageFullNames; // [rsp+48h] [rbp-2C0h] BYREF
  wchar_t pszDest[72]; // [rsp+50h] [rbp-2B8h] BYREF
  wchar_t Str[136]; // [rsp+E0h] [rbp-228h] BYREF
  WCHAR v25[128]; // [rsp+1F0h] [rbp-118h] BYREF

  v3 = 0;
  v21 = 128;
  *(_QWORD *)a2 = 0LL;
  packageFullNames = 0LL;
  v4 = this - (CallerIdentity *)Str;
  count = 1;
  pszDest[0] = 0;
  v6 = 130LL;
  v7 = Str;
  while ( v6 != -2147483516 )
  {
    v8 = *(wchar_t *)((char *)v7 + v4);
    if ( !v8 )
      break;
    *v7++ = v8;
    if ( !--v6 )
      return -2147024809;
  }
  *v7 = 0;
  v9 = wcsrchr(Str, 0x21u);
  if ( Str[0] == 33 || !v9 || !v9[1] )
    return -2147024809;
  *v9 = 0;
  result = StringCopyWorkerW(pszDest, 0x41uLL, v10, Str, (size_t)bufferLength);
  if ( result >= 0 )
  {
    result = FindPackagesByPackageFamily(pszDest, 0x10u, &count, &packageFullNames, &v21, v25, 0LL);
    v11 = result < 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0x80070000;
      v11 = result < 0;
    }
    if ( !v11 )
    {
      if ( count == 1 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v25[v12] );
        v13 = v12 + 1;
        *(_QWORD *)a2 = 0LL;
        if ( v12 + 1 < v12 )
          return -2147024362;
        *(_QWORD *)a2 = 0LL;
        if ( !is_mul_ok(v13, 2uLL) )
          return -2147024362;
        v14 = (unsigned __int16 *)CoTaskMemAlloc(2 * v13);
        *(_QWORD *)a2 = v14;
        if ( !v14 )
          return -2147024882;
        StringCchCopyNExW(v14, v12 + 1, v25, v12, bufferLengtha, buffer, packageProperties);
        return v3;
      }
      else
      {
        return -2147221165;
      }
    }
  }
  return result;
}
