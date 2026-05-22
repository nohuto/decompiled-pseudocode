/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A4F28
 * Callers:
 *     ??$_Try_emplace@_J$$V@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@$$QEA_J@Z @ 0x1800A47BC (--$_Try_emplace@_J$$V@-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Compo.c)
 * Callees:
 *     ??1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A51A0 (--1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice::~SharedDevice((Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *)(v2 + 24));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>(a1);
}
