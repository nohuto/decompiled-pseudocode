/*
 * XREFs of ?_Copy_assign@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x18003EE04
 * Callers:
 *     ?Clone@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z @ 0x18003B950 (-Clone@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@2@PEAU32@@Z @ 0x18001DD04 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@1@@Z @ 0x18002E8AC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18002E8AC.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18003A23C (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D_ea_18003A23C.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>::_Copy_assign(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // r8
  _QWORD *v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 result; // rax
  __int64 i; // rcx

  v3 = (_QWORD *)*a1;
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,std::string>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,std::string>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(__int64 **)(*a1 + 8));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v6 = *a1;
  a1[1] = 0LL;
  *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>::_Copy_tag>(
                           a1,
                           *(_QWORD *)(*a2 + 8LL),
                           v6,
                           a3);
  v7 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
  {
    *v7 = v7;
    result = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>>>::_Min((_QWORD *)v8);
    *v10 = v9;
    result = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(result + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16) = result;
  }
  return result;
}
