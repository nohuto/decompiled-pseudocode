/*
 * XREFs of ??$_Emplace_reallocate@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@?$vector@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@V?$allocator@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@std@@@std@@QEAAPEAPEAVCDelegatedInkTrailCookieTracker@DirectComposition@@QEAPEAV23@$$QEAPEAV23@@Z @ 0x1800E5810
 * Callers:
 *     ?GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E5AB4 (-GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProx.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Change_array@?$vector@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@V?$allocator@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@std@@@std@@AEAAXQEAPEAVCDelegatedInkTrailCookieTracker@DirectComposition@@_K1@Z @ 0x1800E5CF4 (-_Change_array@-$vector@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@V-$allocator@PEAV.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<DirectComposition::CDelegatedInkTrailCookieTracker *>::_Emplace_reallocate<DirectComposition::CDelegatedInkTrailCookieTracker *>(
        const char *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  char *v12; // rdi
  char *v13; // r14
  void *v14; // rcx
  const void *v15; // rdx
  size_t v16; // r8
  __int64 v17; // rcx

  v4 = (a2 - (_BYTE *)DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers) >> 3;
  v5 = 0x1FFFFFFFFFFFFFFFLL;
  v6 = (qword_180220998 - (__int64)DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v8 = v6 + 1;
  v9 = (qword_1802209A0 - (__int64)DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v5 = v10 + v9;
    if ( v10 + v9 < v8 )
      v5 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v5);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[8 * v4];
  *(_QWORD *)v13 = *a3;
  v14 = v12;
  v15 = DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers;
  if ( a2 == (_BYTE *)qword_180220998 )
  {
    v16 = qword_180220998 - (_QWORD)DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers;
  }
  else
  {
    memmove_0(
      v12,
      DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers,
      a2 - (_BYTE *)DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers);
    v14 = v13 + 8;
    v16 = qword_180220998 - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v14, v15, v16);
  std::vector<DirectComposition::CDelegatedInkTrailCookieTracker *>::_Change_array(v17, v12, v8, v5);
  return v13;
}
