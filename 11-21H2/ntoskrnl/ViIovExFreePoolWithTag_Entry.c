/*
 * XREFs of ViIovExFreePoolWithTag_Entry @ 0x140601BD0
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140A9A2D0 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePoolWithTag_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 16));
}
