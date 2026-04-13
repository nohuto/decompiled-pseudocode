/*
 * XREFs of ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800AB380
 * Callers:
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x1800A9544 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AB6C4 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800ABDC0 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x1800A66A8 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800AB61C (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(
        __int64 a1,
        int a2)
{
  void (__fastcall ****TriggerRegistrationSettingsContainer)(_QWORD, __int64, PVOID, __int64); // rax
  void (__fastcall ***v4)(_QWORD, __int64, PVOID, __int64); // rdi
  void (__fastcall *v5)(_QWORD, __int64, PVOID, __int64); // rbx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r9
  const WCHAR *v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v12; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v10 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(a2);
  TriggerRegistrationSettingsContainer = (void (__fastcall ****)(_QWORD, __int64, PVOID, __int64))Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer(v11);
  v4 = *TriggerRegistrationSettingsContainer;
  v5 = ***TriggerRegistrationSettingsContainer;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, &v10, v6);
  LOBYTE(v8) = 1;
  v5(v4, a1, v7[1].Reserved.Reserved1, v8);
  v13 = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v11);
  return a1;
}
