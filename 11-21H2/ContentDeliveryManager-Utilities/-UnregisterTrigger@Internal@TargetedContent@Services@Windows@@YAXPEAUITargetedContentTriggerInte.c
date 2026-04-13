/*
 * XREFs of ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A2E70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009C22C (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ?ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800A6AE4 (-ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJP.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800A6C0C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A6E94 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x1800A9544 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800B0DCC (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::UnregisterTrigger(
        Windows::Services::TargetedContent::Internal *this,
        __int64 *a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // eax
  char v9; // bl
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v10; // rdx
  bool v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, _QWORD *); // rbx
  _QWORD *CreativeRule; // rax
  _BYTE *v20; // rcx
  _BYTE *v21; // rdx
  _BYTE *v22; // rdx
  unsigned int v24; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v25[2]; // [rsp+28h] [rbp-51h] BYREF
  __int128 v26; // [rsp+38h] [rbp-41h] BYREF
  __int128 v27; // [rsp+48h] [rbp-31h] BYREF
  __int128 v28; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v29[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp+7h] BYREF
  _BYTE v31[24]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE *v32; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v29[2] = a2;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)this + 80LL))(
         this,
         &v24);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      125LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4,
      v24);
  Windows::Services::TargetedContent::Internal::ResolveTriggerCleanupHandler(v31, v24);
  v26 = 0LL;
  v5 = a2[1];
  v6 = *a2;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v26, v6, v5);
  v25[1] = &v26;
  v25[0] = this;
  if ( !v32 )
    std::_Xbad_function_call();
  v7 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *, __int128 *))(*(_QWORD *)v32 + 16LL))(v32, v25, &v26);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v26);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      127LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7,
      v24);
  v8 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v24);
  v9 = v8;
  v10 = (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)(v8 >> 8);
  LOBYTE(v10) = BYTE1(v8) & 1;
  if ( Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(this, v10, v11) )
  {
    if ( (v9 & 1) != 0 && (v9 & 4) == 0 )
    {
      v27 = 0LL;
      v12 = a2[1];
      v13 = *a2;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v27, v13, v12);
      v14 = Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(this, &v27);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          135LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v14,
          v24);
    }
    if ( (v9 & 0x20) != 0 )
    {
      v28 = 0LL;
      v15 = a2[1];
      v16 = *a2;
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v28, v16, v15);
      CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(v29, &v28);
      v17 = v29[0];
      v18 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v29[0] + 8LL);
      CreativeRule = Windows::Services::TargetedContent::Internal::CreateCreativeRule(v30, (__int64)this);
      v18(v17, CreativeRule);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v30);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v29);
    }
  }
  v20 = v32;
  if ( v32 )
  {
    v21 = v31;
    LOBYTE(v21) = v32 != v31;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v32 + 32LL))(v32, v21);
    v20 = 0LL;
    v32 = 0LL;
  }
  if ( v20 )
  {
    v22 = v31;
    LOBYTE(v22) = v20 != v31;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v20 + 32LL))(v20, v22);
    v32 = 0LL;
  }
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a2);
}
