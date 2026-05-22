/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180154050
 * Callers:
 *     ??1?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1801540E8 (--1-$list@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$allocator@U-$pair@$$CBU.c)
 *     ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x180154114 (--1NonBamoInputDeliveryServer@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>>>(
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
      std::_Deallocate<16,0>(v2, 0x68uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
