/*
 * XREFs of sub_140232ED8 @ 0x140232ED8
 * Callers:
 *     sub_1406AB17C @ 0x1406AB17C (sub_1406AB17C.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1406AB410 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall sub_140232ED8(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
