/*
 * XREFs of ??1?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1805DD670
 * Callers:
 *     _api_alchemy_config::_anonymous_namespace_::GetSpecsForID_::_1_::dtor$2 @ 0x1805DDB03 (_api_alchemy_config--_anonymous_namespace_--GetSpecsForID_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::optional<std::wstring>::~optional<std::wstring>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
    return std::wstring::_Tidy_deallocate(a1);
  return result;
}
