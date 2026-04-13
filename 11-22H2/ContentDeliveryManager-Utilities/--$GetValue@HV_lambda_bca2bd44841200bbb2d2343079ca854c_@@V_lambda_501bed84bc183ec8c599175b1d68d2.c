/*
 * XREFs of ??$GetValue@HV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d232_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEAHAEBV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d232_@@@Z @ 0x180099AF0
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009BE44 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x18009DF10 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18009E0FC (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<int,_lambda_bca2bd44841200bbb2d2343079ca854c_,_lambda_501bed84bc183ec8c599175b1d68d232_>(
        __int64 a1,
        __int64 a2,
        char a3,
        _DWORD *a4,
        __int64 a5,
        int a6)
{
  int HasKey; // ebx
  __int64 v10; // rdx
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  char v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = a3;
  HasKey = *(_DWORD *)(a1 + 16);
  if ( HasKey < 0 )
  {
    v10 = 361LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)HasKey);
    return (unsigned int)HasKey;
  }
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             a1,
             a2,
             &v18);
  if ( HasKey < 0 )
  {
    v10 = 366LL;
    goto LABEL_3;
  }
  if ( v18 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    v12 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
            a1,
            a2,
            &v17);
    HasKey = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 376LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      return (unsigned int)HasKey;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v17 + 88LL))(v17, a4);
    HasKey = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v15);
      v13 = (unsigned int)HasKey;
      v14 = 377LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
  else
  {
    *a4 = a6;
  }
  return 0LL;
}
