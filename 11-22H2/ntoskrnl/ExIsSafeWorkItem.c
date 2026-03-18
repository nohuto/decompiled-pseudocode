/*
 * XREFs of ExIsSafeWorkItem @ 0x1403E3070
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1405FD780 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1403E3F10;
}
