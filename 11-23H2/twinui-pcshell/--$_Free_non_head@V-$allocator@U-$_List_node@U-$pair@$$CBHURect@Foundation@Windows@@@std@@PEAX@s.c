/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18065E79C
 * Callers:
 *     ??1?$list@U?$pair@$$CBHURect@Foundation@Windows@@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x18065EEEC (--1-$list@U-$pair@$$CBHURect@Foundation@Windows@@@std@@V-$allocator@U-$pair@$$CBHURect@Foundatio.c)
 *     ??1?$unordered_map@HURect@Foundation@Windows@@U?$hash@H@std@@U?$equal_to@H@5@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@@std@@QEAA@XZ @ 0x18065EF48 (--1-$unordered_map@HURect@Foundation@Windows@@U-$hash@H@std@@U-$equal_to@H@5@V-$allocator@U-$pai.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18065EFF0 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180665EFC (-clear@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U-$e.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x28uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
