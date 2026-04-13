/*
 * XREFs of ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800AB61C
 * Callers:
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800AB380 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x1800AE2B8 (-UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrw.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800ECF70 (-MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer(__int64 a1)
{
  void (__fastcall ****RootSettingsContainer)(_QWORD, __int64, PVOID, __int64); // rax
  void (__fastcall ***v3)(_QWORD, __int64, PVOID, __int64); // rdi
  void (__fastcall *v4)(_QWORD, __int64, PVOID, __int64); // rbx
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  __int64 v7; // r9
  _QWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]

  v9[0] = a1;
  RootSettingsContainer = (void (__fastcall ****)(_QWORD, __int64, PVOID, __int64))CreativeFramework::CommonHelper::MakeRootSettingsContainer(v9);
  v3 = *RootSettingsContainer;
  v4 = ***RootSettingsContainer;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, (const WCHAR **)&off_180111CF0, v5);
  LOBYTE(v7) = 1;
  v4(v3, a1, v6[1].Reserved.Reserved1, v7);
  v11 = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v9);
  return a1;
}
