/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18015AE2C
 * Callers:
 *     ??1?$list@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18015C600 (--1-$list@U-$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKUResultIn.c)
 *     ??1?$unordered_map@KUResultInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18015C6E8 (--1-$unordered_map@KUResultInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator@.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18015C7C4 (--1DragNDropProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  _QWORD *v4; // rdi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (void *)v2[3];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        operator delete[](v3);
      std::_Deallocate<16,0>(v2, 0x38uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
