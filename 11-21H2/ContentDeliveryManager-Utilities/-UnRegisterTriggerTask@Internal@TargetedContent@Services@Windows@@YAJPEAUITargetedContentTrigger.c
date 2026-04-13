/*
 * XREFs of ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A6E94
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A2E70 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800A33E8 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A55A0 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800A65A0 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800EA934 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf37.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(__int64 a1, __int64 *a2)
{
  void **v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // r8d
  const WCHAR *v7; // rax
  const WCHAR *Reserved1; // [rsp+20h] [rbp-49h] BYREF
  __int128 v10; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-31h] BYREF
  void *v12[3]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp+7h]
  void *v14[3]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v15; // [rsp+90h] [rbp+27h]
  HSTRING_HEADER v16; // [rsp+98h] [rbp+2Fh] BYREF

  v11[2] = a2;
  Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v14, a1);
  v3 = v14;
  if ( v15 >= 8 )
    v3 = (void **)v14[0];
  Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v12, (__int64)v3);
  v10 = 0LL;
  v4 = a2[1];
  v5 = *a2;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v10, v5, v4);
  v11[3] = &v10;
  v7 = (const WCHAR *)v12;
  if ( v13 >= 8 )
    v7 = (const WCHAR *)v12[0];
  Reserved1 = v7;
  Reserved1 = (const WCHAR *)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &Reserved1, v6)[1].Reserved.Reserved1;
  v11[0] = &Reserved1;
  v11[1] = &v10;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___(v11);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v10);
  if ( v13 >= 8 )
    operator delete(v12[0]);
  v13 = 7LL;
  v12[2] = 0LL;
  LOWORD(v12[0]) = 0;
  if ( v15 >= 8 )
    operator delete(v14[0]);
  v15 = 7LL;
  v14[2] = 0LL;
  LOWORD(v14[0]) = 0;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a2);
  return 0LL;
}
