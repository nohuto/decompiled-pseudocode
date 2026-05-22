/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@1@@Z @ 0x1800A71E8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@1@@Z @ 0x1800A71E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_si.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800A7300 (--1-$_Tree@V-$_Tset_traits@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$allocator@PEAUIUnknown@@.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIUnknown@@@Z @ 0x1800A7780 (-erase@-$_Tree@V-$_Tset_traits@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$allocator@PEAUIUnkno.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@1@@Z @ 0x1800A71E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_si.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<IUnknown *>>::_Erase_tree<std::allocator<std::_Tree_node<IUnknown *,void *>>>(
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
      std::_Tree_val<std::_Tree_simple_types<IUnknown *>>::_Erase_tree<std::allocator<std::_Tree_node<IUnknown *,void *>>>(
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
