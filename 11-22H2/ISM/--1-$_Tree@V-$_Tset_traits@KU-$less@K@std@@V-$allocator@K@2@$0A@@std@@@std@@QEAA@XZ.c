/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA@XZ @ 0x18006A158
 * Callers:
 *     ??1GamepadInterceptionHelper@@UEAA@XZ @ 0x18006A330 (--1GamepadInterceptionHelper@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@KPEAX@std@@@1@PEAU?$_Tree_node@KPEAX@1@@Z @ 0x180069100 (--$_Erase_tree@V-$allocator@U-$_Tree_node@KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@K@.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::~_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<unsigned long>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned long,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
