/*
 * XREFs of ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1803D4B5C
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1803D7FC0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1803D8790 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1803A048C (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4CEC (--$_Uninitialized_move@PEAV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1803D9848 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

char *__fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  size_t size_of; // rax
  char *v11; // rax
  __int64 v12; // rsi
  char *v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  char *result; // rax
  char *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v18 = v11;
  v13 = &v11[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
    *(_QWORD *)v13 = *a3;
    *((_QWORD *)v13 + 1) = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v20 = (__int64)v13;
    v14 = a1[1];
    v15 = v11;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        v16,
        a2,
        v11);
      v20 = v12;
      v15 = v13 + 16;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      v16,
      v14,
      v15);
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v12, v8, v9, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(v20, (__int64)(v13 + 16));
    std::_Deallocate<16,0>(v19, 16 * v9);
    throw;
  }
  return result;
}
