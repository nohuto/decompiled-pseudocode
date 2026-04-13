/*
 * XREFs of ??$make_shared@VCreativeRule@RuleSetHandlers@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x18008EC7C
 * Callers:
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180090A7C (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::RuleSetHandlers::CreativeRule,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rbx

  v6 = operator new(0x50uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::`vftable';
    v8 = *a3;
    std::wstring::wstring(v6 + 4, *a2);
    std::wstring::wstring(v7 + 12, v8);
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v7 + 4;
  return a1;
}
