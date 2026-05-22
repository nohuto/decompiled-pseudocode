/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar @ 0x1800563C4
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0 @ 0x180083E10 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_EtwLogger___0.c)
 * Callees:
 *     <none>
 */

__int64 anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar()
{
  REGHANDLE v0; // rcx

  v0 = qword_180275528;
  qword_180275528 = 0LL;
  dword_180275508 = 0;
  EventUnregister(v0);
  return McGenEventUnregister_EventUnregister();
}
