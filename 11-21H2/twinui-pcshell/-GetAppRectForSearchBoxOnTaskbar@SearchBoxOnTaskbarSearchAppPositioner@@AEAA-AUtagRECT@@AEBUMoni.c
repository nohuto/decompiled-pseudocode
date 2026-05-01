/*
 * XREFs of ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1801A57E0
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A5A7C (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A5EE0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x1801A59F0 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 */

struct tagRECT *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        char a4,
        int a5,
        int a6,
        bool a7)
{
  bool v7; // zf
  __m128i *v8; // rbx
  char v10; // cl
  LONG v11; // edx
  LONG v12; // ecx
  LONG v13; // eax
  LONG v14; // edx
  LONG v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // xmm0_8
  struct tagRECT v19; // [rsp+20h] [rbp-18h]

  v7 = a3[5].m128i_i32[0] == 2;
  *retstr = 0LL;
  v8 = a3;
  if ( !v7 )
  {
    v10 = 0;
    if ( !a7 && a3[4].m128i_i32[3] != 1 )
    {
      if ( a4 )
        v14 = a3[1].m128i_i32[2] - a5;
      else
        v14 = a3[1].m128i_i32[0];
      v19.top = a3[1].m128i_i32[3] - a6;
      v15 = v14 + a5;
      v19.left = v14;
      v19.bottom = a3[1].m128i_i32[3];
LABEL_16:
      v19.right = v15;
      *retstr = v19;
      return retstr;
    }
LABEL_13:
    if ( !v10 )
      v8 = a3 + 1;
    v16 = _mm_cvtsi128_si32(*v8);
    v17 = _mm_srli_si128(*v8, 8).m128i_u64[0];
    v19.bottom = HIDWORD(v17);
    v19.top = HIDWORD(v17) - a6;
    v19.left = ((int)v17 - v16 - a5) / 2 + v16;
    v15 = v19.left + a5;
    goto LABEL_16;
  }
  v10 = 1;
  if ( a7 )
    goto LABEL_13;
  if ( a4 )
  {
    v11 = anonymous_namespace_::GetInnerSearchBoxOffset(a3) + a3[4].m128i_i32[1];
    v12 = v11 - a5;
  }
  else
  {
    v12 = a3[3].m128i_i32[3] - anonymous_namespace_::GetInnerSearchBoxOffset(a3);
    v11 = v12 + a5;
  }
  retstr->right = v11;
  retstr->left = v12;
  v13 = v8->m128i_i32[3];
  retstr->bottom = v13;
  retstr->top = v13 - a6;
  return retstr;
}
