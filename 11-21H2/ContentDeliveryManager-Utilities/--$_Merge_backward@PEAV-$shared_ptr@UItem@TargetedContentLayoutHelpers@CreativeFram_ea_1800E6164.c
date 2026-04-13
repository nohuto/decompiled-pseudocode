/*
 * XREFs of ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E6164
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E4D04 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800E4D04.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Merge_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  _QWORD *v8; // rdi
  _QWORD *v10; // r15
  _QWORD *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  double v14; // xmm0_8
  double v15; // xmm1_8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v24[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  if ( a1 == a2 )
  {
LABEL_15:
    v20 = a4;
    v21 = a3;
  }
  else
  {
    while ( 1 )
    {
      v10 = v8;
      v11 = a4;
      if ( a3 == a4 )
        break;
      v8 -= 2;
      a4 -= 2;
      v12 = *a4;
      v13 = *v8;
      v14 = *(double *)(*a4 + 32LL);
      v15 = *(double *)(*v8 + 32LL);
      if ( v15 > v14 || v14 == v15 && *(double *)(v13 + 40) > *(double *)(v12 + 40) )
      {
        a5 -= 2;
        if ( v24 == v8 )
        {
          v18 = 0LL;
          v13 = 0LL;
        }
        else
        {
          v18 = v8[1];
          v8[1] = 0LL;
          *v8 = 0LL;
        }
        v24[1] = a5[1];
        v19 = *a5;
        a5[1] = v18;
        v24[0] = v19;
        *a5 = v13;
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v24);
        a4 = v11;
      }
      else
      {
        a5 -= 2;
        if ( v23 == a4 )
        {
          v16 = 0LL;
          v12 = 0LL;
        }
        else
        {
          v16 = a4[1];
          a4[1] = 0LL;
          *a4 = 0LL;
        }
        v23[1] = a5[1];
        v17 = *a5;
        *a5 = v12;
        a5[1] = v16;
        v23[0] = v17;
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v23);
        v8 = v10;
      }
      if ( a1 == v8 )
        goto LABEL_15;
    }
    v20 = v8;
    v21 = a1;
  }
  return std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
           v21,
           v20,
           a5);
}
