/*
 * XREFs of ?RemoveClientRequestedNavigationTypeFromPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x1804ACD8C
 * Callers:
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AEC20 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::RemoveClientRequestedNavigationTypeFromPropertySet(
        __int64 (__fastcall ***this)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 (__fastcall *v3)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64); // rdi
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = 0LL;
  v3 = **this;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v4 = v3((Windows::Internal::Shell::Holographic *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 27LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPropertySetHelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v7 = v10;
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 88LL);
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v4 = v8(v7, v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 28LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v5;
}
