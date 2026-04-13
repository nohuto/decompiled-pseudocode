/*
 * XREFs of ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18009FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009C22C (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ?ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TriggerRegistrationOption@1234@@Z @ 0x1800A6A44 (-ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800A6C0C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800A6C60 (-ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800B0DCC (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTrigger(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // eax
  char v6; // bl
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // edi
  _BYTE *v10; // rcx
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, _QWORD *); // rbx
  _QWORD *CreativeRule; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ebx
  _BYTE *v21; // rcx
  _BYTE *v22; // rdx
  _BYTE *v23; // rdx
  unsigned int v25; // [rsp+20h] [rbp-79h] BYREF
  __int128 *v26; // [rsp+28h] [rbp-71h]
  __int64 v27; // [rsp+30h] [rbp-69h] BYREF
  __int128 v28; // [rsp+38h] [rbp-61h] BYREF
  __int128 v29; // [rsp+48h] [rbp-51h] BYREF
  __int64 v30; // [rsp+58h] [rbp-41h] BYREF
  __int128 v31; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v32[3]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v34[24]; // [rsp+98h] [rbp-1h] BYREF
  _BYTE *v35; // [rsp+B0h] [rbp+17h]
  _BYTE v36[24]; // [rsp+B8h] [rbp+1Fh] BYREF
  _BYTE *v37; // [rsp+D0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v32[2] = a2;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v25);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      103LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4,
      v25);
  v5 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v25);
  v6 = v5;
  if ( (v5 & 8) != 0 )
  {
    Windows::Services::TargetedContent::Internal::ResolveRegisterTaskHandler(v36, v5);
    v28 = 0LL;
    v7 = a2[1];
    v8 = *a2;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v28, v8, v7);
    v26 = &v28;
    v30 = a1;
    if ( !v37 )
      std::_Xbad_function_call();
    v9 = (*(__int64 (__fastcall **)(_BYTE *, __int64 *, __int128 *))(*(_QWORD *)v37 + 16LL))(v37, &v30, &v28);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v28);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        108LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v9,
        v25);
    v10 = v37;
    if ( v37 )
    {
      v11 = v36;
      LOBYTE(v11) = v37 != v36;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v37 + 32LL))(v37, v11);
      v10 = 0LL;
      v37 = 0LL;
    }
    if ( v10 )
    {
      v12 = v36;
      LOBYTE(v12) = v10 != v36;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v10 + 32LL))(v10, v12);
    }
  }
  if ( (v6 & 0x20) != 0 )
  {
    v31 = 0LL;
    v13 = a2[1];
    v14 = *a2;
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v31, v14, v13);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(v32, &v31);
    v15 = v32[0];
    v16 = **(void (__fastcall ***)(__int64, _QWORD *))v32[0];
    CreativeRule = Windows::Services::TargetedContent::Internal::CreateCreativeRule(v33, a1);
    v16(v15, CreativeRule);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v33);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v32);
  }
  Windows::Services::TargetedContent::Internal::ResolveTriggerSetupHandler(v34, v25);
  v29 = 0LL;
  v18 = a2[1];
  v19 = *a2;
  if ( v18 )
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v29, v19, v18);
  v26 = &v29;
  v27 = a1;
  if ( !v35 )
    std::_Xbad_function_call();
  v20 = (*(__int64 (__fastcall **)(_BYTE *, __int64 *, __int128 *))(*(_QWORD *)v35 + 16LL))(v35, &v27, &v29);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v29);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      119LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v20,
      v25);
  v21 = v35;
  if ( v35 )
  {
    v22 = v34;
    LOBYTE(v22) = v35 != v34;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v35 + 32LL))(v35, v22);
    v21 = 0LL;
    v35 = 0LL;
  }
  if ( v21 )
  {
    v23 = v34;
    LOBYTE(v23) = v21 != v34;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v23);
    v35 = 0LL;
  }
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a2);
}
