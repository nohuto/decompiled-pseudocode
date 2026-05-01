/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180665EFC
 * Callers:
 *     ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180142FE0 (-UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RevokeSnapIds@CShellSnapComponent@@AEAAXXZ @ 0x1801B885C (-RevokeSnapIds@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18065E79C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@s.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180665DBC (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::clear(
        _QWORD *a1)
{
  __int64 *v2; // rdx
  void *v3; // rdx
  unsigned __int64 v4; // rcx

  if ( a1[2] )
  {
    v2 = (__int64 *)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>>>(
        (__int64)a1,
        (_QWORD **)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v3 = (void *)a1[3];
      v4 = (unsigned __int64)(a1[4] - (_QWORD)v3 + 7LL) >> 3;
      if ( (unsigned __int64)v3 > a1[4] )
        v4 = 0LL;
      if ( v4 )
        memset64(v3, a1[1], v4);
    }
    else
    {
      std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::_Unchecked_erase(
        a1,
        *v2,
        a1[1]);
    }
  }
}
