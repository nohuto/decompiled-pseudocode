/*
 * XREFs of ??R_lambda_84553ebf14022660bab25ef407fb095c_@@QEBAJXZ @ 0x1804E71D0
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804E7DA4 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180036348 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_84553ebf14022660bab25ef407fb095c_::operator()(__int64 a1)
{
  HRESULT v2; // ebx
  int v3; // eax
  unsigned int v4; // r8d
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-48h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v14[24]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
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
    v12 = 0;
    v3 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, &v12);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v7 = v12;
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
             (__int64)v14,
             (const WCHAR **)&off_180669858,
             v4);
      v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
              *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 8),
              *(HSTRING *)(v8 + 24),
              v9,
              v7);
      v2 = v10;
      v15 = 0LL;
      if ( v10 >= 0 )
      {
        v2 = 0;
        goto LABEL_8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE5,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v10);
      v5 = (unsigned int)v2;
      v6 = 329LL;
    }
    else
    {
      v5 = (unsigned int)v3;
      v6 = 328LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)v5);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v2;
}
