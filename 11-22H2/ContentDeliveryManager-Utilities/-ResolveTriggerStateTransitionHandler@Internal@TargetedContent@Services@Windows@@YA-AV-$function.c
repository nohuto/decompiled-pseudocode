/*
 * XREFs of ?ResolveTriggerStateTransitionHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentTriggerState@1234@0@Z @ 0x180094558
 * Callers:
 *     _lambda_5773ffaa2db481c158d119d5445c3ad2_::operator() @ 0x180090578 (_lambda_5773ffaa2db481c158d119d5445c3ad2_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerStateTransitionHandler(
        _QWORD *a1,
        int a2,
        int a3)
{
  __int64 v4; // rcx
  _DWORD *i; // rax
  char *v6; // rdx
  char *v7; // rax
  __int64 (__fastcall **v8)(char *, _QWORD *); // r8
  __int64 v9; // rax

  v4 = 0LL;
  for ( i = &unk_1801944C0; ; i += 10 )
  {
    if ( i == (_DWORD *)&unk_180194560 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = Windows::Services::TargetedContent::Internal::NoopTriggerTransition;
      a1[3] = a1;
      return a1;
    }
    if ( *i == a2 && i[1] == a3 )
      break;
  }
  v6 = (char *)(i + 2);
  a1[3] = 0LL;
  v7 = (char *)*((_QWORD *)i + 4);
  if ( v7 )
  {
    v8 = *(__int64 (__fastcall ***)(char *, _QWORD *))v7;
    if ( v7 == v6 )
      v9 = (*v8)(v7, a1);
    else
      v9 = (*v8)(v7, 0LL);
    v4 = v9;
  }
  a1[3] = v4;
  return a1;
}
