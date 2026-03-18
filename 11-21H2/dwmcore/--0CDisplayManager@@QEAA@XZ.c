/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x1800F7FD4
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x180003DB0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_1803D7618 = 0LL;
  qword_1803D7620 = 0LL;
  dword_1803D7628 = 0;
  unk_1803D762C = 0;
  return result;
}
