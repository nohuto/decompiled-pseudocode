/*
 * XREFs of ??1?$vector@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1803E9848
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$0 @ 0x1803E9704 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--SelectionData_--_1_.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore_::_1_::dtor$0 @ 0x1803EA317 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--GetSelectionScore_-.c)
 *     _CSnapAssistControllerBase::EndGuidedSnapAssist_::_1_::dtor$0 @ 0x18066AE4E (_CSnapAssistControllerBase--EndGuidedSnapAssist_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::SnapAssistCompleted_::_1_::dtor$0 @ 0x18066BAB3 (_CSnapAssistControllerBase--SnapAssistCompleted_--_1_--dtor$0.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnLocal_::_1_::dtor$1 @ 0x1807183D3 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1807183D3.c)
 *     _XamlSnapAssistViewHost::v_DismissView_::_1_::dtor$0 @ 0x18076FB68 (_XamlSnapAssistViewHost--v_DismissView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<unsigned __int64>::~vector<unsigned __int64>(__int64 a1)
{
  std::vector<unsigned __int64>::_Tidy(a1);
}
