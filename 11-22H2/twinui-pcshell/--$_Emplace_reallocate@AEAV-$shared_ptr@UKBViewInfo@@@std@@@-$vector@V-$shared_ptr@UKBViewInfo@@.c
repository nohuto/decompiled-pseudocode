/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x18050A870
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180092034 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18050AC04 (--$_Uninitialized_move@PEAV-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInf.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18051C3F8 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

char *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo> &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  size_t size_of; // rax
  char *v11; // rax
  char *v12; // rdi
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  char *v17; // r10
  __int64 v18; // r11
  __int64 v19; // r10
  char *result; // rax
  std::_Ref_count_base **v21; // rbx
  char *v22; // [rsp+20h] [rbp-38h]
  void *v23; // [rsp+20h] [rbp-38h]
  char *v24; // [rsp+60h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v22 = v11;
  v12 = &v11[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v12,
      a3);
    v24 = v12;
    v14 = a1[1];
    v15 = v13;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(v16, a2, v13);
      v24 = v17;
      v15 = v18;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(v16, v14, v15);
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v19, v8, v9, v22);
    result = v12;
  }
  catch ( ... )
  {
    if ( v24 != v12 + 16 )
    {
      v21 = (std::_Ref_count_base **)(v24 + 8);
      do
      {
        if ( *v21 )
          std::_Ref_count_base::_Decref(*v21);
        v21 += 2;
      }
      while ( v21 - 1 != (std::_Ref_count_base **)(v12 + 16) );
    }
    std::_Deallocate<16,0>(v23, 16 * v9);
    throw;
  }
  return result;
}
