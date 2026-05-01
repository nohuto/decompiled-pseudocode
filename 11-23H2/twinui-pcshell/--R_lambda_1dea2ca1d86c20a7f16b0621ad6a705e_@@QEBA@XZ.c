/*
 * XREFs of ??R_lambda_1dea2ca1d86c20a7f16b0621ad6a705e_@@QEBA@XZ @ 0x18059F638
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A0254 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_1dea2ca1d86c20a7f16b0621ad6a705e_::operator()(__int64 a1)
{
  HRESULT v2; // ebx
  int v3; // eax
  unsigned int v4; // r8d
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  HSTRING_HEADER *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r8
  int v9; // eax
  int v11; // [rsp+20h] [rbp-48h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         **(IUnknown ***)a1,
         &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
         &GUID_8eb65c84_1605_5214_a524_6d0d6c263c40,
         &ppvOut);
  if ( v2 >= 0 )
  {
    v11 = 0;
    v3 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, &v11);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, (const WCHAR **)&off_1807F47E0, v4);
      v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
             *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 8),
             (HSTRING)v7[1].Reserved.Reserved1,
             v8);
      v2 = v9;
      v14 = 0LL;
      if ( v9 >= 0 )
      {
        v2 = 0;
        goto LABEL_8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v9);
      v5 = (unsigned int)v2;
      v6 = 310LL;
    }
    else
    {
      v5 = (unsigned int)v3;
      v6 = 309LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)v5);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v2;
}
