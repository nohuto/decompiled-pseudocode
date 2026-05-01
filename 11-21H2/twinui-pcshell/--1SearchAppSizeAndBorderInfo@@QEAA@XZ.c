/*
 * XREFs of ??1SearchAppSizeAndBorderInfo@@QEAA@XZ @ 0x18019BEA8
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1801A57CB (_SearchBoxOnTaskbarSearchAppPositioner--GetAppRectAndClippingRegion_--_1_--dtor$1.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1801A5C72 (_SearchBoxOnTaskbarSearchAppPositioner--GetSearchBoxOnTaskbarAppRectAndClippingRegion_--_1_--dto.c)
 *     _TaskbarSearchAppPositioner::GetAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1801A6B18 (_TaskbarSearchAppPositioner--GetAppRectAndClippingRegion_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$2 @ 0x180217876 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall SearchAppSizeAndBorderInfo::~SearchAppSizeAndBorderInfo(SearchAppSizeAndBorderInfo *this)
{
  std::vector<Geometry::CRect>::_Tidy((char *)this + 72);
}
