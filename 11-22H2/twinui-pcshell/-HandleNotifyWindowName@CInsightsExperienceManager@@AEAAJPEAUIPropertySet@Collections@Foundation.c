/*
 * XREFs of ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180459BD8
 * Callers:
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18045A000 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800DDD20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x180295180 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 */

__int64 __fastcall CInsightsExperienceManager::HandleNotifyWindowName(
        CInsightsExperienceManager *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  _DWORD *v3; // rcx
  _DWORD *v4; // rcx
  unsigned int v6; // r8d
  HSTRING Reserved1; // rbx
  int PropVal; // ebx
  int v9; // eax
  struct Windows::Foundation::IPropertyValue *v10; // [rsp+38h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER v12; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v3 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v3,
      (unsigned __int8 *)dword_180851DA5,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&v12);
  if ( a2 )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    WindowsDeleteString(0LL);
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v12,
                           (const WCHAR **)&off_1807F4498,
                           v6)[1].Reserved.Reserved1;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v11,
                Reserved1,
                &v10);
    if ( PropVal >= 0 )
    {
      v9 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}((__int64)v10);
      PropVal = v9;
      if ( v9 >= 0 )
        PropVal = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
    if ( PropVal >= 0 )
      PropVal = -2147024809;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)(unsigned int)PropVal);
    WindowsDeleteString(0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    return (unsigned int)PropVal;
  }
  else
  {
    v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     (__int64)v3,
                     (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v4 > 5u )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v4,
        (unsigned __int8 *)dword_180851BBC,
        0LL,
        0LL,
        2u,
        (PEVENT_DATA_DESCRIPTOR)&v12);
    return 2147942487LL;
  }
}
