/*
 * XREFs of ??$?0V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005EA50
 * Callers:
 *     ?GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA?AV?$set@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800609DC (-GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA-AV-$set@V-$weak_ptr@VMaterial@Engine@Spe.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@2@PEAU32@@Z @ 0x18001DD04 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x18005EC88 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBMV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18005EDA8 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@U-.c)
 *     ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18005FAEC (--1-$_Tree_head_scoped_ptr@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 i; // rcx
  __int64 *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v13 = a1;
  v14 = a1;
  v5 = std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(
         a1,
         a2);
  *a1 = v5;
  LOBYTE(v6) = a3;
  *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>::_Copy_tag>(
                           a1,
                           *(_QWORD *)(*a2 + 8LL),
                           v5,
                           v6);
  a1[1] = a2[1];
  v7 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v7 + 25) )
  {
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>>>::_Min((_QWORD *)v7);
    *v9 = v8;
    v10 = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(v10 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v10 = i;
    *(_QWORD *)(*a1 + 16) = v10;
  }
  v14 = 0LL;
  std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>>(&v13);
  return a1;
}
