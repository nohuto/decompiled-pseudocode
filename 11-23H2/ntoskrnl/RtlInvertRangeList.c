/*
 * XREFs of RtlInvertRangeList @ 0x1408145C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x1408147B0 (RtlInvertRangeListEx.c)
 */

__int64 __fastcall RtlInvertRangeList(int a1, int a2)
{
  return RtlInvertRangeListEx(a1, a2, 0, 0, 0LL);
}
