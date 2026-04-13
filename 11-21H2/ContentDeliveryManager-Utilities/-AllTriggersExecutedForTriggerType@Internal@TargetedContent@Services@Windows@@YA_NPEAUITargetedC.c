/*
 * XREFs of ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x1800A9544
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A2E70 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800A33E8 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AADA4 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800AB380 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AB6C4 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2)
{
  char v2; // di
  int v4; // eax
  __int64 RootRegistrationSettingsForTriggerContainer; // rax
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // bl
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  char v18; // [rsp+A0h] [rbp+20h] BYREF
  int v19; // [rsp+B0h] [rbp+30h]
  unsigned int v20; // [rsp+B8h] [rbp+38h] BYREF

  v2 = (char)a2;
  v19 = 0;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)this + 80LL))(
         this,
         &v20);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      303LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4,
      v12);
  if ( v2 )
  {
    RootRegistrationSettingsForTriggerContainer = Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(
                                                    v15,
                                                    v20);
    v6 = 1;
  }
  else
  {
    RootRegistrationSettingsForTriggerContainer = Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
                                                    v14,
                                                    this);
    v6 = 2;
  }
  v19 = v6;
  v13 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( &v13 != (__int128 *)RootRegistrationSettingsForTriggerContainer )
  {
    v7 = *(_QWORD *)(RootRegistrationSettingsForTriggerContainer + 8);
    *((_QWORD *)&v13 + 1) = v7;
    *(_QWORD *)(RootRegistrationSettingsForTriggerContainer + 8) = 0LL;
    v8 = *(_QWORD *)RootRegistrationSettingsForTriggerContainer;
    *(_QWORD *)&v13 = *(_QWORD *)RootRegistrationSettingsForTriggerContainer;
    *(_QWORD *)RootRegistrationSettingsForTriggerContainer = 0LL;
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    v19 = v6;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v14);
  }
  if ( (v6 & 1) != 0 )
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v15);
  v18 = 1;
  v16[0] = off_1801066E0;
  v16[1] = &v18;
  v16[3] = v16;
  v12 = 0LL;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v12, v8, v7);
  Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(&v12, v9, v16);
  v10 = v18;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v13);
  return v10;
}
