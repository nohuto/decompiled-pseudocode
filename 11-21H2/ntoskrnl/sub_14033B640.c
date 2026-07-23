/*
 * XREFs of sub_14033B640 @ 0x14033B640
 * Callers:
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_1403137B0 @ 0x1403137B0 (sub_1403137B0.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14033B640(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C50780 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C50780;
  }
  return HIDWORD(a1) == 1;
}
