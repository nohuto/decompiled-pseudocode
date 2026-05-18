/*
 * XREFs of ??0CApiPortClient@@QEAA@I@Z @ 0x18000D35C
 * Callers:
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001C00 (_dynamic_initializer_for__g_PortClient__.c)
 * Callees:
 *     <none>
 */

CApiPortClient *__fastcall CApiPortClient::CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *result; // rax

  g_PortClient = 0;
  qword_180016C18 = 0LL;
  *(_OWORD *)&xmmword_180016C20 = 0LL;
  InitializeCriticalSection(&stru_180016C30);
  result = (CApiPortClient *)&g_PortClient;
  byte_180016C58 = 0;
  return result;
}
