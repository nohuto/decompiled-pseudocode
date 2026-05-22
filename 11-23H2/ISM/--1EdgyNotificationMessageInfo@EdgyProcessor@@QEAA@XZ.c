/*
 * XREFs of ??1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x1801672A4
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180166678 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProce.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180167074 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUEdgyNotificationMessageInfo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18016A098 (-erase@-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GEdgyRecognizer@@QEAAPEAXI@Z @ 0x1801675DC (--_GEdgyRecognizer@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EdgyProcessor::EdgyNotificationMessageInfo::~EdgyNotificationMessageInfo(
        EdgyProcessor::EdgyNotificationMessageInfo *this,
        unsigned int a2)
{
  EdgyRecognizer *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (EdgyRecognizer *)*((_QWORD *)this + 2);
  if ( v3 )
    EdgyRecognizer::`scalar deleting destructor'(v3, a2);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
}
