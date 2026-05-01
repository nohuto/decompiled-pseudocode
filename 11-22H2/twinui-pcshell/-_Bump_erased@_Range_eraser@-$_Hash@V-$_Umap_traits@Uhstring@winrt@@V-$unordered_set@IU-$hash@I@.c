/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1807285C8
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1807287C4 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$eq.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022058C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4CloudPCState@Shell@Internal@Windows@w.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  void *v1; // rdi
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = (void *)a1[2];
  a1[2] = *(_QWORD *)v1;
  std::_Deallocate<16,0>(*((void **)v1 + 6), (*((_QWORD *)v1 + 7) - *((_QWORD *)v1 + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)v1 + 6) = 0LL;
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 8) = 0LL;
  std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>(
    v3,
    *((_QWORD ***)v1 + 4));
  std::_Deallocate<16,0>(*((void **)v1 + 4), 0x18uLL);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v1 + 2);
  std::_Deallocate<16,0>(v1, 0x58uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
