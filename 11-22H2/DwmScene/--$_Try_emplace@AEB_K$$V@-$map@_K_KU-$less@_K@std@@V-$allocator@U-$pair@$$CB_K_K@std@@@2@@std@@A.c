/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$map@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FBAC
 * Callers:
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 *     ?GetUniqueID@ResourceManager@Engine@Spectre@@QEBA_KII@Z @ 0x1800702C8 (-GetUniqueID@ResourceManager@Engine@Spectre@@QEBA_KII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180010AF8 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6A-AV-$shared_ptr@VRendererReso.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180031714 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned __int64,unsigned __int64>::_Try_emplace<unsigned __int64 const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rdi
  unsigned __int64 size_of; // rax
  _QWORD *v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>::_Find_lower_bound<unsigned __int64>(
    a1,
    (__int64)&v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_QWORD *)(v12 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    v10 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<48>(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v8[4] = *a3;
    v8[5] = 0LL;
    *v8 = v6;
    v8[1] = v6;
    v8[2] = v6;
    *((_WORD *)v8 + 12) = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>(&v10);
    v10 = v11;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v10,
                      (__int64)v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
