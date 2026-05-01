/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180459F40
 * Callers:
 *     ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x18045AC30 (--1-$list@IV-$allocator@I@std@@@std@@QEAA@XZ.c)
 *     ??1KBViewInfo@@QEAA@XZ @ 0x18045AE1C (--1KBViewInfo@@QEAA@XZ.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18046F544 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,bool>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x18uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
