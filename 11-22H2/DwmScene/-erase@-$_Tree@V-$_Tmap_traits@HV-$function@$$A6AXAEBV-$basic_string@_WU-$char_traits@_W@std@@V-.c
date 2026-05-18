/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBH@Z @ 0x1800DF4EC
 * Callers:
 *     ?RemoveHandler@JsonConfigurationManager@Utils@Spectre@@UEAAXH@Z @ 0x1800DED40 (-RemoveHandler@JsonConfigurationManager@Utils@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@1@@Z @ 0x18001C954 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AXAEBV-$basic_string@DU-$.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18001CA94 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBHV-$function@$$A6AXAEBV-$basic_string@_WU-$c.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180028BD0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>::erase(
        __int64 *a1,
        int *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_DWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_DWORD *)(v6 + 32) )
          v5 = v6;
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( *(_BYTE *)(v5 + 25) )
    v8 = *(_QWORD *)(v2 + 8);
  else
    v8 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v8 + 32) )
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      v5 = v8;
      v8 = *(_QWORD *)v8;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v15 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v15);
    v9 = v15;
  }
  v15 = v4;
  if ( v4 == *(_QWORD *)v2 && *(_BYTE *)(v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      *(__int64 **)(v2 + 8));
    *(_QWORD *)(v2 + 8) = v2;
    *(_QWORD *)v2 = v2;
    *(_QWORD *)(v2 + 16) = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v15);
      v13 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract(a1, v12);
      std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>(
        v14,
        (char *)v13);
      v4 = v15;
    }
  }
  return v10;
}
