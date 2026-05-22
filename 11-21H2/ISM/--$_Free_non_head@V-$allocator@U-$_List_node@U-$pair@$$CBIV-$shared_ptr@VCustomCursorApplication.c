/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BE0D4
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800BEAEC (--1-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape2@@@std@@@std@@V-$allocator@U-$pair@$$CB.c)
 *     ??1?$unordered_map@IV?$shared_ptr@VCustomCursorApplication2@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800BEB84 (--1-$unordered_map@IV-$shared_ptr@VCustomCursorApplication2@@@std@@U-$hash@I@2@U-$equal_to@I@2@V.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800BEDA0 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemCursor2@@QEAA@XZ @ 0x1800EB714 (--1SystemCursor2@@QEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800EB7D4 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VSystemCursorShape2@@@std@@EEAAXXZ @ 0x1800EE090 (-_Destroy@-$_Ref_count_obj2@VSystemCursorShape2@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rdi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (std::_Ref_count_base *)v2[4];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        std::_Ref_count_base::_Decref(v3);
      std::_Deallocate<16,0>(v2, 0x28uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
