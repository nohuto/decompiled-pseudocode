/*
 * XREFs of ??$_Uninitialized_copy@PEBUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEBU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7AA4
 * Callers:
 *     ??$_Assign_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1806F76F4 (--$_Assign_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7800 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall std::_Uninitialized_copy<winrt::hstring const *>(
        winrt::impl **a1,
        struct winrt::impl::hstring_header *a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 **v3; // rbx
  winrt::impl **i; // rdi

  v3 = a3;
  for ( i = a1; i != (winrt::impl **)a2; ++i )
    *v3++ = (volatile signed __int32 *)winrt::impl::duplicate_hstring(*i, a2, (unsigned int)a3);
  std::_Destroy_range<std::allocator<winrt::hstring>>(v3, v3);
  return v3;
}
