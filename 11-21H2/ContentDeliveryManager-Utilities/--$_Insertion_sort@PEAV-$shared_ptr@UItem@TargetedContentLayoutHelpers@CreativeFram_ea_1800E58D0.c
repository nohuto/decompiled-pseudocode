/*
 * XREFs of ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E58D0
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E52F8 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creativ_ea_1800E52F8.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E68F8 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800E68F8.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Move_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800E6424 (--$_Move_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@P.c)
 */

void __fastcall std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        __int128 *a1,
        __int128 *a2)
{
  __int128 *i; // rbx
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // r14
  double v10; // xmm0_8
  double v11; // xmm1_8
  __int64 *j; // rsi
  double v13; // xmm0_8
  __int64 v14; // rdx
  double v15; // xmm1_8
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-10h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 1; i != a2; ++i )
    {
      v5 = 0LL;
      v6 = 0LL;
      v7 = (__int64 *)i;
      v20 = 0LL;
      if ( &v20 == i )
      {
        v8 = *((_QWORD *)&v20 + 1);
        v9 = v20;
      }
      else
      {
        v5 = *((_QWORD *)i + 1);
        *((_QWORD *)i + 1) = 0LL;
        v8 = v5;
        v6 = *(_QWORD *)i;
        *(_QWORD *)i = 0LL;
        v9 = v6;
      }
      v10 = *(double *)(v9 + 32);
      v11 = *(double *)(*(_QWORD *)a1 + 32LL);
      if ( v11 > v10 || v10 == v11 && *(double *)(*(_QWORD *)a1 + 40LL) > *(double *)(v9 + 40) )
      {
        std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
          a1,
          i,
          i + 1);
        v19 = v23;
        v23[1] = *((_QWORD *)a1 + 1);
        v23[0] = *(_QWORD *)a1;
        *((_QWORD *)a1 + 1) = v5;
        *(_QWORD *)a1 = v6;
      }
      else
      {
        for ( j = (__int64 *)i; ; v7 = j )
        {
          v13 = *(double *)(v9 + 32);
          j -= 2;
          v14 = *j;
          v15 = *(double *)(*j + 32);
          if ( v15 <= v13 && (v13 != v15 || *(double *)(v14 + 40) <= *(double *)(v9 + 40)) )
            break;
          if ( v21 == j )
          {
            v16 = 0LL;
            v14 = 0LL;
          }
          else
          {
            v16 = j[1];
            j[1] = 0LL;
            *j = 0LL;
          }
          v21[1] = v7[1];
          v17 = *v7;
          *v7 = v14;
          v7[1] = v16;
          v21[0] = v17;
          std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v21);
        }
        v22[1] = v7[1];
        v18 = *v7;
        *v7 = v9;
        v7[1] = v8;
        v19 = v22;
        v22[0] = v18;
      }
      v20 = 0uLL;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v19);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v20);
    }
  }
}
