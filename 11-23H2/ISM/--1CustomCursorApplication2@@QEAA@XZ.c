/*
 * XREFs of ??1CustomCursorApplication2@@QEAA@XZ @ 0x180100F64
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCustomCursorApplication2@@@std@@EEAAXXZ @ 0x180102FC0 (-_Destroy@-$_Ref_count_obj2@VCustomCursorApplication2@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098338 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800C05B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CustomCursorApplication2::~CustomCursorApplication2(void **this)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(this + 11);
  std::_Deallocate<16,0>(this[5], ((_BYTE *)this[6] - (_BYTE *)this[5]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[5] = 0LL;
  this[6] = 0LL;
  this[7] = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    (_QWORD **)this[3]);
  std::_Deallocate<16,0>(this[3], 0x18uLL);
  v3 = (std::_Ref_count_base *)this[1];
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
