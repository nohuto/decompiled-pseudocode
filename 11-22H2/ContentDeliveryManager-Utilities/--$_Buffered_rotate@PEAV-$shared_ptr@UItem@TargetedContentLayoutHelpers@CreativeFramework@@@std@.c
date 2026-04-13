/*
 * XREFs of ??$_Buffered_rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@@Z @ 0x1800CD8E4
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CD158 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CD424 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800CD424.c)
 * Callees:
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800CE818 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@st.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x1800CE868 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 *     ??$_Move_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800CE90C (--$_Move_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@P.c)
 *     ??$_Rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00PEA_J0@Z @ 0x1800CEAD8 (--$_Rotate@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@s.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800CF3DC (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     ?_Maxlen@?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA_JXZ @ 0x1800CFA80 (-_Maxlen@-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@s.c)
 */

__int64 __fastcall std::_Buffered_rotate<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v9; // rcx
  _QWORD *v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  _BYTE v15[40]; // [rsp+58h] [rbp-28h] BYREF

  if ( a4 > a5
    || a4 > std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Maxlen(a6) )
  {
    if ( a5 > std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Maxlen(a6) )
    {
      if ( a1 != a2 && a2 != a3 )
        std::_Rotate<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
          a1,
          a2,
          a3);
      return a1 + 16 * a5;
    }
    else
    {
      v11 = *(_QWORD **)(a6 + 32);
      v12 = 0LL;
      v11[1] = *v11;
      v14 = *(_QWORD *)(a6 + 32);
      v13 = 0LL;
      std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
        v15,
        a2,
        a3,
        &v12);
      std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v15);
      std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
        a1,
        a2,
        a3);
      return std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
               **(_QWORD **)(a6 + 32),
               *(_QWORD *)(*(_QWORD *)(a6 + 32) + 8LL),
               a1);
    }
  }
  else
  {
    v9 = *(_QWORD **)(a6 + 32);
    v12 = 0LL;
    v9[1] = *v9;
    v14 = *(_QWORD *)(a6 + 32);
    v13 = 0LL;
    std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
      v15,
      a1,
      a2,
      &v12);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v15);
    std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
      a2,
      a3,
      a1);
    return std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
             **(_QWORD **)(a6 + 32),
             *(_QWORD *)(*(_QWORD *)(a6 + 32) + 8LL),
             a3);
  }
}
