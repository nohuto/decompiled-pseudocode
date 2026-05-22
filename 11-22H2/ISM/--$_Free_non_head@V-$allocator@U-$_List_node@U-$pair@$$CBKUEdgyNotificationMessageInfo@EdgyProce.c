/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801748F8
 * Callers:
 *     ??1?$list@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18017535C (--1-$list@U-$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@V-$allocator@U-$pair@$$.c)
 *     ??1?$unordered_map@KUEdgyNotificationMessageInfo@EdgyProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x1801753F8 (--1-$unordered_map@KUEdgyNotificationMessageInfo@EdgyProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180175594 (--1EdgyProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x180175524 (--1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>,void *>>>(
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
      EdgyProcessor::EdgyNotificationMessageInfo::~EdgyNotificationMessageInfo((EdgyProcessor::EdgyNotificationMessageInfo *)(v2 + 3));
      std::_Deallocate<16,0>(v2, 0x30uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
