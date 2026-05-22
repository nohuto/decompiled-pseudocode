/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C690C
 * Callers:
 *     ??1?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA@XZ @ 0x1800C6B08 (--1-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBUtagM.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800C6B54 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??1?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA@XZ @ 0x180199CE0 (--1-$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U-$equal_to@UtagMsgRo.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180199D30 (--1DWMInputRouter@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>(
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
      std::_Deallocate<16,0>(v2, 0x40uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
