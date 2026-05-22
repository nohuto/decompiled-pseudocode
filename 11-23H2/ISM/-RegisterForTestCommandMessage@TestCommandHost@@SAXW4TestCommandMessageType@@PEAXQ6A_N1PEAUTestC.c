/*
 * XREFs of ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x180049B38
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x18003BC94 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x18003A674 (--$_Try_emplace@AEBW4TestCommandMessageType@@$$V@-$_Hash@V-$_Umap_traits@W4TestCommandMessageTyp.c)
 */

__int64 __fastcall TestCommandHost::RegisterForTestCommandMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 2;
  try
  {
    v7 = *(_QWORD *)std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Try_emplace<enum TestCommandMessageType const &,>(
                      (__int64)TestCommandHost::m_instance + 72,
                      (__int64)&v11,
                      (const unsigned __int8 *)&v10);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = a3;
    result = v10;
    *(_DWORD *)a4 = v10;
    *(_QWORD *)(a4 + 8) = a2;
    *(_QWORD *)(a4 + 16) = a3;
    *(_BYTE *)(a4 + 24) = 1;
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x3E,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
             v8);
  }
  return result;
}
