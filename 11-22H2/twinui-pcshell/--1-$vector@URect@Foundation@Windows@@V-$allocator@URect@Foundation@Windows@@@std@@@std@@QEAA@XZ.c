/*
 * XREFs of ??1?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@XZ @ 0x1803E5F70
 * Callers:
 *     _TaskbarLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x1802D273E (_TaskbarLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$0 @ 0x1802EB9F9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$0 @ 0x1803E8882 (_TaskbarLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$0 @ 0x180495943 (_PWSLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x180495AC4 (_PWSLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1805164C0 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$1 @ 0x1805168D8 (_TouchKeyboardExperienceManager--Show_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$2 @ 0x18052643C (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$2.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$2 @ 0x180526FEF (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$2.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$3 @ 0x180662ABA (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$3.c)
 *     _CSnapAssistControllerBase::StartGuidedSnapAssist_::_1_::dtor$0 @ 0x18066C2E2 (_CSnapAssistControllerBase--StartGuidedSnapAssist_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$3 @ 0x18066CE8D (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$3.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistWithRegions_::_1_::dtor$2 @ 0x18066D203 (_CSnapAssistControllerBase--TriggerSnapAssistWithRegions_--_1_--dtor$2.c)
 *     _SnapLayoutHelpers::GetOtherColumns_::_1_::dtor$0 @ 0x180671F40 (_SnapLayoutHelpers--GetOtherColumns_--_1_--dtor$0.c)
 *     _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$0 @ 0x18067A888 (_SnapFlyoutHost--GetGuidedSnapAssistRegions_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$0 @ 0x180685433 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--SnapW.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema_::_1_::dtor$0 @ 0x180739240 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--LoadSchema_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Windows::Foundation::Rect>::~vector<Windows::Foundation::Rect>(__int64 a1)
{
  std::vector<Geometry::CRect>::_Tidy(a1);
}
