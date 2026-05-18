/*
 * XREFs of ??$_Try_emplace@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@$$V@?$map@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VRenderDevice@Engine@Spectre@@@1@@Z @ 0x18002FDBC
 * Callers:
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002D654 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$weak_ptr@VRenderDevice@Engine@Spectre@@@std.c)
 *     ??$_Find_lower_bound@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@1@AEBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@1@@Z @ 0x18002F01C (--$_Find_lower_bound@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@-$_Tree@V-$_Tmap_traits@V-.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800318FC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VRenderDevice@Engine@Spe.c)
 */

__int64 __fastcall std::map<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>>::_Try_emplace<std::weak_ptr<Spectre::Engine::RenderDevice>,>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _QWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>,0>>::_Find_lower_bound<std::weak_ptr<Spectre::Engine::RenderDevice>>(
    a1,
    (__int64)&v12,
    a3);
  if ( *(_BYTE *)(v13 + 25) || v6[1] < *(_QWORD *)(v13 + 40) )
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v14 = v6;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>>>(
           v11,
           (__int64)a1,
           v7,
           v5,
           &v14);
    v9 = v8[1];
    v8[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>,void *>>>(v11);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
