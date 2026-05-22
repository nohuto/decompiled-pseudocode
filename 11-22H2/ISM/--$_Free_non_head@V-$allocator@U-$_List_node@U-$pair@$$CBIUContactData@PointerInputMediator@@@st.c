/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18010AF50
 * Callers:
 *     ??1?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAA@XZ @ 0x18010B6C0 (--1-$list@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@V-$allocator@U-$pair@$$CBIUConta.c)
 *     ??1?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAA@XZ @ 0x18010B714 (--1-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x18010B790 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18010C0CC (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rdi

  *a2[1] = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    do
    {
      v5 = v4[4];
      v6 = (_QWORD *)*v4;
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v5, a2, a3, a4);
      std::_Deallocate<16,0>(v4, 0x30uLL);
      v4 = v6;
    }
    while ( v6 );
  }
}
