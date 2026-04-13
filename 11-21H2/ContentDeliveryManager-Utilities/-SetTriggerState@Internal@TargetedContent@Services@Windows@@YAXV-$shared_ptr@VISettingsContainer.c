/*
 * XREFs of ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x1800ADB24
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800A33E8 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     _lambda_2547995382f4e95e159e6de1c858c05c_::operator() @ 0x1800A9160 (_lambda_2547995382f4e95e159e6de1c858c05c_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A46FC (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x1800A6700 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@Z @ 0x1800A7D44 (--$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@-$PropertySetHelperBase@$1-RuntimeClass.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A8B5C (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x1800A9698 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800AAEBC (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800ACC40 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerState(__int64 *a1, __int64 a2, int a3)
{
  PCWSTR StringRawBuffer; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  int CompositeValue; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ****v17[2])(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HSTRING string; // [rsp+98h] [rbp+38h] BYREF

  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v16 = 0LL;
  v6 = a1[1];
  v7 = *a1;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v16, v7, v6);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(&v16, (__int64)StringRawBuffer) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      111LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL,
      (int)v15);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 24LL))(
    *a1,
    v17);
  v15 = 0LL;
  CompositeValue = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetCompositeValue(
                     v17[0],
                     (__int64)string,
                     &v15);
  if ( CompositeValue < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      115LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)CompositeValue,
      (int)v15);
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v18,
    v15);
  *(_QWORD *)&v16 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(a3);
  v9 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_e85697e1379bd30e043dcf6a8e09ee83_>(
         (__int64)&v18,
         L"triggerState",
         (const WCHAR **)&v16);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      117LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v9,
      (int)v15);
  v10 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          (__int64)v17[0],
          (__int64)string,
          v18);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      118LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v10,
      (int)v15);
  v11 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
  }
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v17);
  WindowsDeleteString(string);
  string = 0LL;
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a1);
}
