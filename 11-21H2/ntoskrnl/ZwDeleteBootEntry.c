/*
 * XREFs of ZwDeleteBootEntry @ 0x14041D220
 * Callers:
 *     sub_14061F510 @ 0x14061F510 (sub_14061F510.c)
 *     sub_140A1F760 @ 0x140A1F760 (sub_140A1F760.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDeleteBootEntry(ULONG Id)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&Id, v1);
}
