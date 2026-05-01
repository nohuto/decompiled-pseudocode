/*
 * XREFs of ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x180180AD8
 * Callers:
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180052B80 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180180698 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x180180964 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x180180BC4 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 */

struct tagRECT *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        struct tagRECT *__return_ptr retstr,
        const struct MonitorInfo *a3,
        char a4,
        struct MonitorInfo *a5,
        int a6,
        bool a7)
{
  bool v7; // zf
  bool v10; // al
  LONG v11; // edx
  LONG v12; // ecx
  LONG v13; // eax
  LONG v14; // edx
  LONG v15; // ecx
  struct tagRECT v16; // xmm0
  struct tagRECT v18; // [rsp+30h] [rbp-18h] BYREF

  v7 = *((_DWORD *)a3 + 20) == 2;
  *retstr = 0LL;
  if ( !v7 )
  {
    v10 = 0;
    if ( !a7 && *((_DWORD *)a3 + 19) != 1 )
    {
      if ( a4 )
        v14 = *((_DWORD *)a3 + 2) - (_DWORD)a5;
      else
        v14 = *(_DWORD *)a3;
      v15 = *((_DWORD *)a3 + 7);
      v18.top = v15 - a6;
      v18.right = v14 + (_DWORD)a5;
      v18.left = v14;
      v18.bottom = v15;
      v16 = v18;
      goto LABEL_14;
    }
LABEL_13:
    v16 = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(this, &v18, a3, (int)a5, a6, v10);
LABEL_14:
    *retstr = v16;
    return retstr;
  }
  v10 = 1;
  if ( a7 )
    goto LABEL_13;
  if ( a4 )
  {
    v11 = anonymous_namespace_::GetInnerSearchBoxOffset(a3) + *((_DWORD *)a3 + 17);
    v12 = v11 - (_DWORD)a5;
  }
  else
  {
    v12 = *((_DWORD *)a3 + 15) - anonymous_namespace_::GetInnerSearchBoxOffset(a3);
    v11 = v12 + (_DWORD)a5;
  }
  retstr->right = v11;
  retstr->left = v12;
  v13 = *((_DWORD *)a3 + 3);
  retstr->bottom = v13;
  retstr->top = v13 - a6;
  return retstr;
}
