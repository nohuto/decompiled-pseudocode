/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x1407B003C
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140339DD0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExCreateHandleTable @ 0x1407B05C8 (ExCreateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  __int64 HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0LL);
  *(_QWORD *)(a1 + 16) = HandleTable;
  return HandleTable != 0;
}
