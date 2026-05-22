/*
 * XREFs of ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x1801EDF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@1@AEBUCursorId@@@Z @ 0x1801ECD14 (--$find@X@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursor.c)
 */

__int64 __fastcall DWMCursorBroker::SetLocked(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    __debugbreak();
  }
  v12 = a2;
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find<void>(
    (_QWORD *)(a1 + 40),
    v10,
    (const unsigned __int8 *)&v12);
  if ( v10[0] != *(_QWORD *)(a1 + 48) )
  {
    LOBYTE(v7) = a3;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10[0] + 24LL) + 80LL))(
           *(_QWORD *)(v10[0] + 24LL),
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        295LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v8);
  }
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
