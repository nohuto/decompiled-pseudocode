/*
 * XREFs of ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180099398
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180095C80 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180096090 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051B10 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097FD8 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180098C94 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800D36AC (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx
  unsigned int v5; // r8d
  const WCHAR *v6; // rcx
  HSTRING_HEADER *v7; // rax
  std::_Ref_count_base *v8; // rcx
  const WCHAR *v10[2]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER v14; // [rsp+80h] [rbp+27h] BYREF

  v10[1] = (const WCHAR *)a2;
  Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((__int64)v13, a1);
  v3 = v13;
  if ( v13[3] >= 8uLL )
    v3 = (_QWORD *)v13[0];
  Windows::Services::TargetedContent::Internal::ResolveCDMTaskName((__int64)v12, (__int64)v3);
  v4 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
         &v11,
         (__int64 *)a2);
  v6 = (const WCHAR *)v12;
  if ( v12[3] >= 8uLL )
    v6 = (const WCHAR *)v12[0];
  v10[0] = v6;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, v10, v5);
  CreativeFramework::CommonHelper::UnregisterTask(v7[1].Reserved.Reserved1, v4);
  std::wstring::_Tidy(v12, 1, 0LL);
  std::wstring::_Tidy(v13, 1, 0LL);
  v8 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return 0LL;
}
