/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1806EF7FC
 * Callers:
 *     ??1?$unordered_map@Uhstring@winrt@@_NU?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@@std@@QEAA@XZ @ 0x1801C6140 (--1-$unordered_map@Uhstring@winrt@@_NU-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@.c)
 *     ??1?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAA@XZ @ 0x1806F0A2C (--1-$list@U-$pair@$$CBUhstring@winrt@@_N@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@@_N@std@@@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 **v2; // rdi
  volatile signed __int32 *v3; // rbx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(volatile signed __int32 ***)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *v2;
      winrt::handle_type<winrt::impl::hstring_traits>::close(v2 + 2);
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = (volatile signed __int32 **)v3;
    }
    while ( v3 );
  }
}
