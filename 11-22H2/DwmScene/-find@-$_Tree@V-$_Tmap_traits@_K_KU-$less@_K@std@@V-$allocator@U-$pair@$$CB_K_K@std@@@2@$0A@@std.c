/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@AEB_K@Z @ 0x180070684
 * Callers:
 *     ?GetRepresentative@ResourceManager@Engine@Spectre@@QEBA_K_K@Z @ 0x180070250 (-GetRepresentative@ResourceManager@Engine@Spectre@@QEBA_K_K@Z.c)
 *     ?GetUniqueID@ResourceManager@Engine@Spectre@@QEBA_KII@Z @ 0x1800702C8 (-GetUniqueID@ResourceManager@Engine@Spectre@@QEBA_KII@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180010AF8 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6A-AV-$shared_ptr@VRendererReso.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned __int64,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>::_Find_lower_bound<unsigned __int64>(
    a1,
    (__int64)v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
