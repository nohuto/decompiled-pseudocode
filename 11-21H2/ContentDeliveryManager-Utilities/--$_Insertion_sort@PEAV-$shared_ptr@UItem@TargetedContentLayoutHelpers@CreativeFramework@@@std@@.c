/*
 * XREFs of ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E570C
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5094 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E67FC (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Move_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800E6424 (--$_Move_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@P.c)
 */

void __fastcall std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 *a1,
        __int128 *a2)
{
  __int128 *i; // rbx
  __int128 *v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rcx
  __int128 *j; // rsi
  char v11; // cl
  __int64 v12; // rax
  char v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-10h] BYREF

  if ( a1 != (__int64 *)a2 )
  {
    for ( i = (__int128 *)(a1 + 2); ; ++i )
    {
      if ( i == a2 )
        return;
      v5 = i;
      v18 = 0LL;
      if ( &v18 == i )
      {
        v6 = *((_QWORD *)&v18 + 1);
        v7 = v18;
      }
      else
      {
        v6 = *((_QWORD *)i + 1);
        *((_QWORD *)i + 1) = 0LL;
        v7 = *(_QWORD *)i;
        *(_QWORD *)i = 0LL;
      }
      v8 = *(_BYTE *)(v7 + 16);
      v9 = *a1;
      if ( !v8 )
        break;
      if ( !*(_BYTE *)(v9 + 16) )
        goto LABEL_19;
      if ( *(double *)(v9 + 24) <= *(double *)(v7 + 24) )
        goto LABEL_9;
LABEL_20:
      std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
        a1,
        i,
        i + 1);
      v14 = v20;
      v20[1] = a1[1];
      v20[0] = *a1;
      a1[1] = v6;
      *a1 = v7;
LABEL_14:
      v18 = 0uLL;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v14);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v18);
    }
    if ( !*(_BYTE *)(v9 + 16) )
      v8 = *(_DWORD *)(v7 + 20) < *(_DWORD *)(v9 + 20);
LABEL_19:
    if ( v8 )
      goto LABEL_20;
LABEL_9:
    for ( j = i; ; v5 = j )
    {
      v11 = *(_BYTE *)(v7 + 16);
      v12 = *(_QWORD *)--j;
      v13 = *(_BYTE *)(*(_QWORD *)j + 16LL);
      if ( v11 )
      {
        if ( v13 )
        {
          if ( *(double *)(v12 + 24) <= *(double *)(v7 + 24) )
            goto LABEL_13;
          goto LABEL_24;
        }
      }
      else if ( !v13 )
      {
        v11 = *(_DWORD *)(v7 + 20) < *(_DWORD *)(v12 + 20);
      }
      if ( !v11 )
      {
LABEL_13:
        v14 = v21;
        v21[1] = *((_QWORD *)v5 + 1);
        v21[0] = *(_QWORD *)v5;
        *((_QWORD *)v5 + 1) = v6;
        *(_QWORD *)v5 = v7;
        goto LABEL_14;
      }
LABEL_24:
      if ( v19 == (_QWORD *)j )
      {
        v15 = 0LL;
        v16 = 0LL;
      }
      else
      {
        v15 = *((_QWORD *)j + 1);
        *((_QWORD *)j + 1) = 0LL;
        v16 = *(_QWORD *)j;
        *(_QWORD *)j = 0LL;
      }
      v19[1] = *((_QWORD *)v5 + 1);
      v17 = *(_QWORD *)v5;
      *((_QWORD *)v5 + 1) = v15;
      v19[0] = v17;
      *(_QWORD *)v5 = v16;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v19);
    }
  }
}
