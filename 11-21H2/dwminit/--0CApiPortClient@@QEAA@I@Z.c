/*
 * XREFs of ??0CApiPortClient@@QEAA@I@Z @ 0x1800079F0
 * Callers:
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001A40 (_dynamic_initializer_for__g_PortClient__.c)
 * Callees:
 *     <none>
 */

CApiPortClient *__fastcall CApiPortClient::CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *result; // rax

  g_PortClient = 0;
  qword_180015AE8 = 0LL;
  *(_OWORD *)&xmmword_180015AF0 = 0LL;
  InitializeCriticalSection(&stru_180015B00);
  result = (CApiPortClient *)&g_PortClient;
  byte_180015B28 = 0;
  return result;
}
