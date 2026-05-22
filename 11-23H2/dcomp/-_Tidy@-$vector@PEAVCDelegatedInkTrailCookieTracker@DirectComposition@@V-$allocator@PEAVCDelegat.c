/*
 * XREFs of ?_Tidy@?$vector@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@V?$allocator@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@std@@@std@@AEAAXXZ @ 0x1800958D0
 * Callers:
 *     _dynamic_atexit_destructor_for__DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers__ @ 0x1800B2110 (_dynamic_atexit_destructor_for__DirectComposition--CDelegatedInkTrailCookieTracker--s_trackers__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DirectComposition::CDelegatedInkTrailCookieTracker *>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
