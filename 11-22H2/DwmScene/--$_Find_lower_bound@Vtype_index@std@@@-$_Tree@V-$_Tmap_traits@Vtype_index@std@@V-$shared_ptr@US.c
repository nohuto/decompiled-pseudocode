/*
 * XREFs of ??$_Find_lower_bound@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@std@@@1@AEBVtype_index@1@@Z @ 0x18002F070
 * Callers:
 *     ??$_Find@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@1@AEBVtype_index@1@@Z @ 0x18002EB18 (--$_Find@Vtype_index@std@@@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@USceneCustomDa.c)
 *     ??$_Try_emplace@AEBVtype_index@std@@$$V@?$map@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEBVtype_index@1@@Z @ 0x18002F970 (--$_Try_emplace@AEBVtype_index@std@@$$V@-$map@Vtype_index@std@@V-$shared_ptr@USceneCustomData@En.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBVtype_index@2@@Z @ 0x180038644 (-count@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@USceneCustomData@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::_Find_lower_bound<std::type_index>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = v6[4] + 8;
    v8 = *a3 + 8LL;
    *(_QWORD *)a2 = v6;
    if ( (int)__std_type_info_compare(v7, v8) >= 0 )
    {
      *(_QWORD *)(a2 + 16) = v6;
      v9 = 1;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      v9 = 0;
    }
    *(_DWORD *)(a2 + 8) = v9;
  }
  return a2;
}
