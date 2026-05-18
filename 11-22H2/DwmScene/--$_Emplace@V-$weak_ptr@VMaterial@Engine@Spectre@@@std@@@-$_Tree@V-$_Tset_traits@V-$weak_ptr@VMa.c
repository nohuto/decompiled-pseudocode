/*
 * XREFs of ??$_Emplace@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VMaterial@Engine@Spectre@@@1@@Z @ 0x18005EF7C
 * Callers:
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@$$QEAV?$weak_ptr@VMaterial@Engine@Spectre@@@1@@Z @ 0x18005EB0C (--$-0V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FB40 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>::_Emplace<std::weak_ptr<Spectre::Engine::Material>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v15 = 0;
  v4 = *a1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  v14 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = a3[1];
    do
    {
      v14 = v8;
      if ( *(_QWORD *)(v8 + 40) >= v9 )
      {
        v7 = v8;
        v15 = 1;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v15 = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || a3[1] < *(_QWORD *)(v7 + 40) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v10 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
            v13,
            (__int64)a1,
            v4,
            a3);
    v11 = v10[1];
    v10[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(v13);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v14,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
