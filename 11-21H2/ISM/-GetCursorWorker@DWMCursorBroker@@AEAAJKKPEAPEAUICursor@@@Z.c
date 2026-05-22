/*
 * XREFs of ?GetCursorWorker@DWMCursorBroker@@AEAAJKKPEAPEAUICursor@@@Z @ 0x1800443B0
 * Callers:
 *     ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x1800442E0 (-GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ??$_Find_last@UDWMPointerMapping@@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@std@@@1@AEBUDWMPointerMapping@@_K@Z @ 0x18004445C (--$_Find_last@UDWMPointerMapping@@@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uh.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@1@AEBUCursorId@@@Z @ 0x1801CDD38 (--$find@X@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursor.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursorWorker(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        struct ICursor **a4)
{
  __int64 v5; // r9
  __int64 v7; // rdx
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  unsigned __int64 j; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  struct ICursor *v14; // rbx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = __PAIR64__(a3, a2);
  v5 = 0xCBF29CE484222325uLL;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)&v16 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  for ( j = 0LL; j < 4; ++j )
  {
    v11 = *((unsigned __int8 *)&v16 + j + 4);
    v5 = 0x100000001B3LL * (v11 ^ v5);
  }
  v12 = *(_QWORD *)(std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Find_last<DWMPointerMapping>(
                      (char *)this + 112,
                      v15,
                      &v16,
                      v7 ^ v5)
                  + 8);
  if ( !v12 )
    v12 = *((_QWORD *)this + 15);
  if ( v12 == *((_QWORD *)this + 15) )
    return 2147500037LL;
  v16 = *(_QWORD *)(v12 + 24);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find<void>(
    (char *)this + 48,
    v15,
    &v16);
  if ( v15[0] == *((_QWORD *)this + 7) )
    return 2147500037LL;
  v14 = *(struct ICursor **)(v15[0] + 24LL);
  (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v14 + 8LL))(v14);
  result = 0LL;
  *a4 = v14;
  return result;
}
