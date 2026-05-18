/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$map@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800525D4
 * Callers:
 *     ?RegisterResources@RenderDeviceGeneric@Engine@Spectre@@UEAAXXZ @ 0x1800535E0 (-RegisterResources@RenderDeviceGeneric@Engine@Spectre@@UEAAXXZ.c)
 *     ?RegisterResources@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C6B70 (-RegisterResources@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180010AF8 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6A-AV-$shared_ptr@VRendererReso.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180052798 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBHV-$function@$$A6AXAEBV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>::_Find_lower_bound<unsigned __int64>(
    a1,
    (__int64)&v10,
    a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_QWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    *(_QWORD *)&v9 = a1;
    v7 = (__int64 *)operator new(0x68uLL);
    v7[4] = *a3;
    v7[12] = 0LL;
    *v7 = v6;
    v7[1] = v6;
    v7[2] = v6;
    *((_WORD *)v7 + 12) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>(&v9);
    v9 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v9,
                      (__int64)v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
