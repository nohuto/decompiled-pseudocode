/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@@Z @ 0x180084E44
 * Callers:
 *     ??1AnimationLoggingManager@Composition@UI@Windows@@UEAA@XZ @ 0x180084D44 (--1AnimationLoggingManager@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?Destroy@AnimationLoggingManager@Composition@UI@Windows@@UEAAXXZ @ 0x180084DE0 (-Destroy@AnimationLoggingManager@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@@Z @ 0x180084E44 (--$_Erase_tree@V-$allocator@U-$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@-$_Tree_val@U-$_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@@Z @ 0x180084E44 (--$_Erase_tree@V-$allocator@U-$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@-$_Tree_val@U-$_.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Erase_tree<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Erase_tree<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
