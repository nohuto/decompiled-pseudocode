/*
 * XREFs of ViIovExFreePool_Entry @ 0x1405D1E80
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140ADA130 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePool_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 8));
}
