/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180147A84
 * Callers:
 *     ??1?$list@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180148504 (--1-$list@U-$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@V-$allocator@U-$pair@$$CBKUEdgy.c)
 *     ??1?$unordered_map@KUEdgyDragMessageInfo@EdgyProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18014857C (--1-$unordered_map@KUEdgyDragMessageInfo@EdgyProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$alloca.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180148768 (--1EdgyProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x18014861C (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      EdgyProcessor::EdgyDragMessageInfo::~EdgyDragMessageInfo((EdgyProcessor::EdgyDragMessageInfo *)(v2 + 3));
      std::_Deallocate<16,0>(v2, 0x88uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
