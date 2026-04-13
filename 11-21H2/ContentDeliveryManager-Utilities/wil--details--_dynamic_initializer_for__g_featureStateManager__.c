/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180003BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  xmmword_1801AD870 = 0LL;
  xmmword_1801AD880 = 0LL;
  InitializeCriticalSectionEx(&stru_1801AD890, 0, 0);
  qword_1801AD8F8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1801AD8B8 = 0LL;
  xmmword_1801AD8C8 = 0LL;
  xmmword_1801AD8D8 = 0LL;
  xmmword_1801AD8E8 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
