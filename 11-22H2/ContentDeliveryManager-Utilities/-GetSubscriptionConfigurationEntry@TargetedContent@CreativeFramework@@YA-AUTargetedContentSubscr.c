/*
 * XREFs of ?GetSubscriptionConfigurationEntry@TargetedContent@CreativeFramework@@YA?AUTargetedContentSubscriptionConfiguration@12@PEBG@Z @ 0x1800597E4
 * Callers:
 *     ?ResolveIsCriticalHealthEnabledForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA_NPEBG@Z @ 0x18005D588 (-ResolveIsCriticalHealthEnabledForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Healt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004960 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x180053324 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::TargetedContent::GetSubscriptionConfigurationEntry(__int64 a1, __int64 a2)
{
  char *v3; // rcx
  wchar_t **i; // rdi
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-48h]
  char v8[24]; // [rsp+30h] [rbp-38h] BYREF
  char *v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  *(_OWORD *)a1 = *(_OWORD *)&off_1800EBED8;
  *(_OWORD *)(a1 + 16) = xmmword_1800EBEE8;
  *(_QWORD *)(a1 + 32) = 3600LL;
  *(_QWORD *)&v7 = &v10;
  *((_QWORD *)&v7 + 1) = a1;
  v9 = 0LL;
  v3 = (char *)operator new(0x20uLL);
  if ( !v3 )
    std::_Xbad_alloc();
  *(_QWORD *)v3 = &std::_Func_impl<std::_Callable_obj<_lambda_e475c25afe6ff700c51d270fc6441ea7_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  *(_OWORD *)(v3 + 8) = v7;
  v9 = v3;
  for ( i = off_180194210; i != (wchar_t **)&unk_1801944B8; i += 5 )
  {
    if ( !v3 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(char *, wchar_t **))(*(_QWORD *)v3 + 16LL))(v3, i) )
      break;
    v3 = v9;
  }
  std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v8);
  v5 = *(_DWORD *)(a1 + 16);
  if ( (v5 & 0x80u) != 0 )
    *(_DWORD *)(a1 + 16) = v5 | 1;
  return a1;
}
