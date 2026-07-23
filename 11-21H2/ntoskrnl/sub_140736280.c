/*
 * XREFs of sub_140736280 @ 0x140736280
 * Callers:
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140736280(__int64 a1)
{
  return *(_QWORD *)(a1 + 56) == (_QWORD)KeGetCurrentThread();
}
