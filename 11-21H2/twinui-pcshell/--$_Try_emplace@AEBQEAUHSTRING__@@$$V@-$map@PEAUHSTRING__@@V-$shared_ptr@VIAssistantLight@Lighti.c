/*
 * XREFs of ??$_Try_emplace@AEBQEAUHSTRING__@@$$V@?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@_N@1@AEBQEAUHSTRING__@@@Z @ 0x18055E4E4
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055E718 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801B80A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180340C88 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHSTRING__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHSTRING__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18055E164 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHSTRING__@@@1@V-$tuple@$$V@1@@-$_Tree_temp_n.c)
 *     ??$_Find_lower_bound@PEAUHSTRING__@@@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@AEBQEAUHSTRING__@@@Z @ 0x18055E494 (--$_Find_lower_bound@PEAUHSTRING__@@@-$_Tree@V-$_Tmap_traits@PEAUHSTRING__@@V-$shared_ptr@VIAssi.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18055E680 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistant.c)
 */

__int64 __fastcall std::map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::_Try_emplace<HSTRING__ * const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
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

  std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Find_lower_bound<HSTRING__ *>(
    a1,
    (__int64)&v12,
    a3);
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v14 = v6;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>(
           v11,
           (__int64)a1,
           v7,
           v5,
           &v14);
    v9 = v8[1];
    v8[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>(v11);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum JavaOption>>>::_Insert_node(
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
