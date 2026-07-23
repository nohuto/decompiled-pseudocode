/*
 * XREFs of IopLiveDumpAddProcesses @ 0x140A99FC0
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessesToDump @ 0x14055CC64 (IoAddProcessesToDump.c)
 */

__int64 __fastcall IopLiveDumpAddProcesses(__int64 a1, __int64 a2)
{
  return IoAddProcessesToDump(
           a2,
           (__int64 (__fastcall *)(__int64, __int64 *, __int64))IopLiveDumpAddProcessesCallback,
           a1);
}
