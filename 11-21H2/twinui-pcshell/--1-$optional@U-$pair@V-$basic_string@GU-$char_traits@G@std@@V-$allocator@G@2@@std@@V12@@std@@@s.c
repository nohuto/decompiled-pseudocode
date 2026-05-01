/*
 * XREFs of ??1?$optional@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@QEAA@XZ @ 0x1805DD624
 * Callers:
 *     _api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_::_1_::dtor$4 @ 0x1805DD502 (_api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_--_1_--dtor$4.c)
 *     _api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_::_1_::dtor$6 @ 0x1805DD51A (_api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_--_1_--dtor$6.c)
 *     _api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_::_1_::dtor$9 @ 0x1805DD53E (_api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_--_1_--dtor$9.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::optional<std::pair<std::wstring,std::wstring>>::~optional<std::pair<std::wstring,std::wstring>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 64) )
  {
    std::wstring::_Tidy_deallocate(a1 + 32);
    return std::wstring::_Tidy_deallocate(a1);
  }
  return result;
}
