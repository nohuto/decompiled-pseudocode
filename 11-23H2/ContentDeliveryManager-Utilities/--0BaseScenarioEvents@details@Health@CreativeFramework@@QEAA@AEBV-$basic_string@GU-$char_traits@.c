/*
 * XREFs of ??0BaseScenarioEvents@details@Health@CreativeFramework@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180051AF8
 * Callers:
 *     ??$make_shared@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEB_N@std@@YA?AV?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEB_N@Z @ 0x18004FDCC (--$make_shared@V-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@AEBV-$basic_str.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180040C4C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800518A0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG@Z @ 0x180062C08 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::Health::details::BaseScenarioEvents::BaseScenarioEvents(
        __int64 a1,
        __int64 a2,
        char a3)
{
  _QWORD *v6; // r14
  unsigned __int16 v9[264]; // [rsp+30h] [rbp-238h] BYREF

  *(_QWORD *)a1 = &CreativeFramework::Health::details::BaseScenarioEvents::`vftable';
  memset_0((void *)(a1 + 16), 0, 0x58uLL);
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  *(_OWORD *)(a1 + 152) = 0LL;
  *(_OWORD *)(a1 + 168) = 0LL;
  v6 = (_QWORD *)(a1 + 184);
  std::wstring::wstring(a1 + 184, a2);
  *(_QWORD *)(a1 + 240) = 7LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_WORD *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 248) = a3;
  *(_DWORD *)(a1 + 249) = 0;
  *(_WORD *)(a1 + 253) = 0;
  *(_BYTE *)(a1 + 8) = 4;
  *(_BYTE *)(a1 + 104) = 4;
  *(_BYTE *)(a1 + 144) = 4;
  if ( *(_QWORD *)(a1 + 208) >= 8uLL )
    v6 = (_QWORD *)*v6;
  StringCchPrintfW(
    v9,
    0x104uLL,
    (size_t *)L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Health\\Placement-%s",
    v6,
    a1);
  std::wstring::assign(a1 + 216, v9);
  return a1;
}
