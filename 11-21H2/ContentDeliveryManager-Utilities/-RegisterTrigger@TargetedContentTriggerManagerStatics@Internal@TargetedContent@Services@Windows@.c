/*
 * XREFs of ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x18009FED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800564C0 (--0-$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18009D204 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x1800A01AC (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800B0DCC (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTrigger(
        __int64 a1,
        __int64 a2,
        int a3,
        HSTRING a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // edi
  int v13; // eax
  _QWORD *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v22[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h] BYREF
  __int64 v24; // [rsp+50h] [rbp-19h]
  __int64 v25[2]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v26; // [rsp+68h] [rbp-1h] BYREF
  __int128 v27; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v28[3]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v30; // [rsp+D8h] [rbp+6Fh] BYREF

  AcquireSRWLockExclusive(&stru_1801AF2F8);
  v22[1] = &stru_1801AF2F8;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    ReleaseSRWLockExclusive(&stru_1801AF2F8);
    return v8;
  }
  Windows::Services::TargetedContent::Internal::GetCorrelationVector(&v23, a4);
  v26 = 0LL;
  v10 = v24;
  v11 = v23;
  if ( v24 )
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v26, v11, v10);
  CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(v25, &v26);
  v12 = 0;
  if ( v30 )
  {
    while ( 1 )
    {
      v22[0] = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v12, v22);
      v8 = v13;
      if ( v13 < 0 )
        break;
      v14 = std::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>(
              v28,
              v25);
      v27 = 0LL;
      v15 = v24;
      v16 = v23;
      if ( v24 )
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v27, v16, v15);
      v18 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
              v17,
              v22[0],
              a3,
              (unsigned int)&v27,
              (__int64)v14);
      v8 = v18;
      if ( ((v18 + 0x80000000) & 0x80000000) == 0 && v18 != -2147483638 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC5,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)v18);
        v20 = v22[0];
        if ( v22[0] )
        {
          v22[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_18;
      }
      v19 = v22[0];
      if ( v22[0] )
      {
        v22[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( ++v12 >= v30 )
        goto LABEL_15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v13);
    v21 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
LABEL_18:
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v25);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v23);
    ReleaseSRWLockExclusive(&stru_1801AF2F8);
    return v8;
  }
LABEL_15:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v25);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v23);
  ReleaseSRWLockExclusive(&stru_1801AF2F8);
  return 0LL;
}
