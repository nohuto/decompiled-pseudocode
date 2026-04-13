/*
 * XREFs of ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180096040
 * Callers:
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x180095E20 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051AC0 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x1800532D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x18008DC10 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18008EF34 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18008EF34.c)
 *     ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18008F77C (--0-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18008FE8C (--1TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x180090684 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180090A7C (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ?StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180094CE4 (-StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ?Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180095278 (-Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 *     ?ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180098F6C (-ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJP.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800990C4 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180099348 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x18009BC38 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009D324 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009E28C (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18009EFFC (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTriggerInternal(
        __int64 a1,
        Windows::Services::TargetedContent::Internal *a2,
        __int64 *a3,
        char a4,
        _QWORD *a5)
{
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // eax
  bool v15; // r8
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v16; // rdx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, _QWORD *); // r15
  _QWORD *v21; // rax
  int v22; // eax
  const char *v23; // r9
  std::_Ref_count_base *v24; // rcx
  std::_Ref_count_base *v25; // rcx
  std::_Ref_count_base *v27; // rcx
  std::_Ref_count_base *v28; // rcx
  unsigned int v29[4]; // [rsp+20h] [rbp-1F8h] BYREF
  _QWORD *v30; // [rsp+30h] [rbp-1E8h] BYREF
  std::_Ref_count_base *v31; // [rsp+38h] [rbp-1E0h]
  __int64 *v32; // [rsp+40h] [rbp-1D8h]
  __int64 v33; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 *v34; // [rsp+60h] [rbp-1B8h]
  _QWORD *v35; // [rsp+68h] [rbp-1B0h]
  __int64 v36; // [rsp+70h] [rbp-1A8h] BYREF
  std::_Ref_count_base *v37; // [rsp+78h] [rbp-1A0h]
  _BYTE v38[32]; // [rsp+80h] [rbp-198h] BYREF
  _QWORD v39[40]; // [rsp+A0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]
  char v41; // [rsp+238h] [rbp+20h] BYREF

  v41 = a4;
  v34 = a3;
  v7 = a5;
  v35 = a5;
  v8 = *a3;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v39,
    (__int64)"TriggerManagerUnregisterActivity");
  try
  {
    v39[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::`vftable';
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::StartActivity(
      (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *)v39,
      (const char *)(v8 + 8));
    v9 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)a2 + 80LL))(
           a2,
           v29);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v9,
        v29[0]);
    if ( !v29[0] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)0x80070057LL,
        0);
    v10 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v29[0]);
    Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(&v36, a2);
    if ( v41 )
    {
      v11 = std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
              &v33,
              &v36);
      Windows::Services::TargetedContent::Internal::RemoveRegisteredTrigger(v11, a2);
    }
    else
    {
      v12 = std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
              &v30,
              &v36);
      Windows::Services::TargetedContent::Internal::SetTriggerState(v12, a2, 3LL);
    }
    Windows::Services::TargetedContent::Internal::ResolveTriggerCleanupHandler(v38, v29[0]);
    v13 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
            &v30,
            a3);
    v14 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
            (__int64)v38,
            (__int64)a2,
            (__int64)v13);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x143,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v14,
        v29[0]);
    v16 = (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)(v10 >> 8);
    LOBYTE(v16) = BYTE1(v10) & 1;
    if ( Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(a2, v16, v15) )
    {
      if ( (v10 & 1) != 0 && (v10 & 4) == 0 )
      {
        v17 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
                &v30,
                a3);
        v18 = Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(a2, v17);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x14A,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v18,
            v29[0]);
      }
      if ( (v10 & 0x20) != 0 )
      {
        v19 = *v7;
        v20 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*v7 + 8LL);
        v21 = Windows::Services::TargetedContent::Internal::CreateCreativeRule(&v30, (__int64)a2);
        v20(v19, v21);
        if ( v31 )
          std::_Ref_count_base::_Decref(v31);
      }
    }
    v30 = v39;
    v31 = (std::_Ref_count_base *)&v41;
    v32 = a3;
    v22 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___(
            (__int64)a2,
            (__int64)&v30);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x157,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v22,
        v29[0]);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::Stop(
      (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *)v39,
      (const char *)(*a3 + 8));
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v38);
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::~TriggerManagerUnregisterActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *)v39);
  }
  catch ( ... )
  {
    v29[0] = wil::details::in1diag3::Return_CaughtException(
               retaddr,
               (void *)0x15B,
               (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
               v23);
    v27 = (std::_Ref_count_base *)v34[1];
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    v28 = (std::_Ref_count_base *)v35[1];
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    return v29[0];
  }
  v24 = (std::_Ref_count_base *)a3[1];
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  v25 = (std::_Ref_count_base *)v7[1];
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  return 0LL;
}
