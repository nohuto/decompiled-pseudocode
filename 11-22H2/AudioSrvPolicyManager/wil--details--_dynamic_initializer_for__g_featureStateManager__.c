/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180062128 = 0LL;
  xmmword_180062108 = 0LL;
  xmmword_180062118 = 0LL;
  InitializeCriticalSectionEx(&stru_180062130, 0, 0);
  qword_180062198 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180062158 = 0LL;
  xmmword_180062168 = 0LL;
  xmmword_180062178 = 0LL;
  xmmword_180062188 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
