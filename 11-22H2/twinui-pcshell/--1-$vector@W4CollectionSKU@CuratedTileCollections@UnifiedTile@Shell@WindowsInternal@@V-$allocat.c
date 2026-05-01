/*
 * XREFs of ??1?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x1803E98B4
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x18022AE2C (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_18022AE2C.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::EdgeAnimationRelationshipManager_::_1_::dtor$1 @ 0x1802B6818 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6818.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::EdgeAnimationRelationshipManager_::_1_::dtor$3 @ 0x1802B683C (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B683C.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::EdgeAnimationRelationshipManager_::_1_::dtor$5 @ 0x1802B6860 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6860.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::EdgeAnimationRelationshipManager_::_1_::dtor$7 @ 0x1802B6884 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6884.c)
 *     __anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_::_1_::dtor$0 @ 0x1802B7336 (__anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$1 @ 0x1803E9714 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_1803E9714.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$2 @ 0x1803E9724 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_1803E9724.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU_::_1_::dtor$1 @ 0x1803E9EF4 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Contai_ea_1803E9EF4.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore_::_1_::dtor$2 @ 0x1803EA323 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--GetSel_ea_1803EA323.c)
 *     _GetColorFromColorString_::_1_::dtor$0 @ 0x18050FE31 (_GetColorFromColorString_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow_::_1_::dtor$0 @ 0x180647DD7 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--GetUnoccluded.c)
 *     _CSnapAssistControllerBase::EndGuidedSnapAssist_::_1_::dtor$1 @ 0x18066AE5A (_CSnapAssistControllerBase--EndGuidedSnapAssist_--_1_--dtor$1.c)
 *     _XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor$20 @ 0x18076BEFE (_XamlSnapAssistViewHost--CreateSnapAssistControl_--_1_--dtor$20.c)
 *     _XamlSnapAssistViewHost::v_DismissView_::_1_::dtor$1 @ 0x18076FB74 (_XamlSnapAssistViewHost--v_DismissView_--_1_--dtor$1.c)
 *     _SnapAssistState::SnapAssistState_::_1_::dtor$1 @ 0x18078B123 (_SnapAssistState--SnapAssistState_--_1_--dtor$1.c)
 *     _SnapAssistState::SnapAssistState_::_1_::dtor$3 @ 0x18078B143 (_SnapAssistState--SnapAssistState_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::~vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>(
        __int64 a1)
{
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a1);
}
