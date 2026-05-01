/*
 * XREFs of ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x1803B0F68
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B9424 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PositionerPropertySetHelpers::SetAppActivationResponse(
        PositionerPropertySetHelpers *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  char v2; // bl
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (char)a2;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AppActivationResponse", 0x16u, 0x15u);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(this, v9, v4, v2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (int)"desktop\\internal\\shell\\inc\\private\\PositionerPropertySetHelpers.h",
    (const char *)(unsigned int)v5);
  return v6;
}
