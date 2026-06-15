/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180015618
 * Callers:
 *     _std::unordered_map_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession_________::unordered_map_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession__________::_1_::dtor$1 @ 0x180049838 (_std--unordered_map_unsigned_long_std--unique_ptr_TSSession_std--default_delete_TSSession____std.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180033538 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>::~list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  operator delete(*a1, 0x20uLL);
}
