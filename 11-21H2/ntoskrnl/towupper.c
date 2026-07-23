/*
 * XREFs of towupper @ 0x1403E3180
 * Callers:
 *     sub_1408505D0 @ 0x1408505D0 (sub_1408505D0.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1407CD620 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
