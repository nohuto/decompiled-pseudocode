/*
 * XREFs of ??1?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@QEAA@XZ @ 0x18031B2C0
 * Callers:
 *     _CVirtualDesktopCollection::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18021A245 (_CVirtualDesktopCollection--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$5 @ 0x18021F7E1 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$5.c)
 *     _CVirtualDesktopCollection::GetDesktopCollectionForDesktop_::_1_::dtor$0 @ 0x180223B8C (_CVirtualDesktopCollection--GetDesktopCollectionForDesktop_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$0 @ 0x18031B19C (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--SelectionData_--_1_.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore_::_1_::dtor$0 @ 0x18031BEF7 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--GetSelectionScore_-.c)
 *     _CVirtualDesktopManager::OnMonitorDetached_::_1_::dtor$0 @ 0x180546FA0 (_CVirtualDesktopManager--OnMonitorDetached_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<HMONITOR__ *>::~vector<HMONITOR__ *>(__int64 a1)
{
  return std::vector<HMONITOR__ *>::_Tidy(a1);
}
