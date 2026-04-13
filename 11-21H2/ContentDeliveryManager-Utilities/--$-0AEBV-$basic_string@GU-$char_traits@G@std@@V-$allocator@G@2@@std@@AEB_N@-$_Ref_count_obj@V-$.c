/*
 * XREFs of ??$?0AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEB_N@?$_Ref_count_obj@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEB_N@Z @ 0x1800519CC
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005EED8 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005F0BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>::_Ref_count_obj<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  __int64 v4; // r15
  char v5; // bl
  _QWORD *v6; // r14
  __int64 v7; // rbp
  __int64 v10; // [rsp+28h] [rbp-250h]
  unsigned __int16 Src[264]; // [rsp+30h] [rbp-248h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>::`vftable';
  v4 = a1 + 16;
  v10 = a1 + 16;
  v5 = *a3;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Health::details::BaseScenarioEvents::`vftable';
  memset_0((void *)(a1 + 32), 0, 0x58uLL);
  *(_OWORD *)(v4 + 112) = 0LL;
  *(_OWORD *)(v4 + 128) = 0LL;
  *(_OWORD *)(v4 + 152) = 0LL;
  *(_OWORD *)(v4 + 168) = 0LL;
  v6 = (_QWORD *)(v4 + 184);
  *(_QWORD *)(v4 + 208) = 7LL;
  *(_QWORD *)(v4 + 200) = 0LL;
  *(_WORD *)(v4 + 184) = 0;
  v7 = -1LL;
  std::wstring::assign((void *)(v4 + 184));
  *(_QWORD *)(v4 + 240) = 7LL;
  *(_QWORD *)(v4 + 232) = 0LL;
  *(_WORD *)(v4 + 216) = 0;
  *(_BYTE *)(v4 + 248) = v5;
  *(_DWORD *)(v4 + 249) = 0;
  *(_WORD *)(v4 + 253) = 0;
  *(_BYTE *)(v4 + 8) = 4;
  *(_BYTE *)(v4 + 104) = 4;
  *(_BYTE *)(v4 + 144) = 4;
  if ( *(_QWORD *)(v4 + 208) >= 8uLL )
    v6 = (_QWORD *)*v6;
  StringCchPrintfW(
    Src,
    260LL,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Health\\Placement-%s",
    v6,
    a1,
    v10);
  if ( Src[0] )
  {
    do
      ++v7;
    while ( Src[v7] );
  }
  std::wstring::assign((void *)(v4 + 216), Src);
  *(_QWORD *)v4 = &CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::`vftable';
  return a1;
}
