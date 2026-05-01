/*
 * XREFs of ?SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x1802F7724
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FD200 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$SetValue@M@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZM@Z @ 0x1802F2C24 (--$SetValue@M@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewModePreferencesHelpers::SetSizeHintHeight(
        ViewModePreferencesHelpers *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        float a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-48h] BYREF
  HSTRING v8; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ViewModePreferences.SizeHintHeight",
    0x23u,
    0x22u);
  v4 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<float>(this, v8);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ViewModePreferences_PropertySet.h",
      (const char *)(unsigned int)v4);
  return v5;
}
