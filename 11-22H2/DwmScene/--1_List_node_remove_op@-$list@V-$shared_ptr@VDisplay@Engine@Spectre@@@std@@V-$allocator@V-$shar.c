/*
 * XREFs of ??1_List_node_remove_op@?$list@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031F9C
 * Callers:
 *     ?DeleteDisplay@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@Z @ 0x1800338B0 (-DeleteDisplay@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::list<std::shared_ptr<Spectre::Engine::Display>>::_List_node_remove_op::~_List_node_remove_op(
        __int64 a1)
{
  _QWORD *v1; // rbx
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // rdi

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (std::_Ref_count_base *)v1[3];
      v3 = (_QWORD *)*v1;
      if ( v2 )
        std::_Ref_count_base::_Decref(v2);
      std::_Deallocate<16,0>(v1, 0x20uLL);
      v1 = v3;
    }
    while ( v3 );
  }
}
