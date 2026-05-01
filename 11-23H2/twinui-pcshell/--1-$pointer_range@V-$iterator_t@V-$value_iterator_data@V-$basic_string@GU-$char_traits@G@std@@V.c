/*
 * XREFs of ??1?$pointer_range@V?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@wil@@QEAA@XZ @ 0x1801E8A28
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 *     _UndockedSearchAppExperienceManager::AuditWebSearchExtensions_::_1_::dtor$8 @ 0x1801EA8DB (_UndockedSearchAppExperienceManager--AuditWebSearchExtensions_--_1_--dtor$8.c)
 *     _UndockedSearchAppExperienceManager::AuditWebSearchExtensions_::_1_::dtor$13 @ 0x1801EA90B (_UndockedSearchAppExperienceManager--AuditWebSearchExtensions_--_1_--dtor$13.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall wil::details::pointer_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>::~pointer_range<wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>>(
        __int64 a1)
{
  std::wstring::_Tidy_deallocate(a1 + 64);
  return std::wstring::_Tidy_deallocate(a1);
}
