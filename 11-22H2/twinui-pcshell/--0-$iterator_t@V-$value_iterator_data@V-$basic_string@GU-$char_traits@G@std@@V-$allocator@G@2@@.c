/*
 * XREFs of ??0?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAA@PEAUHKEY__@@@Z @ 0x1801E834C
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?enumerate_current_index@?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1801F0AAC (-enumerate_current_index@-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>::iterator_t<wil::reg::value_iterator_data<std::wstring>>(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = -1;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    v3 = wil::reg::value_iterator_data<std::wstring>::enumerate_current_index((wchar_t *)a1);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6DE,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
        (const char *)(unsigned int)v3,
        v5);
  }
  return a1;
}
