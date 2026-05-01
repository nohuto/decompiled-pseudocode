/*
 * XREFs of ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180618530
 * Callers:
 *     <none>
 * Callees:
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACB5C (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x1802151FC (--0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?DesktopSpotlightStatus@?$consume_WindowsUdk_System_UserProfile_IUserProfilePersonalizationSettings@UIUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802155EC (-DesktopSpotlightStatus@-$consume_WindowsUdk_System_UserProfile_IUserProfilePersonalizationSetti.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAA_NXZ @ 0x180215D40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180618750 (-GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop::GetWallpaper(CVirtualDesktop *this, HSTRING *a2, __int64 a3, __int64 a4)
{
  HSTRING *v4; // rsi
  CVirtualDesktop *v5; // r14
  int v6; // eax
  unsigned int v7; // edi
  int v10; // eax
  int WallpaperInternal; // eax
  char v12[4]; // [rsp+20h] [rbp-268h] BYREF
  int v13; // [rsp+24h] [rbp-264h] BYREF
  int v14; // [rsp+28h] [rbp-260h] BYREF
  struct IUnknown v15; // [rsp+30h] [rbp-258h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-250h] BYREF
  CVirtualDesktop *v17; // [rsp+40h] [rbp-248h]
  HSTRING *v18; // [rsp+48h] [rbp-240h]
  _WORD pvParam[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v4 = a2;
  v5 = this;
  v17 = this;
  v18 = a2;
  *a2 = 0LL;
  v13 = 0;
  v6 = wil::wnf_query_nothrow<int>((__int64)&WNF_SHEL_DESKTOP_BACKGROUND_SET_TO_SLIDESHOW, v12, (__int64)&v13, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( !v13 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetImpl'::`2'::impl) )
    {
      try
      {
        winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings::UserProfilePersonalizationSettings(&v15);
        v10 = winrt::impl::consume_WindowsUdk_System_UserProfile_IUserProfilePersonalizationSettings<winrt::WindowsUdk::System::UserProfile::IUserProfilePersonalizationSettings>::DesktopSpotlightStatus((__int64 *)&v15);
      }
      catch ( ... )
      {
        v5 = v17;
        v4 = v18;
        goto LABEL_10;
      }
      if ( v10 == 1 )
      {
        winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo((winrt::Windows::Foundation::IUnknown *)&v15);
        return 0LL;
      }
      winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo((winrt::Windows::Foundation::IUnknown *)&v15);
    }
LABEL_10:
    memset_0(pvParam, 0, 0x208uLL);
    SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
    if ( pvParam[0] )
    {
      v14 = 0;
      SystemParametersInfoW(0x1040u, 0, &v14, 0);
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)v5 + 10) + 24LL))(*((_QWORD *)v5 + 10), &SRWLock);
        WallpaperInternal = CVirtualDesktop::GetWallpaperInternal((CVirtualDesktop *)((char *)v5 + 16), v4);
        v7 = WallpaperInternal;
        if ( WallpaperInternal < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA1,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
            (const char *)(unsigned int)WallpaperInternal);
          if ( SRWLock )
            ReleaseSRWLockShared(SRWLock);
          return v7;
        }
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
      }
    }
  }
  return 0LL;
}
