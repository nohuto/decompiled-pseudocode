/*
 * XREFs of ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x1801FA7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x1801E4E70 (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@1@AEBUCursorId@@@Z @ 0x1801F9A44 (--$find@X@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursor.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1801FA98C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::OnTargetChanged(DWMCursorBroker *this, struct CursorId *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdi
  int CursorDefaultState; // eax
  char v10; // al
  _BYTE v12[16]; // [rsp+20h] [rbp-68h] BYREF
  char v13[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+34h] [rbp-54h]
  int v15; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v17; // [rsp+A0h] [rbp+18h] BYREF
  void *v18; // [rsp+A8h] [rbp+20h]

  v18 = &DWMCursorBroker::s_lock;
  v4 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v4 )
    std::_Throw_C_error(v4);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find<void>(
    (_QWORD *)this + 6,
    &v17,
    (const unsigned __int8 *)a2);
  if ( v17 == *((_QWORD *)this + 7) )
  {
    v5 = -2147467259;
    v6 = 2147500037LL;
    v7 = 198LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)v6);
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return v5;
  }
  v8 = *(_QWORD *)(v17 + 24);
  CursorDefaultState = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
  v5 = CursorDefaultState;
  if ( CursorDefaultState < 0 )
  {
    v7 = 202LL;
LABEL_11:
    v6 = (unsigned int)CursorDefaultState;
    goto LABEL_12;
  }
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
  CursorDefaultState = GetCursorDefaultState(v10, (__int64)v12);
  v5 = CursorDefaultState;
  if ( CursorDefaultState < 0 )
  {
    v7 = 204LL;
    goto LABEL_11;
  }
  v13[0] = 6;
  v14 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v17);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
  CursorDefaultState = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v13);
  v5 = CursorDefaultState;
  if ( CursorDefaultState < 0 )
  {
    v7 = 214LL;
    goto LABEL_11;
  }
  *(_QWORD *)a2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v17);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
