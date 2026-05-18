/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800019D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180016110 = 0LL;
  xmmword_1800160F0 = 0LL;
  xmmword_180016100 = 0LL;
  InitializeCriticalSectionEx(&stru_180016118, 0, 0);
  qword_180016180 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180016140 = 0LL;
  xmmword_180016150 = 0LL;
  xmmword_180016160 = 0LL;
  xmmword_180016170 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
