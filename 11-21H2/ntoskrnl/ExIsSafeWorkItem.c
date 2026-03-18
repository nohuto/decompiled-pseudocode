/*
 * XREFs of ExIsSafeWorkItem @ 0x1403EB000
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x14062E6D0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1403EBEB0;
}
