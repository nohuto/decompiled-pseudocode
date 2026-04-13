/*
 * XREFs of ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800CCB28
 * Callers:
 *     ?_Reserve@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800CCD0C (-_Reserve@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@V12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800C61AC (--$_Uninit_move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEA.c)
 *     ?_Destroy@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@0@Z @ 0x1800CC890 (-_Destroy@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$.c)
 */

void __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi

  v4 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL || (v4 = (__int64 *)operator new(16 * a2)) == 0LL )
      std::_Xbad_alloc();
  }
  std::_Uninit_move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
    *(__int64 **)a1,
    *(__int64 **)(a1 + 8),
    v4);
  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Destroy(
      v5,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 8));
    operator delete(*(void **)a1);
  }
  *(_QWORD *)(a1 + 16) = &v4[2 * a2];
  *(_QWORD *)(a1 + 8) = (char *)v4 + (v6 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v4;
}
