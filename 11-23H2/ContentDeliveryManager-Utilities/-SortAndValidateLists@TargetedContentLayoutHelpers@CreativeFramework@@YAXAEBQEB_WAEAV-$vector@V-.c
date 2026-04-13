/*
 * XREFs of ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800CF888
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CAB98 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A8AF0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B1D20 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800CEB64 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CF090 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@UItem@TargetedC.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@@std@@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@std@@@0@0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CF100 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@UI_ea_1800CF100.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@AEBU012@@Z @ 0x1800CF20C (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@AEBU012@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::SortAndValidateLists(
        const char **a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  double v10; // xmm6_8
  double v11; // xmm7_8
  int v12; // [rsp+38h] [rbp-79h]
  int v13; // [rsp+40h] [rbp-71h]
  char v14; // [rsp+48h] [rbp-69h]
  void *v15[4]; // [rsp+50h] [rbp-61h] BYREF
  double v16; // [rsp+70h] [rbp-41h]
  double v17; // [rsp+78h] [rbp-39h]
  char v18; // [rsp+80h] [rbp-31h]
  void *v19[4]; // [rsp+88h] [rbp-29h] BYREF
  double v20; // [rsp+A8h] [rbp-9h]
  double v21; // [rsp+B0h] [rbp-1h]
  char v22; // [rsp+B8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
    *a4,
    a4[1],
    0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3));
  std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
    *(char **)a3,
    *(__int64 **)(a3 + 8),
    v14);
  std::stable_sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
    *(char **)a2,
    *(__int64 **)(a2 + 8),
    v14);
  CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
    (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v19,
    (void **)*a4);
  v8 = 1LL;
  v9 = 56LL;
  v10 = v21;
  v11 = v20;
  while ( v8 < 0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3) )
  {
    CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v15,
      (void **)(v9 + *a4));
    if ( v16 == v11 && v17 == v10 )
    {
      v13 = (int)v17;
      v12 = (int)v16;
      wil::details::in1diag3::Throw_HrMsg(
        retaddr,
        (void *)0x57,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
        (const char *)0x8007139FLL,
        (__int64)"Duplicate found. SubscriptionId: %ls Collection:%ul Index:%ul",
        *a1,
        v12,
        v13);
    }
    std::wstring::operator=(v19, v15);
    v11 = v16;
    v20 = v16;
    v10 = v17;
    v21 = v17;
    v22 = v18;
    std::wstring::_Tidy(v15, 1, 0LL);
    ++v8;
    v9 += 56LL;
  }
  std::wstring::_Tidy(v19, 1, 0LL);
}
