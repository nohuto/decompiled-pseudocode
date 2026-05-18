/*
 * XREFs of ??$_Try_emplace@AEBH$$V@?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@_N@1@AEBH@Z @ 0x1800DFC90
 * Callers:
 *     ?SetCancelledCallback@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAHV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0380 (-SetCancelledCallback@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAHV-$function@$$A6AXXZ@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@H@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEBH@Z @ 0x18002EFCC (--$_Find_lower_bound@H@-$_Tree@V-$_Tmap_traits@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180052798 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBHV-$function@$$A6AXAEBV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<int,std::function<void (void)>>::_Try_emplace<int const &,>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>::_Find_lower_bound<int>(
    a1,
    (__int64)&v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_DWORD *)(v12 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    *(_QWORD *)&v10 = a1;
    v7 = operator new(0x68uLL);
    v7[8] = *a3;
    *((_QWORD *)v7 + 12) = 0LL;
    *(_QWORD *)v7 = v6;
    *((_QWORD *)v7 + 1) = v6;
    *((_QWORD *)v7 + 2) = v6;
    *((_WORD *)v7 + 12) = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>(
      (__int64)&v10,
      v8);
    v10 = v11;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v10,
                      (__int64)v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
