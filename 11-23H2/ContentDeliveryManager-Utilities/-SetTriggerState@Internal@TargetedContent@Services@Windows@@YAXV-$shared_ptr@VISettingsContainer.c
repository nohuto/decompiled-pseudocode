/*
 * XREFs of ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18009EFFC
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180096040 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     _lambda_2547995382f4e95e159e6de1c858c05c_::operator() @ 0x18009B4D8 (_lambda_2547995382f4e95e159e6de1c858c05c_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAA@XZ @ 0x180052E84 (--1-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Trigge.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18008F77C (--0-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800972FC (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180098D58 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@Z @ 0x18009A378 (--$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@-$PropertySetHelperBase@$1-RuntimeClass.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009AF60 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18009BD54 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009CF00 (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009E370 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Windows::Services::TargetedContent::Internal::SetTriggerState(__int64 *a1, __int64 a2, int a3)
{
  PCWSTR StringRawBuffer; // rbx
  _QWORD *v6; // rax
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rbx
  int CompositeValue; // eax
  int v9; // eax
  int v10; // eax
  std::_Ref_count_base *v11; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ****v14)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v17[4])(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HSTRING string; // [rsp+A8h] [rbp+38h] BYREF

  Windows::Services::TargetedContent::Internal::CreateTriggerKey((Microsoft::WRL::Wrappers::HString *)&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v6 = std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
         &v16,
         a1);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v6, (__int64)StringRawBuffer) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL,
      (int)v12);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 24LL))(
    *a1,
    &v14);
  v12 = 0LL;
  v7 = v14;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  CompositeValue = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetCompositeValue(
                     v7,
                     (__int64)string,
                     (__int64 *)&v12);
  if ( CompositeValue < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)CompositeValue,
      (int)v12);
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)v17,
    v12);
  v13 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(a3);
  v9 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_e85697e1379bd30e043dcf6a8e09ee83_>(
         (__int64)v17,
         L"triggerState",
         &v13);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v9,
      (int)v12);
  v10 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          (__int64)v14,
          (__int64)string,
          v17[0]);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v10,
      (int)v12);
  CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::~PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>((__int64 *)v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  WindowsDeleteString(string);
  string = 0LL;
  v11 = (std::_Ref_count_base *)a1[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
