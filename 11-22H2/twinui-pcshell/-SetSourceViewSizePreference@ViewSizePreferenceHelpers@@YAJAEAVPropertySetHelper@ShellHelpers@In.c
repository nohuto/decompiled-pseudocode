/*
 * XREFs of ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1803B1148
 * Callers:
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1803AEAE8 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B9424 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A0254 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewSizePreferenceHelpers::SetSourceViewSizePreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r8
  int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  HSTRING_HEADER *v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // r8
  HSTRING_HEADER v12; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, (const WCHAR **)&off_1807F4030, a3);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         a1,
         (HSTRING)v4[1].Reserved.Reserved1,
         v5);
  if ( v6 < 0 )
  {
    v8 = 192LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, (const WCHAR **)off_1807F4028, v7);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         a1,
         (HSTRING)v10[1].Reserved.Reserved1,
         v11);
  if ( v6 < 0 )
  {
    v8 = 193LL;
    goto LABEL_3;
  }
  return 0LL;
}
