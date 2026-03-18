/*
 * XREFs of VfMiscExInitializePagedLookasideList_Exit @ 0x140ADFB90
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideAdd @ 0x140AE2270 (VfLookasideAdd.c)
 */

__int64 __fastcall VfMiscExInitializePagedLookasideList_Exit(__int64 a1)
{
  return VfLookasideAdd(*(_QWORD *)(a1 + 56));
}
