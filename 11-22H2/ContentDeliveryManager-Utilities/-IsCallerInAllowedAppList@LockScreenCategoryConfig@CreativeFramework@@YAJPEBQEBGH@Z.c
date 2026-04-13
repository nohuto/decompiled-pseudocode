/*
 * XREFs of ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180037E94
 * Callers:
 *     ??$MakeAndInitialize@VContextualSuggestionsManager@ContentManagement@@UIContextualSuggestionsManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualSuggestionsManager@ContentManagement@@@Z @ 0x180026AEC (--$MakeAndInitialize@VContextualSuggestionsManager@ContentManagement@@UIContextualSuggestionsMan.c)
 *     ??$MakeAndInitialize@VIdentityManager@ContentManagement@@UIIdentityManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIIdentityManager@ContentManagement@@@Z @ 0x18002716C (--$MakeAndInitialize@VIdentityManager@ContentManagement@@UIIdentityManager@2@$$V@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VThumbnailCacheHelper@ContentManagement@@UIThumbnailCacheHelper@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailCacheHelper@ContentManagement@@@Z @ 0x1800277B8 (--$MakeAndInitialize@VThumbnailCacheHelper@ContentManagement@@UIThumbnailCacheHelper@2@$$V@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003F270 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042CB4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180079620 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x18007968C (-GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180079A90 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180079BF8 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
        CreativeFramework::LockScreenCategoryConfig *this,
        const unsigned __int16 *const *a2)
{
  int CallingProcessHandle; // ebx
  bool *v3; // r8
  char *v4; // rcx
  unsigned __int16 **v6; // rdx
  int CallingProcessPackageSidString; // eax
  const WCHAR **v8; // rbx
  char *v9; // rdi
  const WCHAR *v10; // r8
  __int64 v11; // rax
  const WCHAR *v12; // rcx
  unsigned __int16 **v13; // rdx
  int bIgnoreCase; // [rsp+20h] [rbp-40h]
  LPCWCH lpString1; // [rsp+30h] [rbp-30h] BYREF
  int cchCount1[2]; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  char *v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HANDLE hObject; // [rsp+90h] [rbp+30h] BYREF
  int v23; // [rsp+98h] [rbp+38h] BYREF

  v23 = (int)a2;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  if ( CallingProcessHandle >= 0 )
    CallingProcessHandle = CallerIdentity::IsProcessAppContainer((CallerIdentity *)hObject, &v23, v3);
  v4 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  if ( CallingProcessHandle >= 0 )
  {
    if ( !(_BYTE)v23 )
      return 0LL;
    lpString1 = 0LL;
    *(_QWORD *)cchCount1 = 0LL;
    v17 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString1);
    *(_QWORD *)cchCount1 = -1LL;
    v17 = -1LL;
    CallingProcessPackageSidString = CallerIdentity::GetCallingProcessPackageSidString((LPWSTR *)&lpString1, v6);
    CallingProcessHandle = CallingProcessPackageSidString;
    if ( CallingProcessPackageSidString >= 0 )
    {
      v8 = (const WCHAR **)&off_1800EBED0;
      v9 = (char *)word_1801070C4;
      while ( (__int64)v8 < (__int64)&off_1800EBED8 )
      {
        v10 = word_1801070C4;
        if ( *v8 )
          v10 = *v8;
        LODWORD(v11) = cchCount1[0];
        if ( *(_QWORD *)cchCount1 == -1LL )
        {
          if ( lpString1 )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( lpString1[v11] );
          }
          else
          {
            LODWORD(v11) = 0;
          }
        }
        v12 = word_1801070C4;
        if ( lpString1 )
          v12 = lpString1;
        if ( CompareStringOrdinal(v12, v11, v10, -(*v8 != 0LL), 1) == 2 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString1);
          return 0LL;
        }
        ++v8;
      }
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v18);
      v19 = -1LL;
      v20 = -1LL;
      CallerIdentity::GetCallingProcessPackageFullName((CallerIdentity *)&v18, v13);
      if ( v18 )
        v9 = v18;
      CallingProcessHandle = -2147024891;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
        (const char *)0x80070005LL,
        (int)"%ls",
        v9);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
        (const char *)(unsigned int)CallingProcessPackageSidString,
        bIgnoreCase);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString1);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
      (const char *)(unsigned int)CallingProcessHandle,
      bIgnoreCase);
  }
  return (unsigned int)CallingProcessHandle;
}
