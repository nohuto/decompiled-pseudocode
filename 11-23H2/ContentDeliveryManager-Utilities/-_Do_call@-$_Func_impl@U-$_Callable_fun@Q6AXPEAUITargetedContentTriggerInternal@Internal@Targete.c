/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_fun@Q6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z$0A@@std@@V?$allocator@V?$_Func_class@XPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@@2@XPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@@std@@UEAAX$$QEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$$QEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@2@@Z @ 0x180096860
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01@@Z @ 0x180051A30 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rax
  _QWORD *v4; // r11
  __int64 (__fastcall *v5)(_QWORD, __int64 *); // r9
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
         v7,
         a3);
  return v5(*v4, v3);
}
