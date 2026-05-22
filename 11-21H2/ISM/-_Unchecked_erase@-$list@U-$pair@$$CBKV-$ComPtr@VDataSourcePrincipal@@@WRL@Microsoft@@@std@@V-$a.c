/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@2@QEAU32@@Z @ 0x18014239C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1801426DC (-erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>::_Unchecked_erase(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx

  v3 = *a2;
  --*(_QWORD *)(a1 + 8);
  *a2[1] = v3;
  v3[1] = a2[1];
  v4 = a2[3];
  if ( v4 )
  {
    a2[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  }
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v3;
}
