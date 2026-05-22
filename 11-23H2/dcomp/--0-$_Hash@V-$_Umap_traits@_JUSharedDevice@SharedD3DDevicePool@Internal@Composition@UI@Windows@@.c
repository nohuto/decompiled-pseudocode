/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@1@AEBV?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@1@@Z @ 0x1800A4D58
 * Callers:
 *     ??0?$unordered_map@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$hash@_J@std@@U?$equal_to@_J@8@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@@std@@QEAA@XZ @ 0x1800A4DCC (--0-$unordered_map@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$hash@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1800A6778 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800A6778.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>>>>>::_Assign_grow(
    a1 + 24,
    16LL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
