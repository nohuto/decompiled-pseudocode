/*
 * XREFs of ??$_Try_emplace@AEBH$$V@?$map@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@_N@1@AEBH@Z @ 0x1800DD8AC
 * Callers:
 *     ?AddHandler@JsonConfigurationManager@Utils@Spectre@@UEAAHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@Z @ 0x1800DE470 (-AddHandler@JsonConfigurationManager@Utils@Spectre@@UEAAHV-$function@$$A6AXAEBV-$basic_string@_W.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180052798 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBHV-$function@$$A6AXAEBV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<int,std::function<void (std::wstring const &)>>::_Try_emplace<int const &,>(
        _QWORD *a1,
        __int64 a2,
        int *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rdx
  int v9; // ecx
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]

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
      if ( *((_DWORD *)v7 + 8) >= v9 )
      {
        DWORD2(v14) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v14) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 8) )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v13 = a1;
    v10 = operator new(0x68uLL);
    v10[8] = *a3;
    *((_QWORD *)v10 + 12) = 0LL;
    *(_QWORD *)v10 = v6;
    *((_QWORD *)v10 + 1) = v6;
    *((_QWORD *)v10 + 2) = v6;
    *((_WORD *)v10 + 12) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>(
      (__int64)&v13,
      v11);
    v13 = v14;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      (__int64)v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
