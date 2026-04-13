/*
 * XREFs of ??$make_shared@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEB_N@std@@YA?AV?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEB_N@Z @ 0x18004FE1C
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180059414 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180059550 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0BaseScenarioEvents@details@Health@CreativeFramework@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180051B48 (--0BaseScenarioEvents@details@Health@CreativeFramework@@QEAA@AEBV-$basic_string@GU-$char_traits@.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>,std::wstring const &,bool const &>(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rdi

  v6 = operator new(0x110uLL);
  v8 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>::`vftable';
    LOBYTE(v7) = *a3;
    CreativeFramework::Health::details::BaseScenarioEvents::BaseScenarioEvents(v6 + 4, a2, v7);
    *((_QWORD *)v8 + 2) = &CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  a1[1] = v8;
  *a1 = v8 + 4;
  return a1;
}
