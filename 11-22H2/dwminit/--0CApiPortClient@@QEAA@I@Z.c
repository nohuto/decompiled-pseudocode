/*
 * XREFs of ??0CApiPortClient@@QEAA@I@Z @ 0x1800094F0
 * Callers:
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001AD0 (_dynamic_initializer_for__g_PortClient__.c)
 * Callees:
 *     <none>
 */

CApiPortClient *__fastcall CApiPortClient::CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *result; // rax

  g_PortClient = 0;
  qword_180015B28 = 0LL;
  *(_OWORD *)&xmmword_180015B30 = 0LL;
  InitializeCriticalSection(&stru_180015B40);
  result = (CApiPortClient *)&g_PortClient;
  byte_180015B68 = 0;
  return result;
}
