/*
 * XREFs of ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803293C8
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803293C8 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x180332108 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x18032854C (--$_Insertion_sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 *     ??$_Make_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180328950 (--$_Make_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180328BB8 (--$_Partition_by_median_guess_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ??$_Sort_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803292E4 (--$_Sort_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803293C8 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 */

__int64 __fastcall std::_Sort_unchecked<std::wstring *,std::less<void>>(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 i; // rsi
  __int64 v9; // r9
  unsigned __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v5 = a2 - a1;
  v7 = a2;
  for ( i = a1; ; v5 = v7 - i )
  {
    if ( (__int64)(v5 & 0xFFFFFFFFFFFFFFE0uLL) <= 1024 )
      return std::_Insertion_sort_unchecked<std::wstring *,std::less<void>>(i, v7);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<std::wstring *,std::less<void>>(&v11, i, v7);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v9) = a4;
    if ( (__int64)((v11 - i) & 0xFFFFFFFFFFFFFFE0uLL) >= (__int64)((v7 - v12) & 0xFFFFFFFFFFFFFFE0uLL) )
    {
      std::_Sort_unchecked<std::wstring *,std::less<void>>(v12, v7, a3, v9);
      v7 = v11;
    }
    else
    {
      std::_Sort_unchecked<std::wstring *,std::less<void>>(i, v11, a3, v9);
      i = v12;
    }
  }
  std::_Make_heap_unchecked<std::wstring *,std::less<void>>(i, v7, a4);
  return std::_Sort_heap_unchecked<std::wstring *,std::less<void>>(i, v7);
}
