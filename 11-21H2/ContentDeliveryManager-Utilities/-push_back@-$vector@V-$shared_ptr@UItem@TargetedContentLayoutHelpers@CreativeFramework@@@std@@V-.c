/*
 * XREFs of ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800E46C4
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800E26D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x18006984C (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800E4298 (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ?_Reset0@?$_Ptr_base@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAXPEAUItem@TargetedContentLayoutHelpers@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800E4410 (-_Reset0@-$_Ptr_base@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAXPEAUItem@T.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
        __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rdx
  bool v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 result; // rax

  v4 = a1[1];
  v5 = (unsigned __int64)a2 < v4 && *a1 <= (unsigned __int64)a2;
  v6 = a1[2];
  if ( v5 )
  {
    v7 = (unsigned __int64)a2 - *a1;
    v8 = *a1;
    v9 = (_QWORD *)a1[1];
    if ( v4 == v6 && !((__int64)(v6 - v4) >> 4) )
    {
      v10 = (__int64)(v4 - v8) >> 4;
      if ( v10 == 0xFFFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
      v11 = v10 + 1;
      v12 = (v6 - *a1) >> 4;
      v13 = 0LL;
      if ( 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) >= v12 )
        v13 = v12 + (v12 >> 1);
      if ( v13 >= v11 )
        v11 = v13;
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate((__int64)a1, v11);
      v8 = *a1;
      v9 = (_QWORD *)a1[1];
    }
    v14 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    *v9 = 0LL;
    v9[1] = 0LL;
    v15 = *(_QWORD *)(v14 + v8 + 8);
    v16 = *(_QWORD *)(v14 + v8);
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  }
  else
  {
    v9 = (_QWORD *)a1[1];
    if ( v4 == v6 && !((__int64)(v6 - v4) >> 4) )
    {
      v17 = (__int64)(v4 - *a1) >> 4;
      if ( v17 == 0xFFFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
      v18 = v17 + 1;
      v19 = (v6 - *a1) >> 4;
      v20 = 0LL;
      if ( 0xFFFFFFFFFFFFFFFLL - (v19 >> 1) >= v19 )
        v20 = v19 + (v19 >> 1);
      if ( v20 >= v18 )
        v18 = v20;
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate((__int64)a1, v18);
      v9 = (_QWORD *)a1[1];
    }
    *v9 = 0LL;
    v9[1] = 0LL;
    v15 = a2[1];
    v16 = *a2;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  }
  result = std::_Ptr_base<CreativeFramework::TargetedContentLayoutHelpers::Item>::_Reset0(v9, v16, v15);
  a1[1] += 16LL;
  return result;
}
