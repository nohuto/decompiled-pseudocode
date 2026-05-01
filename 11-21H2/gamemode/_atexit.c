/*
 * XREFs of _atexit @ 0x10006F53
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x100020A0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x100020C0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     __onexit @ 0x10006EAA (__onexit.c)
 */

int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != 0) - 1;
}
