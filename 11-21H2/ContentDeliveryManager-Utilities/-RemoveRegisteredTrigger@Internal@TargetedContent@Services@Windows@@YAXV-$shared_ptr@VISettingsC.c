/*
 * XREFs of ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800ACB5C
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800A33E8 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A46FC (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x1800A9698 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?Remove@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_W@Z @ 0x1800ACA14 (-Remove@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::RemoveRegisteredTrigger(__int64 *a1, __int64 a2)
{
  const WCHAR *StringRawBuffer; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall ****v9[2])(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF

  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v8 = 0LL;
  v4 = a1[1];
  v5 = *a1;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v8, v5, v4);
  if ( Windows::Services::TargetedContent::Internal::AlreadyRegistered(&v8, (__int64)StringRawBuffer) )
  {
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 24LL))(
      *a1,
      v9);
    v6 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Remove(
           v9[0],
           StringRawBuffer);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        128LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v6,
        v8);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v9);
  }
  WindowsDeleteString(string);
  string = 0LL;
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a1);
}
