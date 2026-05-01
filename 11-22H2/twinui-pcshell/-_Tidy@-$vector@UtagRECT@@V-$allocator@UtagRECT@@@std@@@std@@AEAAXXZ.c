/*
 * XREFs of ?_Tidy@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800B68BC
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1800B6210 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800B7650 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ??4SearchAppSizeAndBorderInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800B8670 (--4SearchAppSizeAndBorderInfo@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180180698 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::__lambda_2b1190aa71c35694843c2dd3124163c4_ @ 0x1801E8610 (_lambda_2b1190aa71c35694843c2dd3124163c4_--__lambda_2b1190aa71c35694843c2dd3124163c4_.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1802D506C (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??1SearchAppSizeAndBorderInfo@@QEAA@XZ @ 0x180466518 (--1SearchAppSizeAndBorderInfo@@QEAA@XZ.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x180466528 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1805B6988 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<tagRECT>::_Tidy(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = std::_Deallocate<16,0>(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
