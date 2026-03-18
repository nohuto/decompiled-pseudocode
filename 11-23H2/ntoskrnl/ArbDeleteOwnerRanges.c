/*
 * XREFs of ArbDeleteOwnerRanges @ 0x140815430
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteOwnersRanges @ 0x140815520 (RtlDeleteOwnersRanges.c)
 */

__int64 __fastcall ArbDeleteOwnerRanges(__int64 a1)
{
  return RtlDeleteOwnersRanges(*(_QWORD *)(a1 + 48));
}
