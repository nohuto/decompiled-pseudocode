/*
 * XREFs of ??$make_range@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@wil@@YA?AV?$pointer_range@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@0@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@0@0@Z @ 0x1801E72C8
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x1801E8540 (--0-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

__int64 __fastcall wil::make_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE v7[64]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[88]; // [rsp+60h] [rbp-58h] BYREF

  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(v8, a3);
  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(v7, a2);
  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(a1, v7);
  wil::reg::value_iterator_data<std::wstring>::value_iterator_data<std::wstring>(a1 + 64, v8);
  std::wstring::_Tidy_deallocate((__int64)v7);
  std::wstring::_Tidy_deallocate((__int64)v8);
  std::wstring::_Tidy_deallocate(a2);
  std::wstring::_Tidy_deallocate(a3);
  return a1;
}
