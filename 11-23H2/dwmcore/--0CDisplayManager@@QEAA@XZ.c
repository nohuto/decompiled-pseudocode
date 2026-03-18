/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x1800FB198
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x180003E90 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_1803EA188 = 0LL;
  qword_1803EA190 = 0LL;
  dword_1803EA198 = 0;
  unk_1803EA19C = 0;
  return result;
}
