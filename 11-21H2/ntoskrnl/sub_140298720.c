/*
 * XREFs of sub_140298720 @ 0x140298720
 * Callers:
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_1409ACDC0 @ 0x1409ACDC0 (sub_1409ACDC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140298720(unsigned int *a1, char a2)
{
  unsigned int v2; // eax

  v2 = *a1;
  if ( (*a1 & 0x10000) != 0 && (v2 & 0x27FEFF80) == 0
    || (v2 & 0x7FFFF20) == 0x100000
    || (v2 & 0x7FFFFF0) == 0x200000
    || (v2 & 0x7FFFFE0) == 0x400000 )
  {
    if ( ((v2 & 0x100040) == 1048640 || (v2 & 0x10040) == 65600) && !MEMORY[0xFFFFF780000003D8]
      || (v2 & 0x100080) == 0x100080 && !(_BYTE)byte_140E01841 )
    {
      return 3221225659LL;
    }
    if ( (v2 & 0x100000) != 0 )
      return 0LL;
  }
  if ( a2 )
  {
    *a1 = v2 & 0xF800001F | 0x100000;
    return 0LL;
  }
  return 3221225485LL;
}
