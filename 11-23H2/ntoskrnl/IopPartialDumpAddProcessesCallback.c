/*
 * XREFs of IopPartialDumpAddProcessesCallback @ 0x14055D870
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessThreadsToDump @ 0x14055C500 (IoAddProcessThreadsToDump.c)
 */

__int64 __fastcall IopPartialDumpAddProcessesCallback(__int64 a1, __int64 a2)
{
  return IoAddProcessThreadsToDump(a1, a2);
}
