/*
 * XREFs of ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180095C80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051B10 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x180053324 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x1800906D4 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180090ACC (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ?ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180098FBC (-ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJP.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180099114 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180099398 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x18009BC88 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800A1F10 (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Windows::Services::TargetedContent::Internal::UnregisterTrigger(
        Windows::Services::TargetedContent::Internal *this,
        __int64 *a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  int v6; // eax
  unsigned int v7; // eax
  char v8; // bl
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v9; // rdx
  bool v10; // r8
  _QWORD *v11; // rax
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // r14
  void (__fastcall *v15)(__int64, _QWORD *); // rbx
  _QWORD *v16; // rax
  std::_Ref_count_base *v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-29h] BYREF
  __int64 v19; // [rsp+28h] [rbp-21h] BYREF
  std::_Ref_count_base *v20; // [rsp+30h] [rbp-19h]
  __int64 *v21; // [rsp+38h] [rbp-11h]
  __int64 v22; // [rsp+40h] [rbp-9h] BYREF
  __int64 v23; // [rsp+50h] [rbp+7h] BYREF
  std::_Ref_count_base *v24; // [rsp+58h] [rbp+Fh]
  _BYTE v25[32]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v21 = a2;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)this + 80LL))(
         this,
         &v18);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4,
      v18);
  Windows::Services::TargetedContent::Internal::ResolveTriggerCleanupHandler(v25, v18);
  v5 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
         &v19,
         a2);
  v6 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
         (__int64)v25,
         (__int64)this,
         (__int64)v5);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v6,
      v18);
  v7 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v18);
  v8 = v7;
  v9 = (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)(v7 >> 8);
  LOBYTE(v9) = BYTE1(v7) & 1;
  if ( Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(this, v9, v10) )
  {
    if ( (v8 & 1) != 0 && (v8 & 4) == 0 )
    {
      v11 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
              &v19,
              a2);
      v12 = Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(this, v11);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x87,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v12,
          v18);
    }
    if ( (v8 & 0x20) != 0 )
    {
      v13 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
              &v22,
              a2);
      CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v19, v13);
      v14 = v19;
      v15 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 8LL);
      v16 = Windows::Services::TargetedContent::Internal::CreateCreativeRule(&v23, (__int64)this);
      v15(v14, v16);
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
  }
  std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v25);
  v17 = (std::_Ref_count_base *)a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
