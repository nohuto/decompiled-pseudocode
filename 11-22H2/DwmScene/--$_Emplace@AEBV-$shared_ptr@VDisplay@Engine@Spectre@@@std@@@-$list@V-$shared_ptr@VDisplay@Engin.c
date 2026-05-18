/*
 * XREFs of ??$_Emplace@AEBV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@?$list@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@VDisplay@Engine@Spectre@@@1@@Z @ 0x18002E2A4
 * Callers:
 *     ?CreateDisplay@Engine@1Spectre@@QEAA?AV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPolicy@Display@12@W4RenderingMode@612@@Z @ 0x180033108 (-CreateDisplay@Engine@1Spectre@@QEAA-AV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPoli.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180031738 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$shared_ptr@VDisplay@Engine@Spectre@@@s.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::shared_ptr<Spectre::Engine::Display>>::_Emplace<std::shared_ptr<Spectre::Engine::Display> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v9 = a1;
  v10 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v6 + 2, a3);
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v7;
  v10 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::Display>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::Display>,void *>>>(&v9);
  return v6;
}
