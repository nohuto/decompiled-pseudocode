/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5BB0
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E4D04 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800E4D04.c)
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E52F8 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creativ_ea_1800E52F8.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800E62B0 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@st.c)
 */

__int64 __fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  _QWORD *i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  double v12; // xmm0_8
  double v13; // xmm1_8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v21[3]; // [rsp+30h] [rbp-18h] BYREF

  for ( i = a1; i != a2; a5 += 2 )
  {
    if ( a3 == a4 )
      break;
    v10 = *a3;
    v11 = *i;
    v12 = *(double *)(*a3 + 32LL);
    v13 = *(double *)(*i + 32LL);
    if ( v13 > v12 || v12 == v13 && *(double *)(v11 + 40) > *(double *)(v10 + 40) )
    {
      if ( v21 == a3 )
      {
        v16 = 0LL;
        v10 = 0LL;
      }
      else
      {
        v16 = a3[1];
        a3[1] = 0LL;
        *a3 = 0LL;
      }
      v21[1] = a5[1];
      v17 = *a5;
      a5[1] = v16;
      v21[0] = v17;
      *a5 = v10;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v21);
      a3 += 2;
    }
    else
    {
      if ( v20 == i )
      {
        v14 = 0LL;
        v11 = 0LL;
      }
      else
      {
        v14 = i[1];
        i[1] = 0LL;
        *i = 0LL;
      }
      v20[1] = a5[1];
      v15 = *a5;
      *a5 = v11;
      a5[1] = v14;
      v20[0] = v15;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v20);
      i += 2;
    }
  }
  v18 = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
          i,
          a2,
          a5);
  return std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
           a3,
           a4,
           v18);
}
