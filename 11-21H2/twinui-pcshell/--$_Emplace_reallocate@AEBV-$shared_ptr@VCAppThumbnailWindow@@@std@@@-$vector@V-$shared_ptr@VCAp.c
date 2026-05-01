/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VCAppThumbnailWindow@@@std@@@?$vector@V?$shared_ptr@VCAppThumbnailWindow@@@std@@V?$allocator@V?$shared_ptr@VCAppThumbnailWindow@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCAppThumbnailWindow@@@1@QEAV21@AEBV21@@Z @ 0x180495764
 * Callers:
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x180496874 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4CEC (--$_Uninitialized_move@PEAV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1803D9848 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<CAppThumbnailWindow>>::_Emplace_reallocate<std::shared_ptr<CAppThumbnailWindow> const &>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // r14
  char *v15; // rdx
  _QWORD *v16; // r8
  char *v17; // rcx
  _QWORD *result; // rax
  void *v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]

  v5 = (unsigned __int64)&a2[-*a1];
  v6 = (__int64)(a1[1] - *a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  v14 = (_QWORD *)((char *)v12 + (v5 & 0xFFFFFFFFFFFFFFF0uLL));
  try
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      v14,
      a3);
    v20 = (__int64)v14;
    v15 = (char *)a1[1];
    v16 = v13;
    v17 = (char *)*a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        v17,
        a2,
        v13);
      v20 = (__int64)v13;
      v16 = v14 + 2;
      v15 = (char *)a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      v17,
      v15,
      v16);
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array((__int64)a1, (__int64)v13, v8, v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(v20, (__int64)(v14 + 2));
    std::_Deallocate<16,0>(v19, 16 * v7);
    throw;
  }
  return result;
}
