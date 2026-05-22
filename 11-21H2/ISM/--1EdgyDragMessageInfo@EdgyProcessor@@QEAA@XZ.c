/*
 * XREFs of ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x18014861C
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180147A84 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@s.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014848C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUEdgyDragMessageInfo@EdgyPro.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18014B78C (-erase@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008069C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GEdgyRecognizer@@QEAAPEAXI@Z @ 0x180148A30 (--_GEdgyRecognizer@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EdgyProcessor::EdgyDragMessageInfo::~EdgyDragMessageInfo(EdgyProcessor::EdgyDragMessageInfo *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  EdgyRecognizer *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx

  std::_Deallocate<16,0>(*((void **)this + 9), (*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v2,
    *((_QWORD ***)this + 7));
  std::_Deallocate<16,0>(*((void **)this + 7), 0x20uLL);
  v4 = (EdgyRecognizer *)*((_QWORD *)this + 4);
  if ( v4 )
    EdgyRecognizer::`scalar deleting destructor'(v4, v3);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)this + 1);
  v7 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
  }
}
