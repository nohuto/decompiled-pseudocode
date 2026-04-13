/*
 * XREFs of ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5FFC
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E493C (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Merge_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  _QWORD *v8; // rbx
  _QWORD *v10; // r15
  _QWORD *v11; // r12
  __int64 v12; // r9
  __int64 v13; // rax
  char v14; // dl
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD v25[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v26[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  while ( a1 != v8 )
  {
    v10 = v8;
    v11 = a4;
    if ( a3 == a4 )
    {
      v22 = v8;
      v23 = a1;
      return std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
               v23,
               v22,
               a5);
    }
    a4 -= 2;
    v8 -= 2;
    v12 = *a4;
    v13 = *v8;
    v14 = *(_BYTE *)(*a4 + 16LL);
    if ( v14 )
    {
      if ( *(_BYTE *)(v13 + 16) )
      {
        if ( *(double *)(v13 + 24) > *(double *)(v12 + 24) )
        {
          a5 -= 2;
          v15 = a5;
          goto LABEL_11;
        }
        v14 = 0;
      }
    }
    else if ( !*(_BYTE *)(v13 + 16) )
    {
      v14 = *(_DWORD *)(v12 + 20) < *(_DWORD *)(v13 + 20);
    }
    v15 = a5 - 2;
    a5 -= 2;
    if ( !v14 )
    {
      v19 = 0LL;
      v20 = 0LL;
      if ( v26 != a4 )
      {
        v19 = a4[1];
        a4[1] = 0LL;
        *a4 = 0LL;
        v20 = v12;
      }
      v26[1] = v15[1];
      v21 = *v15;
      *v15 = v20;
      v15[1] = v19;
      v26[0] = v21;
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v26);
      v8 = v10;
      continue;
    }
LABEL_11:
    if ( v25 == v8 )
    {
      v16 = 0LL;
      v17 = 0LL;
    }
    else
    {
      v16 = v8[1];
      v8[1] = 0LL;
      v17 = *v8;
      *v8 = 0LL;
    }
    v25[1] = v15[1];
    v18 = *v15;
    *v15 = v17;
    v15[1] = v16;
    v25[0] = v18;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v25);
    a4 = v11;
  }
  v22 = a4;
  v23 = a3;
  return std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
           v23,
           v22,
           a5);
}
