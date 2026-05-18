/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  xmmword_1800150E8 = 0LL;
  xmmword_1800150F8 = 0LL;
  InitializeCriticalSectionEx(&stru_180015108, 0, 0);
  qword_180015170 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180015130 = 0LL;
  xmmword_180015140 = 0LL;
  xmmword_180015150 = 0LL;
  xmmword_180015160 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
