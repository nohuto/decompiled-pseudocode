/*
 * XREFs of sub_1408394A0 @ 0x1408394A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteOwnersRanges @ 0x140839700 (RtlDeleteOwnersRanges.c)
 */

__int64 __fastcall sub_1408394A0(__int64 a1)
{
  return RtlDeleteOwnersRanges(*(_QWORD *)(a1 + 48));
}
