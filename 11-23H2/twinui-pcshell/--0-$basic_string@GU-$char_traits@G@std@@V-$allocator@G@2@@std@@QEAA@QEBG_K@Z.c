/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180489DC4
 * Callers:
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1802D592A (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180629434 (-TryGetProcessCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@Z.c)
 *     ?CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$pair@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEFBU_ITEMIDLIST@@@Z @ 0x18069FFF4 (-CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$pair@V-$unique_pt.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall std::wstring::wstring(__int64 a1, void *a2, unsigned __int64 a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  std::wstring::assign((char *)a1, a2, a3);
  return a1;
}
