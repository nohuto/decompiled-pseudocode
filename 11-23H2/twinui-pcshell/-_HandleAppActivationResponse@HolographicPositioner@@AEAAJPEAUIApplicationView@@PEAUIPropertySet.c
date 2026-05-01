/*
 * XREFs of ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AEC20
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804AAB00 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1800DDB28 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x1804ACD8C (-RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_HandleAppActivationResponse(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *))
{
  struct Windows::Foundation::Collections::IPropertySet *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)v8 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v8);
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v8,
         v10)
    && (v5 = Windows::Internal::Shell::Holographic::RemoveClientRequestedNavigationTypeFromPropertySet(a3, v4),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6CE,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8);
  return v6;
}
