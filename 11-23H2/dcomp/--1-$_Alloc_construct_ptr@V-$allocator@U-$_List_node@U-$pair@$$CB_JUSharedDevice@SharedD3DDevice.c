/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A4EB4
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A4F28 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_JUSharedDevice@SharedD3DDevi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x40uLL);
}
