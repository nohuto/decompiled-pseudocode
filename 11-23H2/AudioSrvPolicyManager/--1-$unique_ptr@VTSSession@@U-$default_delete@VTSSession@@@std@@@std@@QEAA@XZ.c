/*
 * XREFs of ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180033F9C
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800333CC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180033D8C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x180034C90 (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _TSSession::Create_::_1_::dtor$1 @ 0x1800498F6 (_TSSession--Create_--_1_--dtor$1.c)
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x1800499FE (_TsSessionCreate_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x180034A30 (--R-$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<TSSession>::~unique_ptr<TSSession>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<TSSession>::operator()();
  return result;
}
