/*
 * XREFs of ?_Change_array@?$vector@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@V?$allocator@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@std@@@std@@AEAAXQEAPEAVCDelegatedInkTrailCookieTracker@DirectComposition@@_K1@Z @ 0x1800E5CF4
 * Callers:
 *     ??$_Emplace_reallocate@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@?$vector@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@V?$allocator@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@std@@@std@@QEAAPEAPEAVCDelegatedInkTrailCookieTracker@DirectComposition@@QEAPEAV23@$$QEAPEAV23@@Z @ 0x1800E5810 (--$_Emplace_reallocate@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@-$vector@PEAVCDel.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<DirectComposition::CDelegatedInkTrailCookieTracker *>::_Change_array(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  if ( DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers )
    std::_Deallocate<16,0>(
      DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers,
      (qword_1802209A0 - (_QWORD)DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers) & 0xFFFFFFFFFFFFFFF8uLL);
  DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers = a2;
  qword_180220998 = (__int64)a2 + 8 * a3;
  result = (__int64)a2 + 8 * a4;
  qword_1802209A0 = result;
  return result;
}
