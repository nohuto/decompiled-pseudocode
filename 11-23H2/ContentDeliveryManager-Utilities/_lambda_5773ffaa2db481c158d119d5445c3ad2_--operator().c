/*
 * XREFs of _lambda_5773ffaa2db481c158d119d5445c3ad2_::operator() @ 0x180090528
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_5773ffaa2db481c158d119d5445c3ad2__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800968A0 (std--_Func_impl_std--_Callable_obj__lambda_5773ffaa2db481c158d119d5445c3ad2__0__std_ea_1800968A0.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004960 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051AC0 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x1800532D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10f0d32e6c43ea5___ @ 0x18008CEA8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10.c)
 *     ?ResolveTriggerStateTransitionHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentTriggerState@1234@0@Z @ 0x180094508 (-ResolveTriggerStateTransitionHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5773ffaa2db481c158d119d5445c3ad2_::operator()(
        __int64 **a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 *v5; // rsi
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  std::_Ref_count_base *v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-29h] BYREF
  unsigned int *v12[5]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  unsigned int v16; // [rsp+C0h] [rbp+77h] BYREF
  unsigned int v17; // [rsp+C8h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a3;
  v5 = *a1;
  Windows::Services::TargetedContent::Internal::ResolveTriggerStateTransitionHandler(v13, a3, a4);
  v6 = (unsigned int *)std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
                         v12,
                         v5);
  v7 = v6;
  v12[4] = v6;
  v11 = a2;
  if ( !v14 )
    std::_Xbad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v14 + 16LL))(v14, &v11, v6);
  v8 = (std::_Ref_count_base *)*((_QWORD *)v7 + 1);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v12[0] = &v16;
  v12[1] = &v17;
  v12[2] = (unsigned int *)v5;
  v9 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10f0d32e6c43ea5___(
         a2,
         v12);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v9,
      v11);
  return std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v13);
}
