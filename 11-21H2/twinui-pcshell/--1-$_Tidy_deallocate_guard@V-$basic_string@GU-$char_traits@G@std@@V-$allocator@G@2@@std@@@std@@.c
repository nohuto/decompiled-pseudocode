/*
 * XREFs of ??1?$_Tidy_deallocate_guard@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1805DD550
 * Callers:
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Construct_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short______::_1_::dtor$0 @ 0x1805DCBB1 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_1805DCBB1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_deallocate_guard<std::wstring>::~_Tidy_deallocate_guard<std::wstring>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::wstring::_Tidy_deallocate(v1);
  return result;
}
