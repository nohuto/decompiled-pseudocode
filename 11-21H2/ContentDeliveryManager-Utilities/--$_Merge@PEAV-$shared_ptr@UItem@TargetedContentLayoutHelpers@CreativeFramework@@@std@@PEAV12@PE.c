/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5A70
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E493C (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5094 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800E62B0 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@st.c)
 */

__int64 __fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v21[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = a1;
  while ( v9 != a2 )
  {
    if ( a3 == a4 )
      break;
    v10 = *a3;
    v11 = *v9;
    v12 = *(_BYTE *)(*a3 + 16LL);
    if ( v12 )
    {
      if ( *(_BYTE *)(v11 + 16) )
      {
        if ( *(double *)(v11 + 24) > *(double *)(v10 + 24) )
          goto LABEL_11;
        goto LABEL_6;
      }
    }
    else if ( !*(_BYTE *)(v11 + 16) )
    {
      v12 = *(_DWORD *)(v10 + 20) < *(_DWORD *)(v11 + 20);
    }
    if ( v12 )
    {
LABEL_11:
      v14 = 0LL;
      v15 = 0LL;
      if ( v20 != a3 )
      {
        v14 = a3[1];
        a3[1] = 0LL;
        *a3 = 0LL;
        v15 = v10;
      }
      v20[1] = a5[1];
      v16 = *a5;
      a5[1] = v14;
      v20[0] = v16;
      *a5 = v15;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v20);
      a3 += 2;
      goto LABEL_16;
    }
LABEL_6:
    if ( v21 == v9 )
    {
      v13 = 0LL;
      v11 = 0LL;
    }
    else
    {
      v13 = v9[1];
      v9[1] = 0LL;
      *v9 = 0LL;
    }
    v21[1] = a5[1];
    v17 = *a5;
    *a5 = v11;
    a5[1] = v13;
    v21[0] = v17;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v21);
    v9 += 2;
LABEL_16:
    a5 += 2;
  }
  v18 = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
          v9,
          a2,
          a5);
  return std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
           a3,
           a4,
           v18);
}
