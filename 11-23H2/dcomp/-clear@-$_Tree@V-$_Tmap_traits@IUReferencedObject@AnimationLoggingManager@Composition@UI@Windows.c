/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x18002AFD0
 * Callers:
 *     ?Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ @ 0x180028180 (-Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029F08 (-UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ?Destroy@AnimationLoggingManager@Composition@UI@Windows@@UEAAXXZ @ 0x180084DE0 (-Destroy@AnimationLoggingManager@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@1@@Z @ 0x180029DFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUReferencedObject@AnimationLoggingManager.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    v5 = v4[6];
    if ( v5 )
    {
      v4[6] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    result = std::_Deallocate<16,0>(v4, 56LL);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
