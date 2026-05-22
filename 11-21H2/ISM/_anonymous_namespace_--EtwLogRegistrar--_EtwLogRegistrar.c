/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar @ 0x180049544
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0 @ 0x180058E80 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_EtwLogger___0.c)
 * Callees:
 *     <none>
 */

__int64 anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar()
{
  REGHANDLE v0; // rcx

  v0 = qword_1802404E8;
  qword_1802404E8 = 0LL;
  dword_1802404C8 = 0;
  EventUnregister(v0);
  return McGenEventUnregister_EventUnregister();
}
