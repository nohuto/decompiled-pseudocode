/*
 * XREFs of ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18005B200
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18005A394 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1803EF960 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180093870 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BHA@AA @ 0x1801F9760 (--_9IPropertyValue@Foundation@Windows@@$BHA@AA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
        Windows::Internal::Shell::Desktop::ViewManagerInterop *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        unsigned __int64 *a3)
{
  int PropVal; // ebx
  int v6; // eax
  struct Windows::Foundation::IPropertyValue *v7; // rcx
  struct Windows::Foundation::IPropertyValue *v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AAMShim.ActivationId", 0x15u, 0x14u);
  *(_QWORD *)a2 = 0LL;
  v9 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, v11, &v9);
  if ( PropVal < 0 )
    goto LABEL_8;
  v6 =  Windows::Foundation::IPropertyValue::`vcall'{112,{flat}}(v9, a2);
  PropVal = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v6,
      (int)v9);
LABEL_8:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
    goto LABEL_6;
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  PropVal = 0;
LABEL_6:
  if ( PropVal >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
    (const char *)(unsigned int)PropVal,
    (int)v9);
  return (unsigned int)PropVal;
}
