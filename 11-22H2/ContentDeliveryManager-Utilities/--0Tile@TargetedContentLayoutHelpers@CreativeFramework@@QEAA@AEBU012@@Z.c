/*
 * XREFs of ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@AEBU012@@Z @ 0x1800CF25C
 * Callers:
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800CF8D8 (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x18009AE78 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 */

CreativeFramework::TargetedContentLayoutHelpers::Tile *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
        CreativeFramework::TargetedContentLayoutHelpers::Tile *this,
        void **a2)
{
  std::wstring::wstring((__int64)this, a2);
  *((_QWORD *)this + 4) = a2[4];
  *((_QWORD *)this + 5) = a2[5];
  *((_BYTE *)this + 48) = *((_BYTE *)a2 + 48);
  return this;
}
