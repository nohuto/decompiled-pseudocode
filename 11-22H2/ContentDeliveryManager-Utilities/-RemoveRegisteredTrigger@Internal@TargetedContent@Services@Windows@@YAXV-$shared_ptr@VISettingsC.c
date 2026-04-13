/*
 * XREFs of ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009E2DC
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180096090 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18008F7CC (--0-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009734C (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18009BDA4 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?Remove@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_W@Z @ 0x18009E218 (-Remove@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Services::TargetedContent::Internal::RemoveRegisteredTrigger(__int64 *a1, __int64 a2)
{
  const WCHAR *StringRawBuffer; // rdi
  _QWORD *v4; // rax
  int v5; // eax
  std::_Ref_count_base *v6; // rcx
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+18h] BYREF

  Windows::Services::TargetedContent::Internal::CreateTriggerKey((Microsoft::WRL::Wrappers::HString *)&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v4 = std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
         &v7,
         a1);
  if ( Windows::Services::TargetedContent::Internal::AlreadyRegistered(v4, (__int64)StringRawBuffer) )
  {
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 24LL))(
      *a1,
      &v7);
    v5 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Remove(
           v7,
           StringRawBuffer);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x80,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v5,
        (int)v7);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  WindowsDeleteString(string);
  string = 0LL;
  v6 = (std::_Ref_count_base *)a1[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
