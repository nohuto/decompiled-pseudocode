/*
 * XREFs of ?SetAssociatedWindow@LaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@UEAAJPEAUHWND__@@@Z @ 0x1804E8A40
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180036348 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall `ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext::SetAssociatedWindow(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v10, (const WCHAR **)off_180669850, a3);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)(a1 + 48),
         *(HSTRING *)(v5 + 24),
         v6,
         a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v7);
  return v8;
}
