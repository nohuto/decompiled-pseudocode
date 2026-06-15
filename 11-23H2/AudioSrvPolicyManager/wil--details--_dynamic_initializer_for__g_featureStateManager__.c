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
  qword_180060128 = 0LL;
  xmmword_180060108 = 0LL;
  xmmword_180060118 = 0LL;
  InitializeCriticalSectionEx(&stru_180060130, 0, 0);
  qword_180060198 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180060158 = 0LL;
  xmmword_180060168 = 0LL;
  xmmword_180060178 = 0LL;
  xmmword_180060188 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
