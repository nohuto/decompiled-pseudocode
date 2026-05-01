/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18022CCCC
 * Callers:
 *     _TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$0 @ 0x180319E5A (_TaskbarLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x18031A004 (_TaskbarLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$0 @ 0x1803BC9B8 (_PWSLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x1803BCB2D (_PWSLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$2 @ 0x180473CC0 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$2.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$2 @ 0x180475499 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$2.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$2 @ 0x1804FE7FA (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$2.c)
 *     _CSnapAssistControllerBase::StartGuidedSnapAssist_::_1_::dtor$0 @ 0x18059D462 (_CSnapAssistControllerBase--StartGuidedSnapAssist_--_1_--dtor$0.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$3 @ 0x18059DF15 (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$3.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::GetOtherColumns_::_1_::dtor$0 @ 0x1805A433C (_SnapLayoutHelpers--AdvancedSmartFill--GetOtherColumns_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$0 @ 0x1805B4B8B (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--SnapW.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema_::_1_::dtor$0 @ 0x1805E4804 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--LoadSchema_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$0 @ 0x1805E4AA3 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  std::vector<Geometry::CRect>::_Tidy(a1);
}
