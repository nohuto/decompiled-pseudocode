/*
 * XREFs of sub_140592348 @ 0x140592348
 * Callers:
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

__int64 __fastcall sub_140592348(unsigned __int64 a1)
{
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    sub_14028FBF0(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return 0LL;
}
