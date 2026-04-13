/*
 * XREFs of ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x1800A3120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800564C0 (--0-$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18009D204 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800A33E8 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800B0DCC (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTrigger(
        __int64 a1,
        __int64 a2,
        HSTRING a3,
        char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // edi
  _QWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD v24[3]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-11h] BYREF
  __int64 v26; // [rsp+58h] [rbp-9h]
  __int64 v27[2]; // [rsp+60h] [rbp-1h] BYREF
  __int128 v28; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v29; // [rsp+80h] [rbp+1Fh] BYREF
  _QWORD v30[3]; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  unsigned int v32; // [rsp+D0h] [rbp+6Fh] BYREF

  AcquireSRWLockExclusive(&stru_1801AF2F8);
  v24[1] = &stru_1801AF2F8;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v32);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Windows::Services::TargetedContent::Internal::GetCorrelationVector(&v25, a3);
    v28 = 0LL;
    v10 = v26;
    v11 = v25;
    if ( v26 )
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v28, v11, v10);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(v27, &v28);
    v12 = 0;
    if ( v32 )
    {
      while ( 1 )
      {
        v24[0] = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v12, v24);
        v14 = v13;
        if ( v13 < 0 )
          break;
        v15 = std::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>(
                v30,
                v27);
        v29 = 0LL;
        v16 = v26;
        v17 = v25;
        if ( v26 )
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
        std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v29, v17, v16);
        LOBYTE(v18) = a4;
        v20 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTriggerInternal(
                v19,
                v24[0],
                &v29,
                v18,
                v15);
        v14 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x129,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v20);
          v22 = v24[0];
          if ( v24[0] )
          {
            v24[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          goto LABEL_19;
        }
        v21 = v24[0];
        if ( v24[0] )
        {
          v24[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        if ( ++v12 >= v32 )
          goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v13);
      v23 = v24[0];
      if ( v24[0] )
      {
        v24[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
LABEL_19:
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v27);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v25);
      ReleaseSRWLockExclusive(&stru_1801AF2F8);
      return v14;
    }
    else
    {
LABEL_13:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v27);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v25);
      ReleaseSRWLockExclusive(&stru_1801AF2F8);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    ReleaseSRWLockExclusive(&stru_1801AF2F8);
    return v8;
  }
}
