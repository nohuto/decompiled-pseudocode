/*
 * XREFs of VfMiscExInitializePagedLookasideList_Exit @ 0x140ADFB80
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideAdd @ 0x140AE2260 (VfLookasideAdd.c)
 */

__int64 __fastcall VfMiscExInitializePagedLookasideList_Exit(__int64 a1)
{
  return VfLookasideAdd(*(_QWORD *)(a1 + 56));
}
