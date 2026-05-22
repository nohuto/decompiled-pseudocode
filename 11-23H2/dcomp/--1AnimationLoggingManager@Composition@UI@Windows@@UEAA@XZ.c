/*
 * XREFs of ??1AnimationLoggingManager@Composition@UI@Windows@@UEAA@XZ @ 0x180084D44
 * Callers:
 *     ??_GAnimationLoggingManager@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180084D00 (--_GAnimationLoggingManager@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@1@@Z @ 0x180029DFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUReferencedObject@AnimationLoggingManager.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@@Z @ 0x180084E44 (--$_Erase_tree@V-$allocator@U-$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@-$_Tree_val@U-$_.c)
 *     ??1CommentHasher@Composition@UI@Windows@@QEAA@XZ @ 0x180084E80 (--1CommentHasher@Composition@UI@Windows@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::AnimationLoggingManager::~AnimationLoggingManager(
        Windows::UI::Composition::AnimationLoggingManager *this)
{
  __int64 v2; // rdx

  Windows::UI::Composition::CommentHasher::~CommentHasher((Windows::UI::Composition::AnimationLoggingManager *)((char *)this + 168));
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>,void *>>>(
    (__int64)this + 152,
    (__int64)this + 152,
    *(__int64 **)(*((_QWORD *)this + 19) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 19), 0x38uLL);
  std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Erase_tree<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>(
    (char *)this + 136,
    (char *)this + 136,
    *(_QWORD *)(*((_QWORD *)this + 17) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 17), 0x28uLL);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v2);
}
