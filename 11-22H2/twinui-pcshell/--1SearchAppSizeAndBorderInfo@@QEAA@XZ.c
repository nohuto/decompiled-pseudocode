/*
 * XREFs of ??1SearchAppSizeAndBorderInfo@@QEAA@XZ @ 0x180466518
 * Callers:
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1802B9887 (_SearchBoxOnTaskbarSearchAppPositioner--GetAppRectAndClippingRegion_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$2 @ 0x1802B9939 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$2.c)
 *     _SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion_::_1_::dtor$1 @ 0x1802C55D2 (_SearchBoxOnTaskbarSearchAppPositioner--GetSearchBoxOnTaskbarAppRectAndClippingRegion_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall SearchAppSizeAndBorderInfo::~SearchAppSizeAndBorderInfo(SearchAppSizeAndBorderInfo *this)
{
  std::vector<tagRECT>::_Tidy((__int64 *)this + 9);
}
