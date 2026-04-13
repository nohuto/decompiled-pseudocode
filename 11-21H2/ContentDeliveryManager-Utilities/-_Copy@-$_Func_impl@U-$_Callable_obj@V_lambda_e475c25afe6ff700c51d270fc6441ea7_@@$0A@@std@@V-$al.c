/*
 * XREFs of ?_Copy@?$_Func_impl@U?$_Callable_obj@V_lambda_e475c25afe6ff700c51d270fc6441ea7_@@$0A@@std@@V?$allocator@V?$_Func_class@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@@2@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@2@U72@U72@U72@U72@U72@@std@@UEAAPEAV?$_Func_base@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@2@PEAX@Z @ 0x180066BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_e475c25afe6ff700c51d270fc6441ea7_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Copy(
        __int64 a1,
        char *a2)
{
  char *result; // rax

  if ( !a2 )
  {
    a2 = (char *)operator new(0x20uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *(_QWORD *)a2 = &std::_Func_impl<std::_Callable_obj<_lambda_e475c25afe6ff700c51d270fc6441ea7_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
