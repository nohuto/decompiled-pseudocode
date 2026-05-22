/*
 * XREFs of _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__ @ 0x180083C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__()
{
  REGHANDLE v0; // rcx

  v0 = qword_1802754F0;
  qword_1802754F0 = 0LL;
  dword_1802754D0 = 0;
  return EventUnregister(v0);
}
