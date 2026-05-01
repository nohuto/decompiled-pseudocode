/*
 * XREFs of ?GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z @ 0x18003F9B4
 * Callers:
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003F7D4 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1805AE3F8 (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1805AE7BC (-StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800DDD20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BHA@AA @ 0x18029CA80 (--_9IPropertyValue@Foundation@Windows@@$BHA@AA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VoiceAssistantPositionerTelemetry::GetActivationId(struct IUnknown *a1)
{
  __int64 v2; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  HSTRING v4; // rbx
  int PropVal; // ebx
  int v6; // eax
  struct Windows::Foundation::IPropertyValue *v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v13; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = 0LL;
  v10 = 0LL;
  if ( a1 )
  {
    QueryInterface = a1->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
           a1,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v10) >= 0 )
    {
      v9 = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AAMShim.ActivationId", 0x15u, 0x14u);
      v4 = v13;
      v11 = 0LL;
      v8 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
      PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v9,
                  v4,
                  &v8);
      if ( PropVal >= 0 )
      {
        v6 =  Windows::Foundation::IPropertyValue::`vcall'{112,{flat}}(v8, &v11);
        PropVal = v6;
        if ( v6 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F,
            (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
            (const char *)(unsigned int)v6,
            (int)v8);
        else
          PropVal = 0;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
      if ( PropVal >= 0 )
        v2 = v11;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v2;
}
