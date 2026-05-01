/*
 * XREFs of ??$_Assign_range@PEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@0Uforward_iterator_tag@1@@Z @ 0x180459C90
 * Callers:
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18045F7A4 (-HideAllInputViews@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4898 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ??$_Copy_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00@Z @ 0x180459D68 (--$_Copy_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@UKBViewIn.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18046A424 (-_Clear_and_reserve_geometric@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_p.c)
 */

void __fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Assign_range<std::shared_ptr<KBViewInfo> *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx

  v3 = (__int64)a3 - a2;
  v5 = *a1;
  v7 = v3 >> 4;
  v8 = (a1[1] - *a1) >> 4;
  if ( v7 <= v8 )
  {
    i = (_QWORD *)(v5 + 16 * v7);
    std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(a2, a3);
    v13 = a1[1];
    v12 = (__int64)i;
  }
  else
  {
    if ( v7 > (a1[2] - v5) >> 4 )
    {
      std::vector<std::shared_ptr<KBViewInfo>>::_Clear_and_reserve_geometric(a1, v7);
      v8 = 0LL;
    }
    v10 = (_QWORD *)(a2 + 16 * v8);
    std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(a2, v10);
    for ( i = (_QWORD *)a1[1]; ; i += 2 )
    {
      v12 = (__int64)i;
      if ( v10 == a3 )
        break;
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        i,
        v10);
      v10 += 2;
    }
    v13 = (__int64)i;
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(v12, v13);
  a1[1] = (__int64)i;
}
