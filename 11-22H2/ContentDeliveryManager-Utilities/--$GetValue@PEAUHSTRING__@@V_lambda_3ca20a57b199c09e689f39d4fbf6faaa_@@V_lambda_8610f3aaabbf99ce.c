/*
 * XREFs of ??$GetValue@PEAUHSTRING__@@V_lambda_3ca20a57b199c09e689f39d4fbf6faaa_@@V_lambda_8610f3aaabbf99ce4e8c0177de37c43b_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEAPEAUHSTRING__@@AEBV_lambda_3ca20a57b199c09e689f39d4fbf6faaa_@@V_lambda_8610f3aaabbf99ce4e8c0177de37c43b_@@@Z @ 0x180099D50
 * Callers:
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18009D230 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18009E0FC (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<HSTRING__ *,_lambda_3ca20a57b199c09e689f39d4fbf6faaa_,_lambda_8610f3aaabbf99ce4e8c0177de37c43b_>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v7 = *(_DWORD *)(a1 + 16);
  if ( (v7 & 0x80000000) == 0 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v8 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
           a1,
           a2,
           &v14);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 152LL))(v14, a4);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA0,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v11);
      v9 = v7;
      v10 = 377LL;
    }
    else
    {
      v9 = (unsigned int)v8;
      v10 = 376LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v9);
LABEL_9:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    return v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x169,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
    (const char *)v7);
  return v7;
}
