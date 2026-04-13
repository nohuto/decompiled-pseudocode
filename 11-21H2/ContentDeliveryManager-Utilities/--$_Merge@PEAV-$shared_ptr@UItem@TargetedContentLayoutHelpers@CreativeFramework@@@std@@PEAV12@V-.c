/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5CE8
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5094 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x1800E6360 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 *     ??4?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAAEAV01@$$QEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@1@@Z @ 0x1800E70F8 (--4-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 */

__int64 __fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        char **a6)
{
  _QWORD *v8; // rbx
  _QWORD *v10; // r9
  _QWORD *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  char *v16; // rbx
  char *v17; // rbx
  char *v19; // [rsp+20h] [rbp-50h] BYREF
  char *v20; // [rsp+30h] [rbp-40h]
  __int128 v21; // [rsp+48h] [rbp-28h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h]
  char *v23; // [rsp+68h] [rbp-8h]

  v8 = a2;
  while ( v8 != a3 )
  {
    v10 = v8;
    v11 = a4;
    if ( a4 == a5 )
      break;
    v12 = *a4;
    v13 = *v8;
    v14 = *(_BYTE *)(*a4 + 16LL);
    if ( v14 )
    {
      if ( *(_BYTE *)(v13 + 16) )
      {
        if ( *(double *)(v13 + 24) > *(double *)(v12 + 24) )
          goto LABEL_22;
        goto LABEL_6;
      }
    }
    else if ( !*(_BYTE *)(v13 + 16) )
    {
      v14 = *(_DWORD *)(v12 + 20) < *(_DWORD *)(v13 + 20);
    }
    if ( v14 )
    {
LABEL_22:
      a4 += 2;
      goto LABEL_7;
    }
LABEL_6:
    v8 += 2;
    v11 = v10;
LABEL_7:
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::operator=(a6, v11);
  }
  v23 = a6[4];
  v21 = 0LL;
  v22 = 0LL;
  v15 = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
          &v19,
          v8,
          a3,
          &v21);
  v16 = v19;
  a6[4] = *(char **)(v15 + 32);
  if ( v16 )
  {
    if ( v16 != v20 )
    {
      do
      {
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v16);
        v16 += 16;
      }
      while ( v16 != v20 );
      v16 = v19;
    }
    operator delete(v16);
  }
  v23 = a6[4];
  v21 = 0LL;
  v22 = 0LL;
  std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
    a1,
    a4,
    a5,
    &v21);
  v17 = *a6;
  if ( *a6 )
  {
    if ( v17 != a6[2] )
    {
      do
      {
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v17);
        v17 += 16;
      }
      while ( v17 != a6[2] );
      v17 = *a6;
    }
    operator delete(v17);
  }
  return a1;
}
