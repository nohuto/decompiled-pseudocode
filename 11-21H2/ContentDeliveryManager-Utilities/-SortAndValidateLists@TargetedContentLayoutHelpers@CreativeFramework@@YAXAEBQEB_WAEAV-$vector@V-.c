/*
 * XREFs of ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800E7604
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B8BB0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800E64D4 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E67FC (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E68F8 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800E68F8.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::SortAndValidateLists(
        const char **a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  char *v8; // rcx
  __int64 v9; // r8
  char *v10; // rbx
  char *v11; // rcx
  __int64 v12; // r8
  char *v13; // rbx
  __int64 v14; // rbx
  double v15; // xmm7_8
  double v16; // xmm6_8
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rbx
  double v21; // xmm0_8
  unsigned int v22; // eax
  int v23; // edx
  int v24; // r8d
  char v25; // [rsp+48h] [rbp-79h]
  __int128 v26; // [rsp+50h] [rbp-71h] BYREF
  char *v27; // [rsp+60h] [rbp-61h]
  unsigned __int64 v28; // [rsp+68h] [rbp-59h]
  double v29; // [rsp+70h] [rbp-51h]
  double v30; // [rsp+78h] [rbp-49h]
  char v31; // [rsp+80h] [rbp-41h]
  void *v32[3]; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-21h]
  double v34; // [rsp+A8h] [rbp-19h]
  double v35; // [rsp+B0h] [rbp-11h]
  char v36; // [rsp+B8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
    *a4,
    a4[1],
    0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3));
  v8 = *(char **)a3;
  if ( *(_QWORD *)a3 != *(_QWORD *)(a3 + 8) )
  {
    v9 = (__int64)(*(_QWORD *)(a3 + 8) - (_QWORD)v8) >> 4;
    v26 = 0LL;
    v27 = 0LL;
    v28 = (v9 + 1) / 2;
    v29 = COERCE_DOUBLE(&v26);
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
      v8,
      *(__int128 **)(a3 + 8),
      v9,
      (__int64)&v26,
      v25);
    v10 = (char *)v26;
    if ( (_QWORD)v26 )
    {
      if ( (char *)v26 != v27 )
      {
        do
        {
          std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v10);
          v10 += 16;
        }
        while ( v10 != v27 );
        v10 = (char *)v26;
      }
      operator delete(v10);
    }
  }
  v11 = *(char **)a2;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
  {
    v12 = (__int64)(*(_QWORD *)(a2 + 8) - (_QWORD)v11) >> 4;
    v26 = 0LL;
    v27 = 0LL;
    v28 = (v12 + 1) / 2;
    v29 = COERCE_DOUBLE(&v26);
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
      v11,
      *(__int128 **)(a2 + 8),
      v12,
      (__int64)&v26,
      v25);
    v13 = (char *)v26;
    if ( (_QWORD)v26 )
    {
      if ( (char *)v26 != v27 )
      {
        do
        {
          std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v13);
          v13 += 16;
        }
        while ( v13 != v27 );
        v13 = (char *)v26;
      }
      operator delete(v13);
    }
  }
  v14 = *a4;
  v33 = 7LL;
  v32[2] = 0LL;
  LOWORD(v32[0]) = 0;
  std::wstring::assign(v32, (void **)v14, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v15 = *(double *)(v14 + 32);
  v34 = v15;
  v16 = *(double *)(v14 + 40);
  v35 = v16;
  v36 = *(_BYTE *)(v14 + 48);
  v17 = 1LL;
  v18 = *a4;
  if ( (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3)) > 1 )
  {
    v19 = 56LL;
    do
    {
      v20 = v19 + v18;
      v28 = 7LL;
      v27 = 0LL;
      LOWORD(v26) = 0;
      std::wstring::assign((void **)&v26, (void **)(v19 + v18), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v29 = *(double *)(v20 + 32);
      v21 = *(double *)(v20 + 40);
      v30 = v21;
      v31 = *(_BYTE *)(v20 + 48);
      if ( v29 == v15 && v21 == v16 )
      {
        v22 = wil::verify_hresult<long>(0x8007139F);
        wil::details::in1diag3::Throw_HrMsg(
          retaddr,
          87LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
          (const char *)v22,
          (unsigned __int64)"Duplicate found. SubscriptionId: %ls Collection:%ul Index:%ul",
          *a1,
          v24,
          v23);
      }
      std::wstring::assign(v32, (void **)&v26, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v15 = v29;
      v34 = v29;
      v16 = v30;
      v35 = v30;
      v36 = v31;
      if ( v28 >= 8 )
        operator delete((void *)v26);
      ++v17;
      v19 += 56LL;
      v18 = *a4;
    }
    while ( v17 < 0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3) );
  }
  if ( v33 >= 8 )
    operator delete(v32[0]);
}
