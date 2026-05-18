/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180015110 = 0LL;
  xmmword_1800150F0 = 0LL;
  xmmword_180015100 = 0LL;
  InitializeCriticalSectionEx(&stru_180015118, 0, 0);
  qword_180015180 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180015140 = 0LL;
  xmmword_180015150 = 0LL;
  xmmword_180015160 = 0LL;
  xmmword_180015170 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
