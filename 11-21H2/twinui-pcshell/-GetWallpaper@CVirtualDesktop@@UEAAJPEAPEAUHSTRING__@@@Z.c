/*
 * XREFs of ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18055DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180152350 (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSubscriptionEnabledNoThrow@ConfigurationHelper@TargetedContent@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x1805460B4 (-IsSubscriptionEnabledNoThrow@ConfigurationHelper@TargetedContent@CreativeFramework@@YAJPEBGPEA_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAA_NXZ @ 0x18054CC94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@Q.c)
 *     ?GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18055DED0 (-GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall CVirtualDesktop::GetWallpaper(CVirtualDesktop *this, HSTRING *a2, __int64 a3, __int64 a4)
{
  int IsSubscriptionEnabledNoThrow; // ebx
  __int64 v7; // rdx
  CreativeFramework::TargetedContent::ConfigurationHelper *v9; // rcx
  bool *v10; // r8
  int WallpaperInternal; // eax
  unsigned __int16 v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v13; // [rsp+24h] [rbp-DCh] BYREF
  int v14; // [rsp+28h] [rbp-D8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD pvParam[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  v13 = 0;
  IsSubscriptionEnabledNoThrow = wil::wnf_query_nothrow<int>(
                                   (__int64)&WNF_SHEL_DESKTOP_BACKGROUND_SET_TO_SLIDESHOW,
                                   (char *)v12,
                                   (__int64)&v13,
                                   a4);
  if ( IsSubscriptionEnabledNoThrow < 0 )
  {
    v7 = 126LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)IsSubscriptionEnabledNoThrow);
    return (unsigned int)IsSubscriptionEnabledNoThrow;
  }
  if ( !v13 )
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl) )
      goto LABEL_10;
    LOBYTE(v12[0]) = 1;
    IsSubscriptionEnabledNoThrow = CreativeFramework::TargetedContent::ConfigurationHelper::IsSubscriptionEnabledNoThrow(
                                     v9,
                                     v12,
                                     v10);
    if ( IsSubscriptionEnabledNoThrow < 0 )
    {
      v7 = 136LL;
      goto LABEL_3;
    }
    if ( !LOBYTE(v12[0]) )
    {
LABEL_10:
      memset_0(pvParam, 0, 0x208uLL);
      SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
      if ( pvParam[0] )
      {
        v14 = 0;
        SystemParametersInfoW(0x1040u, 0, &v14, 0);
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 10) + 24LL))(
            *((_QWORD *)this + 10),
            SRWLock);
          WallpaperInternal = CVirtualDesktop::GetWallpaperInternal((CVirtualDesktop *)((char *)this + 16), a2);
          IsSubscriptionEnabledNoThrow = WallpaperInternal;
          if ( WallpaperInternal < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA0,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
              (const char *)(unsigned int)WallpaperInternal);
            if ( SRWLock[0] )
              ReleaseSRWLockShared(SRWLock[0]);
            return (unsigned int)IsSubscriptionEnabledNoThrow;
          }
          if ( SRWLock[0] )
            ReleaseSRWLockShared(SRWLock[0]);
        }
      }
    }
  }
  return 0LL;
}
