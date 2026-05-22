/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEA_J@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEA_J@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800A3F40
 * Callers:
 *     ??$_Try_emplace@_J$$V@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@$$QEA_J@Z @ 0x1800A47BC (--$_Try_emplace@_J$$V@-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Compo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  _QWORD *v6; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  a1[1] = v6;
  v6[2] = **a4;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[6] = 0LL;
  v6[7] = 0LL;
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[6] = 0LL;
  v6[7] = 0LL;
  return a1;
}
