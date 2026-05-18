/*
 * XREFs of ??$_Try_emplace@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@?$map@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x180058D64
 * Callers:
 *     ?SetShaderProperty@Camera@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@H@Z @ 0x18005D3F0 (-SetShaderProperty@Camera@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$?MDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z @ 0x18001C734 (--$-MDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA_NAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??0?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QEAA@AEBU01@@Z @ 0x1800592E0 (--0-$pair@HV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@QEAA@AEBU01@@Z.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180059860 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU-$pair@HV-$basic_string@DU-$char_tr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::map<std::pair<int,std::string>,Spectre::Utils::Math::Vector4>::_Try_emplace<std::pair<int,std::string> const &,>(
        _QWORD *a1,
        __int64 a2,
        int *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  int v9; // r12d
  int v10; // eax
  _QWORD *v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v14 = v7;
  DWORD2(v14) = 0;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v14 = v7;
      if ( *((_DWORD *)v7 + 8) < v9
        || *((_DWORD *)v7 + 8) <= v9 && (unsigned __int8)std::operator<<char>(v7 + 5, (_QWORD *)a3 + 1) )
      {
        DWORD2(v14) = 0;
        v7 = (__int64 *)v7[2];
      }
      else
      {
        DWORD2(v14) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25)
    || (v10 = *((_DWORD *)v8 + 8), *a3 < v10)
    || *a3 <= v10 && (unsigned __int8)std::operator<<char>((_QWORD *)a3 + 1, v8 + 5) )
  {
    if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v13 = a1;
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
    std::pair<int,std::string>::pair<int,std::string>(v11 + 4, a3);
    v11[9] = 0LL;
    v11[10] = 0LL;
    *v11 = v6;
    v11[1] = v6;
    v11[2] = v6;
    *((_WORD *)v11 + 12) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>(&v13);
    v13 = v14;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      (__int64)v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
