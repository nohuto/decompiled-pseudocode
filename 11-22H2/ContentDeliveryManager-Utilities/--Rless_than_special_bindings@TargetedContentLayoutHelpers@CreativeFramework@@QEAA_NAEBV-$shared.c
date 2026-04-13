/*
 * XREFs of ??Rless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@0@Z @ 0x1800CF4EC
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CD424 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800CD424.c)
 *     ??$_Insertion_sort1@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@V12@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800CE068 (--$_Insertion_sort1@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFra_ea_1800CE068.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CE3E0 (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@s_ea_1800CE3E0.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CE5A8 (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@s_ea_1800CE5A8.c)
 *     ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CE76C (--$_Merge_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800CE76C.c)
 * Callees:
 *     <none>
 */

bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  double v3; // xmm0_8
  double v4; // xmm1_8

  v3 = *(double *)(*(_QWORD *)a2 + 32LL);
  v4 = *(double *)(*(_QWORD *)a3 + 32LL);
  return v4 > v3 || v3 == v4 && *(double *)(*(_QWORD *)a3 + 40LL) > *(double *)(*(_QWORD *)a2 + 40LL);
}
