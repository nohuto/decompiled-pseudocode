/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@1@@Z @ 0x180029DFC
 * Callers:
 *     ?Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028D00 (-Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@1@@Z @ 0x180029DFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUReferencedObject@AnimationLoggingManager.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x18002AFD0 (-clear@-$_Tree@V-$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows.c)
 *     ??1AnimationLoggingManager@Composition@UI@Windows@@UEAA@XZ @ 0x180084D44 (--1AnimationLoggingManager@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@1@@Z @ 0x180029DFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUReferencedObject@AnimationLoggingManager.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = std::_Deallocate<16,0>(v6, 56LL) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = v6[6];
    if ( v7 )
    {
      v6[6] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
