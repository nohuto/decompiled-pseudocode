/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x180745D94 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180069938 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800C29A0 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150B4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1802D08F6 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x1804407E0 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18069A374 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1806A2E8C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1807413A0 (--$As@UIResourceCandidate@@@-$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1807413FC (--$GetAsUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 *     ??4?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180741740 (--4-$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x180741D44 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x180742AF4 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18074408C (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1807442A0 (-HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x180744300 (-HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x180744360 (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1807443C0 (-HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x180744420 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x180744600 (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x180744E98 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1807451B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1807452B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated@@@d.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x180745794 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x18074BB30 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=60
__int64 __fastcall ImmersiveIcons::GetIconData(
        WCHAR *pszItem,
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a3,
        struct ImmersiveIcons::IconData2 *a4)
{
  __int64 *v7; // rbx
  HRESULT v8; // eax
  unsigned int v9; // ebx
  int As; // eax
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r14
  const WCHAR *v14; // rsi
  HSTRING v15; // rdx
  HSTRING v16; // rdx
  unsigned __int16 **v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  HRESULT Instance; // eax
  int PackageFullNameForAppsFolderItem; // eax
  __int64 v22; // rdx
  HSTRING v23; // rbx
  __int64 (__fastcall *v24)(HSTRING, const WCHAR *, LPCWCH, _QWORD, wchar_t **); // rdi
  unsigned __int64 v25; // r8
  HRESULT v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  LPVOID v29; // rbx
  __int64 (__fastcall *v30)(LPVOID, GUID *, _QWORD); // rdi
  int v31; // eax
  __int64 (__fastcall ***v32)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v33)(_QWORD, GUID *, __int64 *); // rdi
  int v34; // eax
  HSTRING v35; // rdx
  HSTRING v36; // rdx
  unsigned __int16 **v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  LPVOID v40; // rbx
  __int64 (__fastcall *v41)(LPVOID, GUID *, struct ImmersiveIcons::LoadIconParams **); // rdi
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // r14d
  int v46; // r12d
  __int64 v47; // rdx
  struct IResourceContext *v48; // r8
  __int64 v49; // r9
  int inited; // eax
  __int64 v51; // rdx
  __int64 v52; // rbx
  int (__fastcall *v53)(__int64, struct ImmersiveIcons::LoadIconParams *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v54; // eax
  HSTRING v55; // rbx
  int (__fastcall *v56)(HSTRING, const wchar_t *, LPCWCH *); // rdi
  __int64 v57; // rax
  const WCHAR *v58; // rcx
  __int64 v59; // rbx
  int (__fastcall *v60)(__int64, struct ImmersiveIcons::LoadIconParams *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rbx
  int (__fastcall *v64)(__int64, const wchar_t *, HSTRING_HEADER *); // rdi
  int ContrastForParams; // eax
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // esi
  int v69; // eax
  __int64 v70; // rbx
  __int64 (__fastcall *v71)(__int64, struct ImmersiveIcons::LoadIconParams *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v72; // eax
  __int64 v73; // rbx
  int (__fastcall *v74)(__int64, const wchar_t *, LPCWCH *); // rdi
  __int64 v75; // rbx
  int (__fastcall *v76)(__int64, const wchar_t *, LPCWCH *); // rdi
  __int64 v77; // rax
  const WCHAR *v78; // rcx
  __int64 v79; // rax
  const WCHAR *v80; // rcx
  __int64 v81; // rbx
  int (__fastcall *v82)(__int64, const wchar_t *, HSTRING_HEADER *); // rdi
  bool v83; // si
  __int64 v84; // rbx
  __int64 (__fastcall *v85)(__int64, wchar_t **); // rdi
  int v86; // eax
  __int64 v87; // rdx
  HSTRING v88; // rbx
  HSTRING_HEADER *v89; // rax
  ShellMRTHelper::Common *v90; // rcx
  int v91; // eax
  __int64 v92; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v94; // r9
  const wchar_t *v95; // rax
  __int64 v96; // rdi
  __int64 v97; // rax
  LPCWCH v98; // rbx
  const WCHAR *v99; // r14
  const WCHAR *v100; // rcx
  __int64 v101; // rdx
  HSTRING_HEADER *v102; // rsi
  const WCHAR *Reserved1; // r8
  __int64 v104; // rax
  const WCHAR *v105; // rcx
  void **ppv; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v109)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-C0h] BYREF
  int cchCount1[2]; // [rsp+48h] [rbp-B8h]
  __int64 v112; // [rsp+50h] [rbp-B0h]
  __int64 v113; // [rsp+58h] [rbp-A8h] BYREF
  struct ImmersiveIcons::LoadIconParams *v114; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+68h] [rbp-98h] BYREF
  HSTRING__ v116[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v117; // [rsp+80h] [rbp-80h]
  __int64 v118; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v119; // [rsp+98h] [rbp-68h] BYREF
  wchar_t *v120; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-58h]
  __int64 v122; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall ***v123)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp-48h] BYREF
  LPCWSTR pszPath; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v125[2]; // [rsp+C8h] [rbp-38h]
  __int64 v126; // [rsp+D0h] [rbp-30h]
  PCWSTR sourceString; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v128[2]; // [rsp+E0h] [rbp-20h]
  __int64 v129; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall ***v130)(_QWORD, GUID *, __int64 *); // [rsp+F0h] [rbp-10h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING v132; // [rsp+110h] [rbp+10h]
  HSTRING_HEADER v133; // [rsp+118h] [rbp+18h] BYREF
  const wchar_t *v134; // [rsp+130h] [rbp+30h]
  const wchar_t *v135; // [rsp+138h] [rbp+38h]
  __int64 v136; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v130 = 0LL;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v130, &v123);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v7);
  v8 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         pszItem,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v115 = 0LL;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v115);
    As = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(&v115, v130, 1u, (__int64)&unk_1808B5020, 4u);
    v9 = As;
    if ( As < 0 )
    {
      v11 = 237LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)As);
LABEL_198:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v115);
      goto LABEL_199;
    }
    *(_OWORD *)&v116[0].unused = PKEY_Tile_Background;
    LODWORD(v117) = 4;
    As = wil::PropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(
           &v115,
           (__int128 *)&v116[0].unused,
           (ULONG *)a3 + 3);
    v9 = As;
    if ( As < 0 )
    {
      v11 = 239LL;
      goto LABEL_7;
    }
    pszPath = 0LL;
    *(_QWORD *)v125 = 0LL;
    v126 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
    *(_QWORD *)v125 = -1LL;
    v126 = -1LL;
    *(_OWORD *)&v116[0].unused = PKEY_Tile_SmallLogoPath;
    LODWORD(v117) = 2;
    v12 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
            &v115,
            (__int128 *)&v116[0].unused,
            (unsigned __int16 **)&pszPath);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF2,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v12);
LABEL_197:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
      goto LABEL_198;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v13 = *(_QWORD *)v125;
    v14 = pszPath;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, pszPath, v125[0]);
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0LL;
    if ( ShellMRTHelper::Common::HasFileUriScheme((ShellMRTHelper::Common *)v132, v15) )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v120);
      v121 = -1LL;
      v122 = -1LL;
      v18 = TileUtils::ConvertFileUriToFilePath(v14, (const unsigned __int16 *)&v120, v17);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 260LL;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v18);
        goto LABEL_196;
      }
      goto LABEL_23;
    }
    if ( ShellMRTHelper::Common::HasMsAppDataUriScheme((ShellMRTHelper::Common *)v132, v16) )
    {
      string = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
      Instance = CoCreateInstance(
                   &GUID_a8ca4495_65ab_4333_9ff9_4feb6fbf5169,
                   0LL,
                   1u,
                   &GUID_428bb582_2a87_4ea0_b529_30067cc4a4d7,
                   (LPVOID *)&string);
      v9 = Instance;
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x109,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)Instance);
LABEL_21:
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
LABEL_196:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v120);
        v132 = 0LL;
        goto LABEL_197;
      }
      lpString1 = 0LL;
      *(_QWORD *)cchCount1 = 0LL;
      v112 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      *(_QWORD *)cchCount1 = -1LL;
      v112 = -1LL;
      PackageFullNameForAppsFolderItem = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
      v9 = PackageFullNameForAppsFolderItem;
      if ( PackageFullNameForAppsFolderItem < 0 )
      {
        v22 = 268LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)PackageFullNameForAppsFolderItem);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        goto LABEL_21;
      }
      v23 = string;
      v24 = *(__int64 (__fastcall **)(HSTRING, const WCHAR *, LPCWCH, _QWORD, wchar_t **))(*(_QWORD *)string + 48LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v120);
      v121 = -1LL;
      v122 = -1LL;
      PackageFullNameForAppsFolderItem = v24(v23, v14, lpString1, 0LL, &v120);
      v9 = PackageFullNameForAppsFolderItem;
      if ( PackageFullNameForAppsFolderItem < 0 )
      {
        v22 = 270LL;
        goto LABEL_20;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
    }
    else if ( !PathIsRelativeW(v14) )
    {
      v25 = v13;
      if ( v13 == -1LL )
      {
        if ( v14 )
        {
          v25 = -1LL;
          do
            ++v25;
          while ( v14[v25] );
        }
        else
        {
          v25 = 0LL;
        }
      }
      v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v120,
              v14,
              v25);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 276LL;
        goto LABEL_36;
      }
    }
LABEL_23:
    if ( v120 && *v120 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v120);
      v18 = StringCchCopyW((wchar_t *)a3 + 8, 260LL, v120);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 452LL;
        goto LABEL_36;
      }
      *(_QWORD *)a3 = 0LL;
      *((_BYTE *)a3 + 8) = 0;
LABEL_158:
      if ( !*(_DWORD *)a3 )
      {
        lpString1 = 0LL;
        *(_QWORD *)cchCount1 = 0LL;
        v112 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        *(_QWORD *)cchCount1 = -1LL;
        v112 = -1LL;
        *(_OWORD *)&v116[0].unused = PKEY_AppUserModel_ParentID;
        LODWORD(v117) = 19;
        if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
                    &v115,
                    (__int128 *)&v116[0].unused,
                    (unsigned __int16 **)&lpString1) >= 0 )
        {
          v96 = *(_QWORD *)cchCount1;
          LODWORD(v97) = cchCount1[0];
          v98 = lpString1;
          if ( *(_QWORD *)cchCount1 == -1LL )
          {
            if ( lpString1 )
            {
              v97 = -1LL;
              do
                ++v97;
              while ( lpString1[v97] );
            }
            else
            {
              LODWORD(v97) = 0;
            }
          }
          v99 = &LocaleName;
          v100 = &LocaleName;
          if ( lpString1 )
            v100 = lpString1;
          if ( CompareStringOrdinal(v100, v97, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) != 2 )
          {
            LOBYTE(v101) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::GetImpl'::`2'::impl,
              v101);
            v133.Reserved.Reserved1 = L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App";
            *(_QWORD *)&v133.Reserved.Reserved2[8] = L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App";
            *(_QWORD *)&v133.Reserved.Reserved2[16] = L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App";
            v134 = L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App";
            v135 = L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App";
            v102 = &v133;
            while ( 1 )
            {
              Reserved1 = &LocaleName;
              if ( v102->Reserved.Reserved1 )
                Reserved1 = (const WCHAR *)v102->Reserved.Reserved1;
              LODWORD(v104) = v96;
              if ( v96 == -1 )
              {
                if ( v98 )
                {
                  v104 = -1LL;
                  do
                    ++v104;
                  while ( v98[v104] );
                }
                else
                {
                  LODWORD(v104) = 0;
                }
              }
              v105 = &LocaleName;
              if ( v98 )
                v105 = v98;
              if ( CompareStringOrdinal(v105, v104, Reserved1, -(v102->Reserved.Reserved1 != 0LL), 1) == 2 )
                break;
              v102 = (HSTRING_HEADER *)((char *)v102 + 8);
              if ( v102 == (HSTRING_HEADER *)&v136 )
                goto LABEL_184;
            }
          }
          *(_DWORD *)a3 = 3;
LABEL_184:
          LOBYTE(v101) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated>::GetImpl'::`2'::impl,
            v101);
          if ( v96 == -1 )
          {
            if ( v98 )
            {
              v96 = -1LL;
              do
                ++v96;
              while ( v98[v96] );
            }
            else
            {
              LODWORD(v96) = 0;
            }
          }
          if ( v98 )
            v99 = v98;
          if ( CompareStringOrdinal(v99, v96, L"Microsoft.YourPhone_8wekyb3d8bbwe!App", -1, 1) == 2 )
            *(_DWORD *)a3 = 3;
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      }
      v9 = 0;
      goto LABEL_196;
    }
    v119 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
    v26 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            &v119);
    v9 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v26);
LABEL_155:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
      goto LABEL_196;
    }
    sourceString = 0LL;
    *(_QWORD *)v128 = 0LL;
    v129 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    *(_QWORD *)v128 = -1LL;
    v129 = -1LL;
    v27 = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
    v9 = v27;
    if ( v27 < 0 )
    {
      v28 = 288LL;
LABEL_44:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v27);
LABEL_154:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
      goto LABEL_155;
    }
    v27 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v119 + 40LL))(v119, sourceString);
    v9 = v27;
    if ( v27 < 0 )
    {
      v28 = 290LL;
      goto LABEL_44;
    }
    v123 = 0LL;
    v29 = v119;
    v30 = *(__int64 (__fastcall **)(LPVOID, GUID *, _QWORD))(*(_QWORD *)v119 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v123);
    v31 = v30(v29, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, &v123);
    v9 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v31);
LABEL_153:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v123);
      goto LABEL_154;
    }
    v118 = 0LL;
    v32 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v123;
    v33 = **v123;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v118);
    v34 = v33(v32, &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20, &v118);
    v9 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v34);
LABEL_152:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v118);
      goto LABEL_153;
    }
    memset(v116, 0, sizeof(v116));
    v117 = 0LL;
    if ( ShellMRTHelper::Common::HasMsAppXUriScheme((ShellMRTHelper::Common *)v132, v35) )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v116);
      *(_QWORD *)&v116[2].unused = -1LL;
      v117 = -1LL;
      v38 = ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
              (ShellMRTHelper::Common *)v132,
              (struct Windows::Foundation::IUriRuntimeClass *)v116,
              v37);
      v9 = v38;
      if ( v38 < 0 )
      {
        v39 = 303LL;
LABEL_64:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v39,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v38);
LABEL_151:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v116);
        goto LABEL_152;
      }
    }
    else if ( ShellMRTHelper::Common::HasMsResourceUriScheme((ShellMRTHelper::Common *)v132, v36) )
    {
      if ( v13 == -1LL )
      {
        if ( v14 )
        {
          do
            ++v13;
          while ( v14[v13] );
        }
        else
        {
          v13 = 0LL;
        }
      }
      v38 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)v116,
              v14,
              v13);
      v9 = v38;
      if ( v38 < 0 )
      {
        v39 = 310LL;
        goto LABEL_64;
      }
    }
    else
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
      v38 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)v116,
              L"Files\\",
              *(_QWORD *)v125 + 7LL);
      v9 = v38;
      if ( v38 < 0 )
      {
        v39 = 317LL;
        goto LABEL_64;
      }
      v38 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
              (__int64)v116,
              &pszPath);
      v9 = v38;
      if ( v38 < 0 )
      {
        v39 = 318LL;
        goto LABEL_64;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(v116);
    }
    v114 = 0LL;
    v40 = v119;
    v41 = *(__int64 (__fastcall **)(LPVOID, GUID *, struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v119 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v114);
    v42 = v41(v40, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, &v114);
    v9 = v42;
    if ( v42 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v42);
LABEL_150:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v114);
      goto LABEL_151;
    }
    v113 = 0LL;
    v45 = 0;
    v46 = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
      1u,
      v43,
      v44);
    if ( *((_DWORD *)this + 11) == 1 && *((_DWORD *)this + 10) != 1 && *((_DWORD *)this + 9) != 2 )
    {
      inited = ImmersiveIcons::InitResourceContextForLightTheme(this, v114, v48);
      v9 = inited;
      if ( inited < 0 )
      {
        v51 = 345LL;
LABEL_92:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v51,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)inited);
LABEL_149:
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v113);
        goto LABEL_150;
      }
      v109 = 0LL;
      v52 = v118;
      v53 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v118 + 48LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v109);
      if ( v53(v52, v114, *(_QWORD *)&v116[0].unused, &v109) >= 0 )
      {
        string = 0LL;
        v54 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v109, (__int64 *)&string);
        v9 = v54;
        if ( v54 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x15F,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v54);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
LABEL_107:
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v109);
          goto LABEL_149;
        }
        lpString1 = 0LL;
        *(_QWORD *)cchCount1 = 0LL;
        v112 = 0LL;
        v55 = string;
        v56 = *(int (__fastcall **)(HSTRING, const wchar_t *, LPCWCH *))(*(_QWORD *)string + 64LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        *(_QWORD *)cchCount1 = -1LL;
        v112 = -1LL;
        if ( v56(v55, L"AlternateForm", &lpString1) >= 0 )
        {
          LODWORD(v57) = cchCount1[0];
          if ( *(_QWORD *)cchCount1 == -1LL )
          {
            if ( lpString1 )
            {
              v57 = -1LL;
              do
                ++v57;
              while ( lpString1[v57] );
            }
            else
            {
              LODWORD(v57) = 0;
            }
          }
          v58 = &LocaleName;
          if ( lpString1 )
            v58 = lpString1;
          if ( CompareStringOrdinal(v58, v57, L"lightunplated", -1, 1) == 2 )
          {
            v45 = 2;
            v46 = 1;
            Microsoft::WRL::ComPtr<IResourceCandidate>::operator=(&v113, (__int64 *)&string);
          }
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v109);
    }
    if ( v113 )
      goto LABEL_98;
    inited = ImmersiveIcons::InitResourceContextForAllThemes(this, v114, v48);
    v9 = inited;
    if ( inited < 0 )
    {
      v51 = 369LL;
      goto LABEL_92;
    }
    v109 = 0LL;
    v59 = v118;
    v60 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v118 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v109);
    if ( v60(v59, v114, *(_QWORD *)&v116[0].unused, &v109) >= 0 )
    {
      v61 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v109, &v113);
      v9 = v61;
      if ( v61 < 0 )
      {
        v62 = 373LL;
LABEL_106:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v62,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v61);
        goto LABEL_107;
      }
      memset(&v133, 0, sizeof(v133));
      v63 = v113;
      v64 = *(int (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v113 + 64LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v133);
      *(_QWORD *)&v133.Reserved.Reserved2[8] = -1LL;
      *(_QWORD *)&v133.Reserved.Reserved2[16] = -1LL;
      v45 = (v64(v63, L"AlternateForm", &v133) >= 0) + 1;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v133);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v109);
    if ( v113 )
    {
LABEL_98:
      ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)this, v47, (__int64)v48, v49);
      v68 = ContrastForParams;
      if ( v45 == 1 && !ContrastForParams )
      {
        v109 = 0LL;
        v69 = (*(__int64 (__fastcall **)(struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)v114 + 112LL))(
                v114,
                *((unsigned __int16 *)this + 8));
        if ( v69 >= 0 )
        {
          v70 = v118;
          v71 = *(__int64 (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v118 + 48LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v109);
          v72 = v71(v70, v114, *(_QWORD *)&v116[0].unused, &v109);
          if ( v72 >= 0 )
          {
            v61 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v109, &v113);
            v9 = v61;
            if ( v61 < 0 )
            {
              v62 = 391LL;
              goto LABEL_106;
            }
            lpString1 = 0LL;
            *(_QWORD *)cchCount1 = 0LL;
            v112 = 0LL;
            v73 = v113;
            v74 = *(int (__fastcall **)(__int64, const wchar_t *, LPCWCH *))(*(_QWORD *)v113 + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
            *(_QWORD *)cchCount1 = -1LL;
            v112 = -1LL;
            v45 = (v74(v73, L"AlternateForm", &lpString1) >= 0) + 1;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x185,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v72);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x184,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v69);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v109);
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
        1u,
        v66,
        v67);
      lpString1 = 0LL;
      *(_QWORD *)cchCount1 = 0LL;
      v112 = 0LL;
      v75 = v113;
      v76 = *(int (__fastcall **)(__int64, const wchar_t *, LPCWCH *))(*(_QWORD *)v113 + 64LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      *(_QWORD *)cchCount1 = -1LL;
      v112 = -1LL;
      if ( v76(v75, L"Theme", &lpString1) >= 0 )
      {
        LODWORD(v77) = cchCount1[0];
        if ( *(_QWORD *)cchCount1 == -1LL )
        {
          if ( lpString1 )
          {
            v77 = -1LL;
            do
              ++v77;
            while ( lpString1[v77] );
          }
          else
          {
            LODWORD(v77) = 0;
          }
        }
        v78 = &LocaleName;
        if ( lpString1 )
          v78 = lpString1;
        if ( CompareStringOrdinal(v78, v77, L"dark", -1, 1) == 2 )
        {
          v46 = 2;
        }
        else
        {
          LODWORD(v79) = cchCount1[0];
          if ( *(_QWORD *)cchCount1 == -1LL )
          {
            if ( lpString1 )
            {
              v79 = -1LL;
              do
                ++v79;
              while ( lpString1[v79] );
            }
            else
            {
              LODWORD(v79) = 0;
            }
          }
          v80 = &LocaleName;
          if ( lpString1 )
            v80 = lpString1;
          if ( CompareStringOrdinal(v80, v79, L"light", -1, 1) == 2 )
            v46 = 1;
        }
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      memset(&v133, 0, sizeof(v133));
      v83 = 0;
      if ( v68 )
      {
        v81 = v113;
        v82 = *(int (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v113 + 64LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v133);
        *(_QWORD *)&v133.Reserved.Reserved2[8] = -1LL;
        *(_QWORD *)&v133.Reserved.Reserved2[16] = -1LL;
        if ( v82(v81, L"Contrast", &v133) >= 0 )
          v83 = 1;
      }
      v84 = v113;
      v85 = *(__int64 (__fastcall **)(__int64, wchar_t **))(*(_QWORD *)v113 + 32LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v120);
      v121 = -1LL;
      v122 = -1LL;
      v86 = v85(v84, &v120);
      v9 = v86;
      if ( v86 < 0 )
      {
        v87 = 417LL;
LABEL_139:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v87,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v86);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v133);
        goto LABEL_149;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v120);
      v86 = StringCchCopyW((wchar_t *)a3 + 8, 260LL, v120);
      v9 = v86;
      if ( v86 < 0 )
      {
        v87 = 421LL;
        goto LABEL_139;
      }
      *(_DWORD *)a3 = v45;
      *((_DWORD *)a3 + 1) = v46;
      *((_BYTE *)a3 + 8) = v83;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v133);
LABEL_157:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v113);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v114);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v116);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v118);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v123);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
      goto LABEL_158;
    }
    WindowsDeleteString(0LL);
    string = 0LL;
    v88 = v132;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
    v89 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v133, sourceString, v128[0]);
    v91 = ShellMRTHelper::Common::TryFallbackToFilePath(
            v90,
            (HSTRING)v89[1].Reserved.Reserved1,
            v88,
            (HSTRING)&string,
            (HSTRING *)ppv);
    v9 = v91;
    if ( v91 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( !PathFileExistsW(StringRawBuffer) )
      {
        v9 = -2147024893;
        v94 = 2147942403LL;
        v92 = 436LL;
LABEL_148:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v92,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)v94);
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_149;
      }
      v95 = WindowsGetStringRawBuffer(string, 0LL);
      v91 = StringCchCopyW((wchar_t *)a3 + 8, 260LL, v95);
      v9 = v91;
      if ( v91 >= 0 )
      {
        *(_QWORD *)a3 = 0LL;
        *((_BYTE *)a3 + 8) = 0;
        WindowsDeleteString(string);
        goto LABEL_157;
      }
      v92 = 437LL;
    }
    else
    {
      v92 = 435LL;
    }
    v94 = (unsigned int)v91;
    goto LABEL_148;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDE,
    (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v8);
LABEL_199:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v130);
  return v9;
}
