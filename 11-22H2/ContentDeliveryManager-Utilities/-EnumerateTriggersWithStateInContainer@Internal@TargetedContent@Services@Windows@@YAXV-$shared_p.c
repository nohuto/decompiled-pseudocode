/*
 * XREFs of ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009CE70
 * Callers:
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x18009BC88 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x18009DD88 (-GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettings.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x180053324 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18008F7CC (--0-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180098DA8 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009C698 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  char *v5; // rax
  __int64 *v6; // rax
  std::_Ref_count_base *v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-19h] BYREF
  __int128 v10; // [rsp+30h] [rbp-9h]
  __int64 *v11; // [rsp+40h] [rbp+7h]
  __int64 v12; // [rsp+48h] [rbp+Fh] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+1Fh] BYREF
  char *v14; // [rsp+70h] [rbp+37h]
  __int64 v15; // [rsp+78h] [rbp+3Fh]

  v11 = a1;
  v15 = a3;
  v9[0] = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(2);
  v9[1] = v13;
  *(_QWORD *)&v10 = v9;
  *((_QWORD *)&v10 + 1) = a3;
  v14 = 0LL;
  v5 = (char *)operator new(0x20uLL);
  if ( !v5 )
    std::_Xbad_alloc();
  *(_QWORD *)v5 = off_1800E94B8;
  *(_OWORD *)(v5 + 8) = v10;
  v14 = v5;
  v6 = std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
         &v12,
         a1);
  Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(v6, (__int64)v13);
  v7 = (std::_Ref_count_base *)a1[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(a3);
}
