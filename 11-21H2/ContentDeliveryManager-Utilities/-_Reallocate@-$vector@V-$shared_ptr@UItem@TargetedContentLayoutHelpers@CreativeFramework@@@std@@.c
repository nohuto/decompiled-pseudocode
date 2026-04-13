/*
 * XREFs of ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800E4298
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800E46C4 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Uninit_move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@V12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800DBAD0 (--$_Uninit_move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEA.c)
 */

void __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // r12
  __int64 *v7; // rbx
  unsigned __int64 v8; // r15
  __int64 *v9; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL || (v4 = (__int64 *)operator new(16 * a2), (v9 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8),
      v4);
    v6 = *(__int64 **)(a1 + 8);
    v7 = *(__int64 **)a1;
    v8 = (unsigned __int64)v6 - *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( v7 != v6 )
      {
        do
        {
          std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v7);
          v7 += 2;
        }
        while ( v7 != v6 );
        v7 = *(__int64 **)a1;
      }
      operator delete(v7);
    }
    *(_QWORD *)(a1 + 16) = &v4[2 * a2];
    *(_QWORD *)(a1 + 8) = (char *)v4 + (v8 & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = v4;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>::deallocate(
      v5,
      v9);
    throw;
  }
}
