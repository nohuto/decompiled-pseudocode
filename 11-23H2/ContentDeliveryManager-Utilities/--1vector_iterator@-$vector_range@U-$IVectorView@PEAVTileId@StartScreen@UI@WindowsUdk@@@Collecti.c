/*
 * XREFs of ??1vector_iterator@?$vector_range@U?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006E76C
 * Callers:
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$1 @ 0x1800D7BFB (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$1.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$2 @ 0x1800D7C0D (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInCollection_::_1_::dtor$2 @ 0x1800DCC93 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedCo_ea_1800DCC93.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInCollection_::_1_::dtor$3 @ 0x1800DCCA5 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedCo_ea_1800DCCA5.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$4 @ 0x1800DCDD7 (_StartDocked--GetStartDefaultPins_--_1_--dtor$4.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$5 @ 0x1800DCDE9 (_StartDocked--GetStartDefaultPins_--_1_--dtor$5.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$1 @ 0x1800DD137 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800DD137.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$2 @ 0x1800DD149 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800DD149.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$7 @ 0x1800DD191 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800DD191.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$8 @ 0x1800DD1A3 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800DD1A3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
}
