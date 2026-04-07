/*
 * XREFs of ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@N@std@@AEAAXXZ @ 0x1800FF8AC
 * Callers:
 *     ??1?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@N@std@@QEAA@XZ @ 0x1800FCC48 (--1-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V-$allocator@U-$pai.c)
 *     ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@N@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FCE50 (--4-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V-$allocator@U-$pai.c)
 *     ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1800FEE0C (-Remove@-$map_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>,std::allocator<std::pair<winrt::hstring const,double>>,std::_Node_handle_map_base,winrt::hstring,double>::_Clear(
        void **a1)
{
  void **v2; // rcx
  __int64 result; // rax

  v2 = (void **)*a1;
  if ( v2 )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close(v2 + 4);
    result = std::_Deallocate<16,0>(*a1, 0x30uLL);
    *a1 = 0LL;
  }
  return result;
}
