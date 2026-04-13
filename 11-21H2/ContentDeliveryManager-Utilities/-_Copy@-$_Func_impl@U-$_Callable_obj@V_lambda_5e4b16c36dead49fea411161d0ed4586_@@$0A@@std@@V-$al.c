/*
 * XREFs of ?_Copy@?$_Func_impl@U?$_Callable_obj@V_lambda_5e4b16c36dead49fea411161d0ed4586_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@std@@U67@U67@U67@U67@@std@@@2@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@2@U92@U92@U92@U92@@std@@UEAAPEAV?$_Func_base@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@std@@U67@U67@U67@U67@@2@PEAX@Z @ 0x1800C2210
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

char *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_5e4b16c36dead49fea411161d0ed4586_,0>,std::allocator<std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Copy(
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
  *(_QWORD *)a2 = &std::_Func_impl<std::_Callable_obj<_lambda_5e4b16c36dead49fea411161d0ed4586_,0>,std::allocator<std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
