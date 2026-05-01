/*
 * XREFs of ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180010098
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18000F584 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??$QueueTask@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@Z @ 0x180010190 (--$QueueTask@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800DDC9C (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
        LPCWSTR psz,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned int v4; // ebx
  char v5; // di
  __int64 v6; // r8
  HRESULT v7; // eax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-50h] BYREF
  LPWSTR ppwsz; // [rsp+28h] [rbp-48h] BYREF
  const unsigned __int16 *v12; // [rsp+30h] [rbp-40h] BYREF
  LPWSTR v13; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v4 = 0;
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"AppActivation.ShouldNotifyUAOfLaunch",
    0x25u,
    0x24u);
  v5 = 1;
  LODWORD(ppwsz) = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v12, v15, v6, &v10) < 0
    || !(_BYTE)v10 )
  {
    v5 = 0;
  }
  if ( v5 )
  {
    v7 = SHStrDupW(psz, &ppwsz);
    v4 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D,
        (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\AppActivation_PropertySet.h",
        (const char *)(unsigned int)v7,
        v10);
    }
    else
    {
      v13 = ppwsz;
      v8 = Windows::Internal::ComTaskPool::QueueTask<_lambda_23c98c0562f226dcd27081461ca7c8fb_>(retaddr, &v13);
      v4 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x37,
          (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\AppActivation_PropertySet.h",
          (const char *)(unsigned int)v8,
          v10);
        CoTaskMemFree(ppwsz);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v4;
}
