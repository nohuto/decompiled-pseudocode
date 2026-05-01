/*
 * XREFs of __crt_debugger_hook @ 0x1801C6E5C
 * Callers:
 *     __scrt_fastfail @ 0x1801C6E6C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
