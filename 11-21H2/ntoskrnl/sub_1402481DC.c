/*
 * XREFs of sub_1402481DC @ 0x1402481DC
 * Callers:
 *     PsQueryTotalCycleTimeProcess @ 0x1406C73D0 (PsQueryTotalCycleTimeProcess.c)
 *     sub_140961F3C @ 0x140961F3C (sub_140961F3C.c)
 * Callees:
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 */

__int64 __fastcall sub_1402481DC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = sub_140345AA0(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
