/*
 * XREFs of ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x180180964
 * Callers:
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180052B80 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180180698 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x180180AD8 (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        struct tagRECT *__return_ptr retstr,
        const struct MonitorInfo *a3,
        int a4,
        int a5,
        bool a6)
{
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  LONG v10; // edx
  LONG v11; // r8d
  __int128 v13; // [rsp+0h] [rbp-18h]

  if ( a6 )
  {
    v13 = *(_OWORD *)a3;
    v7 = HIDWORD(*(_OWORD *)a3);
    v8 = DWORD2(v13);
    v9 = v13;
  }
  else
  {
    v9 = *(_DWORD *)a3;
    v8 = *((_DWORD *)a3 + 2);
    v7 = *((_DWORD *)a3 + 7);
  }
  v10 = (v8 - v9 - a4) / 2 + v9;
  retstr->left = v10;
  v11 = v7 - a5;
  retstr->right = v10 + a4;
  retstr->top = v11;
  retstr->bottom = v11 + a5;
  return retstr;
}
