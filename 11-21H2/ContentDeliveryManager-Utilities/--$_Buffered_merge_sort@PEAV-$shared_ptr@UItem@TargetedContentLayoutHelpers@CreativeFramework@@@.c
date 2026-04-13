/*
 * XREFs of ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5094
 * Callers:
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E67FC (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E570C (--$_Insertion_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5A70 (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PE.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E5CE8 (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V-.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800E62B0 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@st.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x1800E6360 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 */

__int64 __fastcall std::_Buffered_merge_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rbx
  void *v20; // rdi
  __int64 j; // rbx
  __int64 i; // rbx
  __int64 *v23; // rax
  __int64 v24; // r12
  __int64 v25; // r8
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  _QWORD v30[2]; // [rsp+48h] [rbp-41h] BYREF
  char *v31; // [rsp+58h] [rbp-31h]
  __int128 v32; // [rsp+70h] [rbp-19h] BYREF
  __int128 v33; // [rsp+80h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp+7h]
  __int64 v35; // [rsp+E8h] [rbp+5Fh]
  __int64 v37; // [rsp+F8h] [rbp+6Fh]

  v35 = a1;
  v5 = 32LL;
  v6 = a4;
  v7 = a3;
  v9 = a1;
  if ( a3 >= 32 )
  {
    v10 = (unsigned __int64)a3 >> 5;
    do
    {
      LOBYTE(a3) = a5;
      v11 = a1 + 512;
      std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        a1,
        a1 + 512,
        a3);
      a1 = v11;
      --v10;
    }
    while ( v10 );
    v9 = v35;
  }
  LOBYTE(a3) = a5;
  result = std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
             a1,
             a2,
             a3);
  while ( v5 < v7 )
  {
    v13 = 2 * v5;
    v14 = v7;
    v15 = v9;
    *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL) = **(_QWORD **)(v6 + 32);
    v16 = *(_QWORD *)(v6 + 32);
    if ( 2 * v5 <= v7 )
    {
      do
      {
        v17 = v15 + 16 * v5;
        v34 = v16;
        v37 = v17 + 16 * v5;
        v32 = 0LL;
        v33 = 0LL;
        v18 = std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
                (unsigned int)v30,
                v15,
                v17,
                (int)v15 + 16 * (int)v5,
                v37,
                (__int64)&v32);
        v19 = (char *)v30[0];
        v16 = *(_QWORD *)(v18 + 32);
        if ( v30[0] )
        {
          if ( (char *)v30[0] != v31 )
          {
            do
            {
              std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v19);
              v19 += 16;
            }
            while ( v19 != v31 );
            v19 = (char *)v30[0];
          }
          operator delete(v19);
        }
        v15 = v37;
        v14 -= v13;
      }
      while ( v14 >= v13 );
      v9 = v35;
      v6 = a4;
    }
    v34 = v16;
    v32 = 0LL;
    v33 = 0LL;
    if ( v14 > v5 )
    {
      std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        (unsigned int)v30,
        v15,
        v15 + 16 * v5,
        v15 + 16 * v5,
        a2,
        (__int64)&v32);
      v20 = (void *)v30[0];
      if ( !v30[0] )
        goto LABEL_23;
      for ( i = v30[0]; (char *)i != v31; i += 16LL )
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(i);
    }
    else
    {
      std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
        v30,
        v15,
        a2,
        &v32);
      v20 = (void *)v30[0];
      if ( !v30[0] )
        goto LABEL_23;
      for ( j = v30[0]; (char *)j != v31; j += 16LL )
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(j);
    }
    operator delete(v20);
    v9 = v35;
LABEL_23:
    v23 = *(__int64 **)(v6 + 32);
    v5 = 2 * v13;
    v24 = v7;
    v25 = v9;
    v26 = v23[1];
    v27 = *v23;
    if ( 2 * v13 <= v7 )
    {
      do
      {
        v28 = v27 + 16 * v13;
        v29 = v28 + 16 * v13;
        v24 -= v5;
        v25 = std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
                v27,
                v28,
                (int)v27 + 16 * (int)v13,
                (int)v28 + 16 * (int)v13,
                v25);
        v27 = v29;
      }
      while ( v24 >= v5 );
      v9 = v35;
    }
    if ( v24 > v13 )
      result = std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
                 v27,
                 (int)v27 + 16 * (int)v13,
                 (int)v27 + 16 * (int)v13,
                 v26,
                 v25);
    else
      result = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
                 v27,
                 v26,
                 v25);
    v6 = a4;
  }
  return result;
}
