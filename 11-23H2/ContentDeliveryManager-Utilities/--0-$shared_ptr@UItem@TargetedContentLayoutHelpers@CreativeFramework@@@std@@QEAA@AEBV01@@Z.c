/*
 * XREFs of ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800C6E08
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800CCF40 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800CF4D4 (-BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasSto.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAXPEAUItem@TargetedContentLayoutHelpers@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800CCD40 (-_Reset0@-$_Ptr_base@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAXPEAUItem@T.c)
 */

_QWORD *__fastcall std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  std::_Ptr_base<CreativeFramework::TargetedContentLayoutHelpers::Item>::_Reset0(a1, v4, v3);
  return a1;
}
