/*
 * XREFs of ??1?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x1801C476C
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800FA308 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     __anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_::_1_::dtor$0 @ 0x1801C4354 (__anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetTaskbarTelemetryFromContext_::_1_::dtor$13 @ 0x1801C89F6 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetTaskbarTelem_ea_1801C89F6.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent_::_1_::dtor$2 @ 0x18021E0FF (_winrt--Windows--Internal--Shell--implementation--DashboardManager--IsDashboardExte_ea_18021E0FF.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$1 @ 0x18031B1AC (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_18031B1AC.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$2 @ 0x18031B1BC (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Select_ea_18031B1BC.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU_::_1_::dtor$1 @ 0x18031B954 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--Contai_ea_18031B954.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore_::_1_::dtor$2 @ 0x18031BF03 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--GetSel_ea_18031BF03.c)
 *     _std::_Construct_in_place_TwinUI::Lighting::AssistantLightStrip_Microsoft::WRL::ComPtr_Windows::Devices::Lights::ILampArray__&_std::vector_int_std::allocator_int____&_std::vector_int_std::allocator_int____&__::_1_::dtor$0 @ 0x18055F66D (_std--_Construct_in_place_TwinUI--Lighting--AssistantLightStrip_Microsoft--WRL--ComPtr_Windows--.c)
 *     _TwinUI::Lighting::AssistantLightFactory::GetAssistantLight_::_1_::dtor$4 @ 0x180560AEE (_TwinUI--Lighting--AssistantLightFactory--GetAssistantLight_--_1_--dtor$4.c)
 *     _TwinUI::Lighting::AssistantLightFactory::GetAssistantLight_::_1_::dtor$5 @ 0x180560AFA (_TwinUI--Lighting--AssistantLightFactory--GetAssistantLight_--_1_--dtor$5.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$0 @ 0x180561289 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$0.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$1 @ 0x180561295 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$5 @ 0x1805612C9 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$5.c)
 *     _TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip_::_1_::dtor$6 @ 0x1805612D9 (_TwinUI--Lighting--AssistantLightStrip--AssistantLightStrip_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow_::_1_::dtor$0 @ 0x180589D3F (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--GetUnoccluded.c)
 *     _CSnapAssistControllerBase::EndGuidedSnapAssist_::_1_::dtor$0 @ 0x18059C4E4 (_CSnapAssistControllerBase--EndGuidedSnapAssist_--_1_--dtor$0.c)
 *     _XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor$13 @ 0x180601F33 (_XamlSnapAssistViewHost--CreateSnapAssistControl_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::~vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>(
        __int64 a1)
{
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a1);
}
