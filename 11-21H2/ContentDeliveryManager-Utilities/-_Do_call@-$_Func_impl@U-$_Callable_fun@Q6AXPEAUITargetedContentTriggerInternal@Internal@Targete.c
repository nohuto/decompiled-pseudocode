/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_fun@Q6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z$0A@@std@@V?$allocator@V?$_Func_class@XPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@@2@XPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@@std@@UEAAX$$QEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$$QEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@2@@Z @ 0x1800A3CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Do_call(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 (__fastcall *v3)(_QWORD, __int128 *); // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(__int64 (__fastcall **)(_QWORD, __int128 *))(a1 + 8);
  v7 = 0LL;
  if ( &v7 != (__int128 *)a3 )
  {
    v4 = a3[1];
    a3[1] = 0LL;
    *((_QWORD *)&v7 + 1) = v4;
    v5 = *a3;
    *a3 = 0LL;
    *(_QWORD *)&v7 = v5;
  }
  return v3(*a2, &v7);
}
