/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x180104398
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
  qword_1803EA1A8 = 0LL;
  qword_1803EA1B0 = 0LL;
  dword_1803EA1B8 = 0;
  unk_1803EA1BC = 0;
  return result;
}
