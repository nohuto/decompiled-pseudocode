/*
 * XREFs of ??1?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x1800AC8AC
 * Callers:
 *     ??1?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800AC884 (--1-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$_.c)
 *     _std::unordered_set_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_______::unordered_set_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________::_1_::dtor$1 @ 0x1800DAF58 (_std--unordered_set_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__.c)
 * Callees:
 *     ?clear@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAXXZ @ 0x1800B02DC (-clear@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

void __fastcall std::list<std::wstring>::~list<std::wstring>(void **a1)
{
  std::list<std::wstring>::clear();
  operator delete(*a1);
}
