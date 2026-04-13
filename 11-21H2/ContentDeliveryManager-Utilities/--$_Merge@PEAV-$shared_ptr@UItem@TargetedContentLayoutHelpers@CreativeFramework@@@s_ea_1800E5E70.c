/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5E70
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E52F8 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creativ_ea_1800E52F8.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x1800E6360 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 *     ??4?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAAEAV01@$$QEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@1@@Z @ 0x1800E70F8 (--4-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 */

__int64 __fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char **a6)
{
  __int64 v8; // r10
  double v10; // xmm0_8
  double v11; // xmm1_8
  bool v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rbx
  char *v18; // rbx
  char *v20; // [rsp+20h] [rbp-50h] BYREF
  char *v21; // [rsp+30h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+58h] [rbp-18h]
  char *v24; // [rsp+68h] [rbp-8h]

  v8 = a2;
  if ( a2 != a3 )
  {
    do
    {
      if ( a4 == a5 )
        break;
      v10 = *(double *)(*(_QWORD *)a4 + 32LL);
      v11 = *(double *)(*(_QWORD *)v8 + 32LL);
      v12 = v11 > v10 || v10 == v11 && *(double *)(*(_QWORD *)v8 + 40LL) > *(double *)(*(_QWORD *)a4 + 40LL);
      v13 = v8;
      v14 = a4;
      if ( !v12 )
      {
        v14 = v8;
        v13 = v8 + 16;
      }
      std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::operator=(a6, v14);
      v15 = a4 + 16;
      v8 = v13;
      if ( !v12 )
        v15 = a4;
      a4 = v15;
    }
    while ( v13 != a3 );
  }
  v24 = a6[4];
  v22 = 0LL;
  v23 = 0LL;
  v16 = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
          &v20,
          v8,
          a3,
          &v22);
  v17 = v20;
  a6[4] = *(char **)(v16 + 32);
  if ( v17 )
  {
    if ( v17 != v21 )
    {
      do
      {
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v17);
        v17 += 16;
      }
      while ( v17 != v21 );
      v17 = v20;
    }
    operator delete(v17);
  }
  v24 = a6[4];
  v22 = 0LL;
  v23 = 0LL;
  std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
    a1,
    a4,
    a5,
    &v22);
  v18 = *a6;
  if ( *a6 )
  {
    if ( v18 != a6[2] )
    {
      do
      {
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v18);
        v18 += 16;
      }
      while ( v18 != a6[2] );
      v18 = *a6;
    }
    operator delete(v18);
  }
  return a1;
}
