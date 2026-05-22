/*
 * XREFs of _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__ @ 0x180058CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__()
{
  REGHANDLE v0; // rcx

  v0 = qword_180240468;
  qword_180240468 = 0LL;
  dword_180240448 = 0;
  return EventUnregister(v0);
}
