/*
 * XREFs of ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180093560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180051AB4 (--0-$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051B10 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18009152C (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18009379C (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800A1F10 (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTrigger(
        __int64 a1,
        __int64 a2,
        int a3,
        HSTRING a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  unsigned int i; // edi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  _QWORD *v13; // rbx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v18; // [rsp+38h] [rbp-29h] BYREF
  RTL_SRWLOCK *v19; // [rsp+40h] [rbp-21h] BYREF
  __int64 v20; // [rsp+50h] [rbp-11h] BYREF
  std::_Ref_count_base *v21; // [rsp+58h] [rbp-9h]
  __int64 v22; // [rsp+60h] [rbp-1h] BYREF
  std::_Ref_count_base *v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v26[3]; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  unsigned int v28; // [rsp+D0h] [rbp+6Fh] BYREF

  AcquireSRWLockExclusive(&stru_1801963C0);
  v19 = &stru_1801963C0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v28);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Windows::Services::TargetedContent::Internal::GetCorrelationVector((char *)&v22, a4);
    v9 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           &v24,
           &v22);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v20, v9);
    for ( i = 0; i < v28; ++i )
    {
      v18 = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      v12 = v11(a2, i, &v18);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
        goto LABEL_24;
      }
      v13 = std::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>(
              &v25,
              &v20);
      v14 = (unsigned int)std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
                            v26,
                            &v22);
      v16 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
              v15,
              v18,
              a3,
              v14,
              (__int64)v13);
      v8 = v16;
      if ( ((v16 + 0x80000000) & 0x80000000) == 0 && v16 != -2147483638 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC5,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)v16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
        goto LABEL_24;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_24:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
  return v8;
}
