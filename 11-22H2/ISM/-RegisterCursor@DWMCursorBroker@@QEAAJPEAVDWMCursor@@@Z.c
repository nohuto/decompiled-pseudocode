/*
 * XREFs of ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180049C48
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180037C44 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@?$unordered_map@UCursorId@@PEAVDWMCursor@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x180049D18 (--$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@-$unordered_map@UCursorId@@PEAVDWMCursor@@.c)
 *     ??$_Find_last@UCursorId@@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@std@@@1@AEBUCursorId@@_K@Z @ 0x18004A218 (--$_Find_last@UCursorId@@@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UC.c)
 *     ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18004A448 (-ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801F9E44 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 */

__int64 __fastcall DWMCursorBroker::RegisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v3; // rcx
  unsigned __int64 appended; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  struct DWMCursor *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  (*(void (__fastcall **)(struct DWMCursor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v10);
  appended = std::_Fnv1a_append_bytes(v3, (const unsigned __int8 *const)&v10, 4uLL);
  if ( *(_QWORD *)(std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::_Find_last<CursorId>(
                     (char *)this + 48,
                     v8,
                     &v10,
                     appended)
                 + 8) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x269,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL,
      v8[0]);
  std::unordered_map<CursorId,DWMCursor *,CursorIdHash,std::equal_to<CursorId>,std::allocator<std::pair<CursorId const,DWMCursor *>>>::_Insert_or_assign<CursorId const &,DWMCursor * &>(
    (char *)this + 48,
    v8,
    &v10,
    &v11);
  v5 = 0;
  v6 = (_QWORD *)((char *)this + 216);
  do
  {
    if ( *v6 )
      DWMCursorBroker::CreateMotionTransformAndVerifySend(this, v11, v5);
    ++v5;
    v6 += 3;
  }
  while ( v5 < 0xA );
  if ( (unsigned int)(v10 - 1) <= 1 )
    DWMCursorBroker::ArbitrateCursor(this, v11);
  return 0LL;
}
