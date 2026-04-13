/*
 * XREFs of ?_Maxlen@?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA_JXZ @ 0x1800CFA80
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CD158 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CD424 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800CD424.c)
 *     ??$_Buffered_rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@@Z @ 0x1800CD8E4 (--$_Buffered_rotate@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CED10 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CEE10 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800CEE10.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Maxlen(
        __int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbx
  void *v4; // rax

  v2 = *(_QWORD **)(a1 + 32);
  if ( !*v2 )
  {
    v3 = v2[3];
    if ( v3 > 0 )
    {
      if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFLL )
        std::_Xbad_alloc();
      do
      {
        v4 = operator new(16 * v3, (const struct std::nothrow_t *)&std::nothrow);
        if ( v4 )
          break;
        v3 = (unsigned __int64)v3 >> 1;
      }
      while ( v3 );
      **(_QWORD **)(a1 + 32) = v4;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) = v4;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) = v4;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = v3;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
}
