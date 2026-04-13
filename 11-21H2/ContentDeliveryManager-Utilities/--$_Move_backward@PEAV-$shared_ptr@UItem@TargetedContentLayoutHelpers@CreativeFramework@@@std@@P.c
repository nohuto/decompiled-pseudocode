/*
 * XREFs of ??$_Move_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800E6424
 * Callers:
 *     ??$_Buffered_rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@@Z @ 0x1800E555C (--$_Buffered_rotate@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@.c)
 *     ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E570C (--$_Insertion_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E58D0 (--$_Insertion_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800E58D0.c)
 *     ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5FFC (--$_Merge_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E6164 (--$_Merge_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800E6164.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  signed __int64 v6; // rbp
  signed __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  if ( a2 != a1 )
  {
    v6 = (char *)a2 - (char *)a3;
    v7 = (char *)a3 - (char *)a2;
    do
    {
      v4 -= 2;
      v3 -= 2;
      v8 = 0LL;
      v9 = 0LL;
      if ( v11 != v4 )
      {
        v8 = *(__int64 *)((char *)v4 + v7 + v6 + 8);
        *(__int64 *)((char *)v4 + v7 + v6 + 8) = 0LL;
        v9 = *v4;
        *v4 = 0LL;
      }
      v11[1] = *(__int64 *)((char *)v4 + v7 + 8);
      v11[0] = *v3;
      *(__int64 *)((char *)v4 + v7 + 8) = v8;
      *v3 = v9;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v11);
    }
    while ( v4 != a1 );
  }
  return v3;
}
