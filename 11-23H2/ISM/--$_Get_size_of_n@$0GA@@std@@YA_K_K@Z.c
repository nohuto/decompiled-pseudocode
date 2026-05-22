/*
 * XREFs of ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x18005240C
 * Callers:
 *     ??0?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAA@XZ @ 0x1800523C8 (--0-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadExit@@@std@@@st.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x180097A50 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 *     ??$?0$$V@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@@Z @ 0x180140858 (--$-0$$V@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEA.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180162D90 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@1@@Z @ 0x18016323C (--0-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_compare@KU-$hash@K@st.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<96>(unsigned __int64 a1)
{
  if ( a1 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  return 96 * a1;
}
