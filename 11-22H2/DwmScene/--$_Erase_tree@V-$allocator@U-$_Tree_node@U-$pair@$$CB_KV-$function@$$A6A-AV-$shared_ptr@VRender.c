/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@1@@Z @ 0x180024D1C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@1@@Z @ 0x180024D1C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$function@$$A6A-AV-$shared_ptr@VRender.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800259C8 (--1-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6A-AV-$shared_ptr@VRendererResource@Engine@Spectre@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@1@@Z @ 0x180024D1C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$function@$$A6A-AV-$shared_ptr@VRender.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 v7; // rdx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Func_class<void,>::_Tidy((__int64)v6 + 40, v7);
      std::_Deallocate<16,0>(v6, 0x68uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
