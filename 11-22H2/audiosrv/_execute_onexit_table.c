/*
 * XREFs of _execute_onexit_table @ 0x18006796E
 * Callers:
 *     __scrt_dllmain_uninitialize_c @ 0x180066D94 (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl execute_onexit_table(_onexit_table_t *Table)
{
  return _execute_onexit_table(Table);
}
