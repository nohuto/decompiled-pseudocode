/*
 * XREFs of ?GetCursorWorker@DWMCursorBroker@@AEAAJKKPEAPEAUICursor@@@Z @ 0x180049BC0
 * Callers:
 *     ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x180049AF0 (-GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@UDWMPointerMapping@@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@std@@@1@AEBUDWMPointerMapping@@_K@Z @ 0x18004A414 (--$_Find_last@UDWMPointerMapping@@@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uh.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@1@AEBUCursorId@@@Z @ 0x1801F9A44 (--$find@X@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursor.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursorWorker(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        struct ICursor **a4)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 appended; // rax
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 result; // rax
  struct ICursor *v12; // rbx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = __PAIR64__(a3, a2);
  std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v14 + 4, 4uLL);
  appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v14, v7);
  v10 = *(_QWORD *)(std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Find_last<DWMPointerMapping>(
                      (char *)this + 112,
                      v13,
                      &v14,
                      appended ^ v9)
                  + 8);
  if ( !v10 )
    v10 = *((_QWORD *)this + 15);
  if ( v10 == *((_QWORD *)this + 15) )
    return 2147500037LL;
  v14 = *(_QWORD *)(v10 + 24);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find<void>(
    (char *)this + 48,
    v13,
    &v14);
  if ( v13[0] == *((_QWORD *)this + 7) )
    return 2147500037LL;
  v12 = *(struct ICursor **)(v13[0] + 24LL);
  (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v12 + 8LL))(v12);
  result = 0LL;
  *a4 = v12;
  return result;
}
