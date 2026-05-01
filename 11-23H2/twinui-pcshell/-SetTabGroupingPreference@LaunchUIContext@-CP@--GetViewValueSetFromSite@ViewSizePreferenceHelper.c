/*
 * XREFs of ?SetTabGroupingPreference@LaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@UEAAJK@Z @ 0x1805A1020
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 */

__int64 __fastcall `ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext::SetTabGroupingPreference(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r8
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING_HEADER v9; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, (const WCHAR **)&off_1807F47E0, a3);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)(a1 + 48),
         (HSTRING)v4[1].Reserved.Reserved1,
         v5);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11A,
    (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v6);
  return v7;
}
