/*
 * XREFs of ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x180092070
 * Callers:
 *     ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180090DDC (-GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AE.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___ @ 0x18065EAFC (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Windows--Foundation--Re.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180092034 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1801B5FDC (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

char *__fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(const void **a1, _BYTE *a2, _OWORD *a3)
{
  signed __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 size_of; // rax
  char *v11; // rsi
  char *v12; // rbx
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  void *v15; // rcx
  size_t v16; // r8

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  *(_OWORD *)v12 = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = v11;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove_0(v11, v14, a2 - (_BYTE *)*a1);
    v15 = v12 + 16;
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove_0(v15, v14, v16);
  std::vector<tagRECT>::_Change_array(a1, v11, v8, v9);
  return v12;
}
