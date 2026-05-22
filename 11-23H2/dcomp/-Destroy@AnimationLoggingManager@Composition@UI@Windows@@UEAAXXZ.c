/*
 * XREFs of ?Destroy@AnimationLoggingManager@Composition@UI@Windows@@UEAAXXZ @ 0x180084DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x18002AFD0 (-clear@-$_Tree@V-$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@@Z @ 0x180084E44 (--$_Erase_tree@V-$allocator@U-$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@-$_Tree_val@U-$_.c)
 */

void __fastcall Windows::UI::Composition::AnimationLoggingManager::Destroy(
        Windows::UI::Composition::AnimationLoggingManager *this)
{
  char *v1; // rdi
  _QWORD *v3; // rbx

  v1 = (char *)this + 136;
  v3 = (_QWORD *)*((_QWORD *)this + 17);
  std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Erase_tree<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>(
    (char *)this + 136,
    (char *)this + 136,
    v3[1]);
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  *((_QWORD *)v1 + 1) = 0LL;
  std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::clear((_QWORD *)this + 19);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
