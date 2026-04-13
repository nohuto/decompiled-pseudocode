/*
 * XREFs of ??$?0V_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@QEAA@$$QEAV_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@Z @ 0x1800AB770
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800ADE34 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<bool (wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *)>::function<bool (wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *)>(
        __int64 a1,
        _OWORD *a2)
{
  char *v4; // rax

  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = (char *)operator new(0x20uLL);
  if ( !v4 )
    std::_Xbad_alloc();
  *(_QWORD *)v4 = &std::_Func_impl<std::_Callable_obj<_lambda_6bc2a757313ab37e766f9d0f904bfdba_,0>,std::allocator<std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  *(_OWORD *)(v4 + 8) = *a2;
  *(_QWORD *)(a1 + 24) = v4;
  return a1;
}
