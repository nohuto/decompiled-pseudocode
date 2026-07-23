/*
 * XREFs of ExIsSafeWorkItem @ 0x1403E38B0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1405FDC60 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1403E4750;
}
