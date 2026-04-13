/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800518A0
 * Callers:
 *     ??$make_pair@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@std@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@0@@Z @ 0x18004FD94 (--$make_pair@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V-$B.c)
 *     ??0BaseScenarioEvents@details@Health@CreativeFramework@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180051AF8 (--0BaseScenarioEvents@details@Health@CreativeFramework@@QEAA@AEBV-$basic_string@GU-$char_traits@.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18005538C (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetEventNameFromToken@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180058384 (-GetEventNameFromToken@ContentManagement@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$_Find_if@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x1800662EC (--$_Find_if@V-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$.c)
 *     ??0?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@AEBU01@@Z @ 0x180066F54 (--0-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@AEBU0.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180067580 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006A350 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18007222C (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800C33D0 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

__int64 __fastcall std::wstring::wstring(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::assign(a1, a2, 0LL, -1LL);
  return a1;
}
