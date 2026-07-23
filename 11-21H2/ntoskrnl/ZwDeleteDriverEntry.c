/*
 * XREFs of ZwDeleteDriverEntry @ 0x14041D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDeleteDriverEntry(ULONG Id)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&Id, v1);
}
