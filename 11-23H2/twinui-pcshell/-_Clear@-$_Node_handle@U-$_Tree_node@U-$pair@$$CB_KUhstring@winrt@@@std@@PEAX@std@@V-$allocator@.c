/*
 * XREFs of ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@AEAAXXZ @ 0x18071A4EC
 * Callers:
 *     ??1?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@QEAA@XZ @ 0x18070E5FC (--1-$_Node_handle@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V-$allocator@U-$pa.c)
 *     ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18070EE4C (--4-$_Node_handle@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V-$allocator@U-$pa.c)
 *     ?Remove@?$map_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@@winrt@@QEAAXAEBI@Z @ 0x1807177D0 (-Remove@-$map_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$alloca.c)
 *     ?Remove@?$map_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@@winrt@@QEAAXAEB_K@Z @ 0x180717958 (-Remove@-$map_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x18068323C (--_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::_Clear(
        void **a1)
{
  volatile signed __int32 **v2; // rcx

  v2 = (volatile signed __int32 **)*a1;
  if ( v2 )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion::`scalar deleting destructor'(v2 + 4);
    std::_Deallocate<16,0>(*a1, 0x30uLL);
    *a1 = 0LL;
  }
}
