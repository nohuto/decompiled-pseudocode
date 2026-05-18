/*
 * XREFs of ??$_Emplace@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAH@Z @ 0x18002AA64
 * Callers:
 *     ?LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ @ 0x18002C56C (-LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??$?MDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z @ 0x18001C734 (--$-MDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA_NAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D2AC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@st.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAH@Z @ 0x18002A5C4 (--$-0AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@H@-$_Tree_temp_node@V-$all.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>,0>>::_Emplace<std::string const &,int>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        int *a4)
{
  __int64 v4; // r15
  __int64 v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-30h]

  v4 = *a1;
  v16 = 0;
  v9 = v4;
  v10 = *(_QWORD *)(v4 + 8);
  v15 = v10;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v15 = v10;
    if ( (unsigned __int8)std::operator<<char>((_QWORD *)(v10 + 32), a3) )
    {
      v16 = 0;
      v10 = *(_QWORD *)(v10 + 16);
    }
    else
    {
      v9 = v10;
      v16 = 1;
      v10 = *(_QWORD *)v10;
    }
  }
  if ( *(_BYTE *)(v9 + 25) || (unsigned __int8)std::operator<<char>(a3, (_QWORD *)(v9 + 32)) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,double>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,double>,void *>>>(
            v14,
            (__int64)a1,
            v4,
            (__int64)a3,
            a4);
    v12 = v11[1];
    v11[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Trace::LevelSettings *>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Trace::LevelSettings *>,void *>>>((__int64)v14);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
