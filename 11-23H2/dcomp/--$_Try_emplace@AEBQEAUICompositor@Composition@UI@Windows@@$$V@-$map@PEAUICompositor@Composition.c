/*
 * XREFs of ??$_Try_emplace@AEBQEAUICompositor@Composition@UI@Windows@@$$V@?$map@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBQEAUICompositor@Composition@UI@Windows@@@Z @ 0x18012D8B4
 * Callers:
 *     ?TryGetSettings@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUICompositionDebugSettings@2345@@Z @ 0x18012DB80 (-TryGetSettings@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAUICo.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18009912C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUICompositor@Composition@UI@Windows@@.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUICompositor@Composition@UI@Windows@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUICompositor@Composition@UI@Windows@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18012D5C0 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUICompositor@Composition@UI@Windows@@@1@V-$tu.c)
 *     ??$_Find_lower_bound@PEAUICompositor@Composition@UI@Windows@@@?$_Tree@V?$_Tmap_traits@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBQEAUICompositor@Composition@UI@Windows@@@Z @ 0x18012D860 (--$_Find_lower_bound@PEAUICompositor@Composition@UI@Windows@@@-$_Tree@V-$_Tmap_traits@PEAUICompo.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012D980 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAUICompositor@Composition@UI@Windows@@.c)
 */

__int64 __fastcall std::map<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>::_Try_emplace<Windows::UI::Composition::ICompositor * const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v4; // r9
  __int64 *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  char *v11; // [rsp+50h] [rbp-18h]
  __int64 *v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = a1;
  std::_Tree<std::_Tmap_traits<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>,std::less<Windows::UI::Composition::ICompositor *>,std::allocator<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>,0>>::_Find_lower_bound<Windows::UI::Composition::ICompositor *>(
    (__int64)a1,
    (__int64)&v10,
    a3);
  if ( v11[25] || (unsigned __int64)*v5 < *((_QWORD *)v11 + 4) )
  {
    if ( *((_QWORD *)&Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap + 1) == 0x555555555555555LL )
      std::_Dwm_Xlength_error(v11);
    v12 = v5;
    v6 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>,void *>>>(
           v9,
           (__int64)&Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap,
           Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap,
           v4,
           &v12);
    v7 = v6[1];
    v6[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>,void *>>>(v9);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>>::_Insert_node(
                      (__int64)&Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap,
                      (__int64)&v10,
                      v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
