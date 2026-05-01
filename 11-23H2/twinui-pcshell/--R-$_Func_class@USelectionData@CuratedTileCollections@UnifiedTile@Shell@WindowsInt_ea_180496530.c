/*
 * XREFs of ??R?$_Func_class@USelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@std@@QEBA?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z @ 0x180496530
 * Callers:
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x180495CBC (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData,ParsedPenWorkspaceLayout const &>::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a2;
}
