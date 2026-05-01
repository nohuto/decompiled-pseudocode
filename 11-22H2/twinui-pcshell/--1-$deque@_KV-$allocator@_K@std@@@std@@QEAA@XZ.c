/*
 * XREFs of ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x180145218
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180031A50 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800327D4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801434E8 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$15 @ 0x1802B5535 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$15.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder_::_1_::dtor$0 @ 0x1802BE322 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveTabsFromWindowOrder_--_1_.c)
 * Callees:
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x180145244 (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::~deque<unsigned __int64>(__int64 *a1)
{
  __int64 v2; // rcx

  std::deque<unsigned __int64>::_Tidy(a1);
  v2 = *a1;
  *a1 = 0LL;
  return std::_Deallocate<16,0>(v2, 16LL);
}
