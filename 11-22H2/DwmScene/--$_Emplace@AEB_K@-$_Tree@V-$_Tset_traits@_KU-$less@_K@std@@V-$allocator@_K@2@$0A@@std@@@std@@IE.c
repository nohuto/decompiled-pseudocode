/*
 * XREFs of ??$_Emplace@AEB_K@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@_KPEAX@std@@_N@1@AEB_K@Z @ 0x1800A062C
 * Callers:
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800A093C (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@Q.c)
 * Callees:
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180010AF8 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6A-AV-$shared_ptr@VRendererReso.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180029284 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@E_ea_180029284.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@@Z @ 0x1800A097C (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@std@@QEAA@AEAV-$allocat.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800A187C (-_Check_grow_by_1@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@IE.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Emplace<unsigned __int64 const &>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 lower; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rbx
  _BYTE v11[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]

  lower = std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>::_Find_lower_bound<unsigned __int64>(
            a1,
            (__int64)v11,
            a3);
  v7 = *(_OWORD *)lower;
  v14 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v14 + 25) || *a3 < *(_QWORD *)(v14 + 32) )
  {
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Check_grow_by_1(a1);
    v8 = *a1;
    std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned __int64,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
      v11,
      a1);
    *(_QWORD *)(v12 + 32) = *a3;
    *(_QWORD *)v12 = v8;
    *(_QWORD *)(v12 + 8) = v8;
    *(_QWORD *)(v12 + 16) = v8;
    *(_BYTE *)(v12 + 24) = 0;
    *(_BYTE *)(v12 + 25) = 0;
    v9 = v12;
    v12 = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>,void *>>>((__int64)v11);
    v13 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
