/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1805EC294
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x1805EF4F4 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002E6F8 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D54C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x18008F050 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180162C90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18022AC0C (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x18036AA7C (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805EA160 (--$As@UIResourceCandidate@@@-$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1805EA1BC (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ??4?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1805EA508 (--4-$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1805EAD48 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x1805EBD60 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1805ED5E8 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1805ED7FC (-HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1805ED85C (-HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1805ED8BC (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1805ED91C (-HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1805ED97C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x1805EDA50 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x1805EDC30 (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x1805EE558 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805EE978 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805EEA80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated@@@d.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1805EEF34 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1805F5118 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=60
__int64 __fastcall ImmersiveIcons::GetIconData(
        WCHAR *pszItem,
        ImmersiveIcons *a2,
        const struct ImmersiveIcons::LoadIconParams *a3,
        struct ImmersiveIcons::IconData2 *a4)
{
  const struct ImmersiveIcons::LoadIconParams *v4; // r15
  __int64 *v6; // rbx
  HRESULT v7; // eax
  int FailIf; // ebx
  int v9; // eax
  unsigned __int64 v10; // r9
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
  const WCHAR *v25; // r13
  int v26; // eax
  unsigned __int64 v27; // r8
  HRESULT v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  LPVOID v31; // rbx
  __int64 (__fastcall *v32)(LPVOID, GUID *, _QWORD); // rdi
  int v33; // eax
  __int64 (__fastcall ***v34)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v35)(_QWORD, GUID *, __int64 *); // rdi
  int v36; // eax
  HSTRING v37; // rdx
  HSTRING v38; // rdx
  unsigned __int16 **v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  _WORD *v45; // rdx
  unsigned __int64 v46; // r8
  char *v47; // r9
  __int16 v48; // ax
  _WORD *v49; // rax
  LPVOID v50; // rbx
  __int64 (__fastcall *v51)(LPVOID, GUID *, struct ImmersiveIcons::LoadIconParams **); // rdi
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // r14d
  int v56; // r12d
  __int64 v57; // rdx
  struct IResourceContext *v58; // r8
  __int64 v59; // r9
  __int64 v60; // r13
  ImmersiveIcons *v61; // rsi
  int inited; // eax
  __int64 v63; // rdx
  __int64 v64; // rbx
  int (__fastcall *v65)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const struct ImmersiveIcons::LoadIconParams **); // rdi
  int v66; // eax
  HSTRING v67; // rbx
  int (__fastcall *v68)(HSTRING, const wchar_t *, LPCWCH *); // rdi
  __int64 v69; // rax
  const WCHAR *v70; // rcx
  __int64 v71; // rbx
  int (__fastcall *v72)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const struct ImmersiveIcons::LoadIconParams **); // rdi
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rbx
  int (__fastcall *v76)(__int64, const wchar_t *, HSTRING_HEADER *); // rdi
  int ContrastForParams; // eax
  __int64 v78; // r8
  __int64 v79; // r9
  int v80; // esi
  int v81; // eax
  __int64 v82; // rbx
  __int64 (__fastcall *v83)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const struct ImmersiveIcons::LoadIconParams **); // rdi
  int v84; // eax
  __int64 v85; // rbx
  int (__fastcall *v86)(__int64, const wchar_t *, LPCWCH *); // rdi
  __int64 v87; // rbx
  int (__fastcall *v88)(__int64, const wchar_t *, LPCWCH *); // rdi
  __int64 v89; // rax
  const WCHAR *v90; // rcx
  __int64 v91; // rax
  const WCHAR *v92; // rcx
  __int64 v93; // rbx
  int (__fastcall *v94)(__int64, const wchar_t *, HSTRING_HEADER *); // rdi
  bool v95; // si
  __int64 v96; // rbx
  __int64 (__fastcall *v97)(__int64, wchar_t **); // rdi
  int v98; // eax
  __int64 v99; // rdx
  HSTRING v100; // rbx
  HSTRING_HEADER *v101; // rax
  ShellMRTHelper::Common *v102; // rcx
  int v103; // eax
  __int64 v104; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v106; // r9
  const wchar_t *v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rax
  LPCWCH v110; // rbx
  const WCHAR *v111; // rcx
  __int64 v112; // rdx
  HSTRING_HEADER *p_propvarIn; // rsi
  const WCHAR *Reserved1; // r8
  __int64 v115; // rax
  const WCHAR *v116; // rcx
  void **ppv; // [rsp+20h] [rbp-E0h]
  const struct ImmersiveIcons::LoadIconParams *v119; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-C0h] BYREF
  int cchCount1[2]; // [rsp+48h] [rbp-B8h]
  __int64 v123; // [rsp+50h] [rbp-B0h]
  __int64 v124; // [rsp+58h] [rbp-A8h] BYREF
  struct ImmersiveIcons::LoadIconParams *v125; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v126; // [rsp+68h] [rbp-98h] BYREF
  HSTRING__ v127[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v128; // [rsp+80h] [rbp-80h]
  __int64 v129; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v130; // [rsp+98h] [rbp-68h] BYREF
  wchar_t *v131; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v132; // [rsp+A8h] [rbp-58h]
  __int64 v133; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall ***v134)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp-48h] BYREF
  LPCWSTR pszPath; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v136[2]; // [rsp+C8h] [rbp-38h]
  __int64 v137; // [rsp+D0h] [rbp-30h]
  PCWSTR sourceString; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v139[2]; // [rsp+E0h] [rbp-20h]
  __int64 v140; // [rsp+E8h] [rbp-18h]
  __int64 v141; // [rsp+F0h] [rbp-10h] BYREF
  ImmersiveIcons *v142; // [rsp+F8h] [rbp-8h]
  HSTRING_HEADER hstringHeader; // [rsp+100h] [rbp+0h] BYREF
  HSTRING v144; // [rsp+118h] [rbp+18h]
  HSTRING_HEADER propvarIn; // [rsp+120h] [rbp+20h] BYREF
  const wchar_t *v146; // [rsp+138h] [rbp+38h]
  const wchar_t *v147; // [rsp+140h] [rbp+40h]
  __int64 v148; // [rsp+148h] [rbp+48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v4 = a3;
  v119 = a3;
  v142 = a2;
  v141 = 0LL;
  v6 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v141, &v134);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v6);
  v7 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         pszItem,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)v6);
  FailIf = v7;
  if ( v7 >= 0 )
  {
    v126 = 0LL;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v126);
    v9 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(&v126, v141);
    FailIf = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 237LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)v10);
LABEL_219:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v126);
      goto LABEL_220;
    }
    *((_DWORD *)v4 + 3) = 0;
    LOWORD(propvarIn.Reserved.Reserved1) = 0;
    *(_OWORD *)&v127[0].unused = PKEY_Tile_Background;
    LODWORD(v128) = 4;
    FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(&v126, (__int64)v127, &propvarIn);
    if ( FailIf >= 0 )
    {
      *((_DWORD *)v4 + 3) = 0;
      if ( LOWORD(propvarIn.Reserved.Reserved1) )
        FailIf = PropVariantToUInt32(&propvarIn.Reserved.Reserved1, (ULONG *)v4 + 3);
      else
        FailIf = -2147023728;
    }
    PropVariantClear(&propvarIn.Reserved.Reserved1);
    if ( FailIf < 0 )
    {
      v10 = (unsigned int)FailIf;
      v11 = 239LL;
      goto LABEL_11;
    }
    pszPath = 0LL;
    *(_QWORD *)v136 = 0LL;
    v137 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
    *(_QWORD *)v136 = -1LL;
    v137 = -1LL;
    *(_OWORD *)&v127[0].unused = PKEY_Tile_SmallLogoPath;
    LODWORD(v128) = 2;
    v12 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
            &v126,
            (__int128 *)&v127[0].unused,
            &pszPath);
    FailIf = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF2,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v12);
LABEL_218:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
      goto LABEL_219;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v13 = *(_QWORD *)v136;
    v14 = pszPath;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, pszPath, v136[0]);
    v131 = 0LL;
    v132 = 0LL;
    v133 = 0LL;
    if ( ShellMRTHelper::Common::HasFileUriScheme((ShellMRTHelper::Common *)v144, v15) )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v131);
      v132 = -1LL;
      v133 = -1LL;
      v18 = TileUtils::ConvertFileUriToFilePath(v14, (const unsigned __int16 *)&v131, v17);
      FailIf = v18;
      if ( v18 < 0 )
      {
        v19 = 260LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v18);
        goto LABEL_217;
      }
    }
    else
    {
      if ( ShellMRTHelper::Common::HasMsAppDataUriScheme((ShellMRTHelper::Common *)v144, v16) )
      {
        string = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
        Instance = CoCreateInstance(
                     &GUID_a8ca4495_65ab_4333_9ff9_4feb6fbf5169,
                     0LL,
                     1u,
                     &GUID_428bb582_2a87_4ea0_b529_30067cc4a4d7,
                     (LPVOID *)&string);
        FailIf = Instance;
        if ( Instance >= 0 )
        {
          lpString1 = 0LL;
          *(_QWORD *)cchCount1 = 0LL;
          v123 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          *(_QWORD *)cchCount1 = -1LL;
          v123 = -1LL;
          PackageFullNameForAppsFolderItem = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
          FailIf = PackageFullNameForAppsFolderItem;
          if ( PackageFullNameForAppsFolderItem >= 0 )
          {
            v23 = string;
            v24 = *(__int64 (__fastcall **)(HSTRING, const WCHAR *, LPCWCH, _QWORD, wchar_t **))(*(_QWORD *)string + 48LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v131);
            v132 = -1LL;
            v133 = -1LL;
            PackageFullNameForAppsFolderItem = v24(v23, v14, lpString1, 0LL, &v131);
            FailIf = PackageFullNameForAppsFolderItem;
            if ( PackageFullNameForAppsFolderItem >= 0 )
            {
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
              goto LABEL_27;
            }
            v22 = 270LL;
          }
          else
          {
            v22 = 268LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)PackageFullNameForAppsFolderItem);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x109,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)Instance);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
LABEL_217:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v131);
        v144 = 0LL;
        goto LABEL_218;
      }
      if ( !PathIsRelativeW(v14) )
      {
        v27 = v13;
        if ( v13 == -1LL )
        {
          if ( v14 )
          {
            v27 = -1LL;
            do
              ++v27;
            while ( v14[v27] );
          }
          else
          {
            v27 = 0LL;
          }
        }
        v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)&v131,
                (__int64)v14,
                v27);
        FailIf = v18;
        if ( v18 < 0 )
        {
          v19 = 276LL;
          goto LABEL_40;
        }
      }
    }
LABEL_27:
    v25 = &LocaleName;
    if ( v131 && *v131 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v131);
      v26 = StringCchCopyW((wchar_t *)v4 + 8, 260LL, v131);
      FailIf = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C4,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_217;
      }
      *(_QWORD *)v4 = 0LL;
      *((_BYTE *)v4 + 8) = 0;
      goto LABEL_173;
    }
    v130 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v130);
    v28 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            &v130);
    FailIf = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v28);
LABEL_216:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v130);
      goto LABEL_217;
    }
    sourceString = 0LL;
    *(_QWORD *)v139 = 0LL;
    v140 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    *(_QWORD *)v139 = -1LL;
    v140 = -1LL;
    v29 = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
    FailIf = v29;
    if ( v29 < 0 )
    {
      v30 = 288LL;
LABEL_48:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v29);
LABEL_215:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
      goto LABEL_216;
    }
    v29 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v130 + 40LL))(v130, sourceString);
    FailIf = v29;
    if ( v29 < 0 )
    {
      v30 = 290LL;
      goto LABEL_48;
    }
    v134 = 0LL;
    v31 = v130;
    v32 = *(__int64 (__fastcall **)(LPVOID, GUID *, _QWORD))(*(_QWORD *)v130 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v134);
    v33 = v32(v31, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, &v134);
    FailIf = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v33);
LABEL_214:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v134);
      goto LABEL_215;
    }
    v129 = 0LL;
    v34 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v134;
    v35 = **v134;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v129);
    v36 = v35(v34, &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20, &v129);
    FailIf = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v36);
LABEL_213:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v129);
      goto LABEL_214;
    }
    memset(v127, 0, sizeof(v127));
    v128 = 0LL;
    if ( ShellMRTHelper::Common::HasMsAppXUriScheme((ShellMRTHelper::Common *)v144, v37) )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v127);
      *(_QWORD *)&v127[2].unused = -1LL;
      v128 = -1LL;
      v40 = ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
              (ShellMRTHelper::Common *)v144,
              (struct Windows::Foundation::IUriRuntimeClass *)v127,
              v39);
      FailIf = v40;
      if ( v40 < 0 )
      {
        v41 = 303LL;
LABEL_211:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v41,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v40);
        goto LABEL_212;
      }
      goto LABEL_85;
    }
    if ( ShellMRTHelper::Common::HasMsResourceUriScheme((ShellMRTHelper::Common *)v144, v38) )
    {
      if ( v13 == -1LL )
      {
        if ( v14 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v14[v13] );
        }
        else
        {
          v13 = 0LL;
        }
      }
      v40 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)v127,
              (__int64)v14,
              v13);
      FailIf = v40;
      if ( v40 < 0 )
      {
        v41 = 310LL;
        goto LABEL_211;
      }
      goto LABEL_85;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v42 = *(_QWORD *)v136 + 7LL;
    v43 = 6LL;
    if ( *(_QWORD *)v136 == -8LL )
    {
      v42 = 6LL;
    }
    else if ( v42 < 6 )
    {
      v43 = *(_QWORD *)v136 + 7LL;
    }
    v40 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
            (LPVOID *)v127,
            v42);
    FailIf = v40;
    if ( v40 < 0 )
    {
      v41 = 317LL;
      goto LABEL_211;
    }
    v44 = v42 + 1;
    if ( v42 > 0x7FFFFFFE )
    {
      if ( v42 == -1LL )
      {
LABEL_82:
        *(_QWORD *)&v127[2].unused = v43;
        v40 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                (__int64)v127,
                (__int64 *)&pszPath);
        FailIf = v40;
        if ( v40 < 0 )
        {
          v41 = 318LL;
          goto LABEL_211;
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(v127);
LABEL_85:
        v125 = 0LL;
        v50 = v130;
        v51 = *(__int64 (__fastcall **)(LPVOID, GUID *, struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v130 + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v125);
        v52 = v51(v50, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, &v125);
        FailIf = v52;
        if ( v52 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x145,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v52);
LABEL_169:
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v125);
LABEL_212:
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v127);
          goto LABEL_213;
        }
        v124 = 0LL;
        v55 = 0;
        v56 = 0;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
          1u,
          v53,
          v54);
        v60 = *(_QWORD *)&v127[0].unused;
        v61 = v142;
        if ( *((_DWORD *)v142 + 11) == 1 && *((_DWORD *)v142 + 10) != 1 && *((_DWORD *)v142 + 9) != 2 )
        {
          inited = ImmersiveIcons::InitResourceContextForLightTheme(v142, v125, v58);
          FailIf = inited;
          if ( inited < 0 )
          {
            v63 = 345LL;
LABEL_111:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v63,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)inited);
LABEL_168:
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v124);
            goto LABEL_169;
          }
          v119 = 0LL;
          v64 = v129;
          v65 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v129 + 48LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
          if ( v65(v64, v125, v60, &v119) >= 0 )
          {
            string = 0LL;
            v66 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v119,
                    (__int64 *)&string);
            FailIf = v66;
            if ( v66 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x15F,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v66);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
LABEL_126:
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
              goto LABEL_168;
            }
            lpString1 = 0LL;
            *(_QWORD *)cchCount1 = 0LL;
            v123 = 0LL;
            v67 = string;
            v68 = *(int (__fastcall **)(HSTRING, const wchar_t *, LPCWCH *))(*(_QWORD *)string + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
            *(_QWORD *)cchCount1 = -1LL;
            v123 = -1LL;
            if ( v68(v67, L"AlternateForm", &lpString1) >= 0 )
            {
              LODWORD(v69) = cchCount1[0];
              if ( *(_QWORD *)cchCount1 == -1LL )
              {
                if ( lpString1 )
                {
                  v69 = -1LL;
                  do
                    ++v69;
                  while ( lpString1[v69] );
                }
                else
                {
                  LODWORD(v69) = 0;
                }
              }
              v70 = &LocaleName;
              if ( lpString1 )
                v70 = lpString1;
              if ( CompareStringOrdinal(v70, v69, L"lightunplated", -1, 1) == 2 )
              {
                v55 = 2;
                v56 = 1;
                Microsoft::WRL::ComPtr<IResourceCandidate>::operator=(&v124, (__int64 *)&string);
              }
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&string);
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
        }
        if ( v124 )
          goto LABEL_117;
        inited = ImmersiveIcons::InitResourceContextForAllThemes(v61, v125, v58);
        FailIf = inited;
        if ( inited < 0 )
        {
          v63 = 369LL;
          goto LABEL_111;
        }
        v119 = 0LL;
        v71 = v129;
        v72 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v129 + 48LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
        if ( v72(v71, v125, v60, &v119) >= 0 )
        {
          v73 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v119,
                  &v124);
          FailIf = v73;
          if ( v73 < 0 )
          {
            v74 = 373LL;
LABEL_125:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v74,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v73);
            goto LABEL_126;
          }
          memset(&propvarIn, 0, sizeof(propvarIn));
          v75 = v124;
          v76 = *(int (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v124 + 64LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
          *(_QWORD *)&propvarIn.Reserved.Reserved2[8] = -1LL;
          *(_QWORD *)&propvarIn.Reserved.Reserved2[16] = -1LL;
          v55 = (v76(v75, L"AlternateForm", &propvarIn) >= 0) + 1;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
        if ( v124 )
        {
LABEL_117:
          ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)v61, v57, (__int64)v58, v59);
          v80 = ContrastForParams;
          if ( v55 == 1 && !ContrastForParams )
          {
            v119 = 0LL;
            v81 = (*(__int64 (__fastcall **)(struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)v125 + 112LL))(
                    v125,
                    *((unsigned __int16 *)v142 + 8));
            if ( v81 >= 0 )
            {
              v82 = v129;
              v83 = *(__int64 (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v129 + 48LL);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
              v84 = v83(v82, v125, v60, &v119);
              if ( v84 >= 0 )
              {
                v73 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v119,
                        &v124);
                FailIf = v73;
                if ( v73 < 0 )
                {
                  v74 = 391LL;
                  goto LABEL_125;
                }
                lpString1 = 0LL;
                *(_QWORD *)cchCount1 = 0LL;
                v123 = 0LL;
                v85 = v124;
                v86 = *(int (__fastcall **)(__int64, const wchar_t *, LPCWCH *))(*(_QWORD *)v124 + 64LL);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
                *(_QWORD *)cchCount1 = -1LL;
                v123 = -1LL;
                v55 = (v86(v85, L"AlternateForm", &lpString1) >= 0) + 1;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x185,
                  (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v84);
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x184,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v81);
            }
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v119);
          }
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
            1u,
            v78,
            v79);
          lpString1 = 0LL;
          *(_QWORD *)cchCount1 = 0LL;
          v123 = 0LL;
          v87 = v124;
          v88 = *(int (__fastcall **)(__int64, const wchar_t *, LPCWCH *))(*(_QWORD *)v124 + 64LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          *(_QWORD *)cchCount1 = -1LL;
          v123 = -1LL;
          if ( v88(v87, L"Theme", &lpString1) >= 0 )
          {
            LODWORD(v89) = cchCount1[0];
            if ( *(_QWORD *)cchCount1 == -1LL )
            {
              if ( lpString1 )
              {
                v89 = -1LL;
                do
                  ++v89;
                while ( lpString1[v89] );
              }
              else
              {
                LODWORD(v89) = 0;
              }
            }
            v90 = &LocaleName;
            if ( lpString1 )
              v90 = lpString1;
            if ( CompareStringOrdinal(v90, v89, L"dark", -1, 1) == 2 )
            {
              v56 = 2;
            }
            else
            {
              LODWORD(v91) = cchCount1[0];
              if ( *(_QWORD *)cchCount1 == -1LL )
              {
                if ( lpString1 )
                {
                  v91 = -1LL;
                  do
                    ++v91;
                  while ( lpString1[v91] );
                }
                else
                {
                  LODWORD(v91) = 0;
                }
              }
              v92 = &LocaleName;
              if ( lpString1 )
                v92 = lpString1;
              if ( CompareStringOrdinal(v92, v91, L"light", -1, 1) == 2 )
                v56 = 1;
            }
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          memset(&propvarIn, 0, sizeof(propvarIn));
          v95 = 0;
          if ( v80 )
          {
            v93 = v124;
            v94 = *(int (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v124 + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
            *(_QWORD *)&propvarIn.Reserved.Reserved2[8] = -1LL;
            *(_QWORD *)&propvarIn.Reserved.Reserved2[16] = -1LL;
            if ( v94(v93, L"Contrast", &propvarIn) >= 0 )
              v95 = 1;
          }
          v96 = v124;
          v97 = *(__int64 (__fastcall **)(__int64, wchar_t **))(*(_QWORD *)v124 + 32LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v131);
          v132 = -1LL;
          v133 = -1LL;
          v98 = v97(v96, &v131);
          FailIf = v98;
          if ( v98 < 0 )
          {
            v99 = 417LL;
LABEL_158:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v99,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v98);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
            goto LABEL_168;
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v131);
          v98 = StringCchCopyW((wchar_t *)v4 + 8, 260LL, v131);
          FailIf = v98;
          if ( v98 < 0 )
          {
            v99 = 421LL;
            goto LABEL_158;
          }
          *(_DWORD *)v4 = v55;
          *((_DWORD *)v4 + 1) = v56;
          *((_BYTE *)v4 + 8) = v95;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
LABEL_171:
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v124);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v125);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v127);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v129);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v134);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v130);
          if ( *(_DWORD *)v4 )
          {
LABEL_209:
            FailIf = 0;
            goto LABEL_217;
          }
          v25 = &LocaleName;
LABEL_173:
          lpString1 = 0LL;
          *(_QWORD *)cchCount1 = 0LL;
          v123 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          *(_QWORD *)cchCount1 = -1LL;
          v123 = -1LL;
          *(_OWORD *)&v127[0].unused = PKEY_AppUserModel_ParentID;
          LODWORD(v128) = 19;
          if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
                      &v126,
                      (__int128 *)&v127[0].unused,
                      &lpString1) >= 0 )
          {
            v108 = *(_QWORD *)cchCount1;
            LODWORD(v109) = cchCount1[0];
            v110 = lpString1;
            if ( *(_QWORD *)cchCount1 == -1LL )
            {
              if ( lpString1 )
              {
                v109 = -1LL;
                do
                  ++v109;
                while ( lpString1[v109] );
              }
              else
              {
                LODWORD(v109) = 0;
              }
            }
            v111 = &LocaleName;
            if ( lpString1 )
              v111 = lpString1;
            if ( CompareStringOrdinal(v111, v109, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) != 2 )
            {
              LOBYTE(v112) = 1;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::ReportUsage(
                &`wil::Feature<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::GetImpl'::`2'::impl,
                v112);
              propvarIn.Reserved.Reserved1 = L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App";
              *(_QWORD *)&propvarIn.Reserved.Reserved2[8] = L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App";
              *(_QWORD *)&propvarIn.Reserved.Reserved2[16] = L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App";
              v146 = L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App";
              v147 = L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App";
              p_propvarIn = &propvarIn;
              while ( 1 )
              {
                Reserved1 = &LocaleName;
                if ( p_propvarIn->Reserved.Reserved1 )
                  Reserved1 = (const WCHAR *)p_propvarIn->Reserved.Reserved1;
                LODWORD(v115) = v108;
                if ( v108 == -1 )
                {
                  if ( v110 )
                  {
                    v115 = -1LL;
                    do
                      ++v115;
                    while ( v110[v115] );
                  }
                  else
                  {
                    LODWORD(v115) = 0;
                  }
                }
                v116 = &LocaleName;
                if ( v110 )
                  v116 = v110;
                if ( CompareStringOrdinal(v116, v115, Reserved1, -(p_propvarIn->Reserved.Reserved1 != 0LL), 1) == 2 )
                  break;
                p_propvarIn = (HSTRING_HEADER *)((char *)p_propvarIn + 8);
                if ( p_propvarIn == (HSTRING_HEADER *)&v148 )
                  goto LABEL_198;
              }
            }
            *(_DWORD *)v4 = 3;
LABEL_198:
            LOBYTE(v112) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_YourPhonePinnedSecondaryTilesUnplated>::GetImpl'::`2'::impl,
              v112);
            if ( v108 == -1 )
            {
              if ( v110 )
              {
                v108 = -1LL;
                do
                  ++v108;
                while ( v110[v108] );
              }
              else
              {
                LODWORD(v108) = 0;
              }
            }
            if ( v110 )
              v25 = v110;
            if ( CompareStringOrdinal(v25, v108, L"Microsoft.YourPhone_8wekyb3d8bbwe!App", -1, 1) == 2 )
              *(_DWORD *)v4 = 3;
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          goto LABEL_209;
        }
        WindowsDeleteString(0LL);
        string = 0LL;
        v100 = v144;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
        v101 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&propvarIn, sourceString, v139[0]);
        v103 = ShellMRTHelper::Common::TryFallbackToFilePath(
                 v102,
                 (HSTRING)v101[1].Reserved.Reserved1,
                 v100,
                 (HSTRING)&string,
                 (HSTRING *)ppv);
        FailIf = v103;
        if ( v103 >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          if ( !PathFileExistsW(StringRawBuffer) )
          {
            FailIf = -2147024893;
            v106 = 2147942403LL;
            v104 = 436LL;
LABEL_167:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v104,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)v106);
            WindowsDeleteString(string);
            string = 0LL;
            goto LABEL_168;
          }
          v107 = WindowsGetStringRawBuffer(string, 0LL);
          v103 = StringCchCopyW((wchar_t *)v4 + 8, 260LL, v107);
          FailIf = v103;
          if ( v103 >= 0 )
          {
            *(_QWORD *)v4 = 0LL;
            *((_BYTE *)v4 + 8) = 0;
            WindowsDeleteString(string);
            goto LABEL_171;
          }
          v104 = 437LL;
        }
        else
        {
          v104 = 435LL;
        }
        v106 = (unsigned int)v103;
        goto LABEL_167;
      }
    }
    else if ( v43 <= 0x7FFFFFFE )
    {
      v45 = *(_WORD **)&v127[0].unused;
      v46 = v43 - v44;
      v47 = (char *)L"Files\\" - *(_QWORD *)&v127[0].unused;
      do
      {
        if ( !(v44 + v46) )
          break;
        v48 = *(_WORD *)&v47[(_QWORD)v45];
        if ( !v48 )
          break;
        *v45++ = v48;
        --v44;
      }
      while ( v44 );
      v49 = v45 - 1;
      if ( v44 )
        v49 = v45;
      v4 = v119;
      goto LABEL_81;
    }
    v49 = *(_WORD **)&v127[0].unused;
LABEL_81:
    *v49 = 0;
    goto LABEL_82;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDE,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v7);
LABEL_220:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v141);
  return (unsigned int)FailIf;
}
