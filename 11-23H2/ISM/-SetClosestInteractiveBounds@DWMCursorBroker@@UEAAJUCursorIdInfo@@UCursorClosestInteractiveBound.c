/*
 * XREFs of ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x1801EDD20
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@1@AEBUCursorId@@@Z @ 0x1801ECD14 (--$find@X@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursor.c)
 */

__int64 __fastcall DWMCursorBroker::SetClosestInteractiveBounds(__int64 a1, __int64 a2, __int128 *a3)
{
  int v6; // eax
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    __debugbreak();
  }
  v10 = a2;
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find<void>(
    (_QWORD *)(a1 + 40),
    &v9,
    (const unsigned __int8 *)&v10);
  v7 = v9;
  if ( (_QWORD)v9 != *(_QWORD *)(a1 + 48) )
  {
    v9 = *a3;
    *(_OWORD *)(*(_QWORD *)(v7 + 24) + 96LL) = v9;
  }
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
