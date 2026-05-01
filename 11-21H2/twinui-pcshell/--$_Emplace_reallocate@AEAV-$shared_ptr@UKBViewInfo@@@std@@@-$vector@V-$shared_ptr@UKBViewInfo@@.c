/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x180459DB8
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180463A5C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1803A048C (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4CEC (--$_Uninitialized_move@PEAV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1803D9848 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo> &>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  size_t size_of; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rdi
  char *v14; // rdx
  _QWORD *v15; // r8
  char *v16; // rcx
  _QWORD *result; // rax
  void *v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v18 = v11;
  v13 = (_QWORD *)((char *)v11 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  try
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      v13,
      a3);
    v19 = (__int64)v13;
    v14 = (char *)a1[1];
    v15 = v12;
    v16 = (char *)*a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        v16,
        a2,
        v12);
      v19 = (__int64)v12;
      v15 = v13 + 2;
      v14 = (char *)a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      v16,
      v14,
      v15);
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array((__int64)a1, (__int64)v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(v19, (__int64)(v13 + 2));
    std::_Deallocate<16,0>(v18, 16 * v9);
    throw;
  }
  return result;
}
