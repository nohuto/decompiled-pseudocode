/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800012B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  xmmword_1800620B0 = 0LL;
  xmmword_1800620C0 = 0LL;
  InitializeCriticalSectionEx(&stru_1800620D0, 0, 0);
  qword_180062138 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1800620F8 = 0LL;
  xmmword_180062108 = 0LL;
  xmmword_180062118 = 0LL;
  xmmword_180062128 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
