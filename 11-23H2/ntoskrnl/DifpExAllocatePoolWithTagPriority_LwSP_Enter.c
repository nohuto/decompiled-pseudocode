/*
 * XREFs of DifpExAllocatePoolWithTagPriority_LwSP_Enter @ 0x140AE7B60
 * Callers:
 *     <none>
 * Callees:
 *     DifpLwSPProcessPrePoolAlloc @ 0x140AE7C0C (DifpLwSPProcessPrePoolAlloc.c)
 */

__int64 __fastcall DifpExAllocatePoolWithTagPriority_LwSP_Enter(__int64 a1)
{
  return DifpLwSPProcessPrePoolAlloc(*(unsigned int *)(a1 + 36), *(_QWORD *)(a1 + 40));
}
