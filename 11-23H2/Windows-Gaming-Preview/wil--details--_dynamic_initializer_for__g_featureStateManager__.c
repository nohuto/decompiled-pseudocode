/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800012C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1800640C8 = 0LL;
  xmmword_1800640A8 = 0LL;
  xmmword_1800640B8 = 0LL;
  InitializeCriticalSectionEx(&stru_1800640D0, 0, 0);
  qword_180064138 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1800640F8 = 0LL;
  xmmword_180064108 = 0LL;
  xmmword_180064118 = 0LL;
  xmmword_180064128 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
